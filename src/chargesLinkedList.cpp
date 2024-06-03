#include "chargesLinkedList.h"

void initCharge(chargeNode **head){
	*head = (chargeNode *)malloc(sizeof(chargeNode)); 
	(*head)->data.id = 0;
	(*head)->data.fee = 0;
	strcpy((*head)->data.desc,"头节点");
	(*head)->next = nullptr;
}

void addCharge(chargeNode *head,int id,int fee,char *desc){
	if(searchCharge(head,id)!=nullptr)return;
	else{
		chargeNode *elem = new chargeNode;
		elem->data.id = id;
		elem->data.fee = fee;
		strcpy(elem->data.desc,desc);
		elem->next = head->next;    // 头插
		head->next = elem;
		head->data.id++;
	}
}

chargeNode * searchCharge(chargeNode *head,int id){
	chargeNode * t = head->next;
	while(t != nullptr){
		if(id == t->data.id)return t;
		t = t->next;
	}
	return t;
}

void deleteCharge(chargeNode *head,int id){
	if(searchCharge(head,id)==nullptr)return;
	else{
		
		chargeNode *curr = head->next, *pre = head;
		
		while(curr->data.id != id){
			pre = curr;
			curr = curr->next;
		}
		
		pre->next = curr->next;
		delete curr;
		
		head->data.id--;
	}
}

void writeCharge(chargeNode *head){
	FILE *fp = fopen(CHARGES_ADDR,"w");
	chargeNode * ptr = head;
	while(ptr != nullptr){
		
		fprintf(fp,"%d%c%d%c%s%c",ptr->data.id,' ',ptr->data.fee,' ',ptr->data.desc,'\n');
		
		ptr = ptr->next;
	}
	fclose(fp);
}

void loadCharge(chargeNode *head){  // 这个head已经初始化的
	FILE *fp = fopen(CHARGES_ADDR,"r");
	
	int id,fee; 
	char desc[60];
	
	chargeNode * ptr = head;
	fscanf(fp,"%d%d%s",&id,&fee,desc);
	ptr->data.id = id;
	ptr->data.fee = fee;
	strcpy(ptr->data.desc,desc);
	
	int n = ptr->data.id;
	while(n){
		
		chargeNode *temp = new chargeNode;
		
		fscanf(fp,"%d%d%s",&id,&fee,desc);
		
		temp->data.id = id;
		temp->data.fee = fee;
		strcpy(temp->data.desc,desc);
		
		temp->next = ptr->next;
		ptr->next = temp;
		
		n--;
	}
	fclose(fp);
}

// ####################

void initChargesFromFiles(chargeNode **a){  // 文件流的初始化
	if((mkdir(DATA_ADDR)) == 0)cout<<"Directory created successfully."<<endl;
	else cout<<"Failed to create directory: maybe because its exist."<<endl;
	
	if(access(CHARGES_ADDR,F_OK) == 0){
		// 文件存在 读取
		initCharge(a);
		loadCharge(*a);
	}
	else{
		// 不存在 创造写入
		initCharge(a);
		writeCharge(*a);
	}
}

void printfCharges(chargeNode *head){
	chargeNode * ptr = head;
	cout<<"ChargesLinkedList | 有 "<<ptr->data.id<<" 个标准"<<endl;
	
	ptr = ptr->next;
	
	cout<<"号码 | 费用/h | 标准"<<endl;
	while(ptr!=nullptr){
		cout<<"("<<ptr->data.id<<","<<ptr->data.fee<<","<<ptr->data.desc<<")"<<endl;
		ptr = ptr->next;
	}
}
