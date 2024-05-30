#include "cardsLinkedList.h"

void initCard(cardNode **head){
	*head = (cardNode *)malloc(sizeof(cardNode)); 
	(*head)->data.id = 0;
	(*head)->data.value = 0;
	strcpy((*head)->data.pwd,"GG");
	(*head)->next = nullptr;
}

void addCard(cardNode *head,int id,int value,char *pwd){
	if(searchCard(head,id)!=nullptr)return;
	else{
		cardNode *elem = new cardNode;
		elem->data.id = id;
		elem->data.value = value;
		strcpy(elem->data.pwd,pwd);
		elem->next = head->next;  // 头插
		head->next = elem;
		head->data.value++;
	}
}

cardNode * searchCard(cardNode *head,int id){
	cardNode * t = head->next;
	while(t != nullptr){
		if(id == t->data.id)return t;
		t = t->next;
	}
	return t;
}

void deleteCard(cardNode *head,int id){
	if(searchCard(head,id)==nullptr)return;
	else{
		
		cardNode *curr = head->next, *pre = head;
		
		while(curr->data.id != id){
			pre = curr;
			curr = curr->next;
		}
		
		pre->next = curr->next;
		delete curr;
		
		head->data.value--;
	}
}

void writeCard(cardNode *head){
	FILE *fp = fopen(CARDS_ADDR,"w");
	cardNode * ptr = head;
	while(ptr != nullptr){
		
		fprintf(fp,"%d%c%d%c%s%c",ptr->data.id,' ',ptr->data.value,' ',ptr->data.pwd,'\n');
		
		ptr = ptr->next;
	}
	fclose(fp);
}

void loadCard(cardNode *head){  // 这个head已经初始化的
	FILE *fp = fopen(CARDS_ADDR,"r");
	
	int id,value; 
	char pwd[10];
	
	cardNode * ptr = head;
	fscanf(fp,"%d%d%s",&id,&value,pwd);
	ptr->data.id = id;
	ptr->data.value = value;
	strcpy(ptr->data.pwd,pwd);
	
	int n = ptr->data.value;
	while(n){
		
		cardNode *temp = new cardNode;
		
		fscanf(fp,"%d%d%s",&id,&value,pwd);
		
		temp->data.id = id;
		temp->data.value = value;
		strcpy(temp->data.pwd,pwd);
		
		temp->next = ptr->next;
		ptr->next = temp;
		
		n--;
	}
	fclose(fp);
}

// ####################

void initCardsFromFiles(cardNode **a){  // 文件流的初始化
	if((mkdir(DATA_ADDR)) == 0)cout<<"Directory created successfully."<<endl;
	else cout<<"Failed to create directory: maybe because its exist."<<endl;
	
	if(access(CARDS_ADDR,F_OK) == 0){
		// 文件存在 读取
		initCard(a);
		loadCard(*a);
	}
	else{
		// 不存在 创造写入
		initCard(a);
		writeCard(*a);
	}
}

void printfCards(cardNode *head){
	cardNode * ptr = head;
	cout<<"CardsLinkedList | 有 "<<ptr->data.value<<" 张卡"<<endl;
	
	ptr = ptr->next;
	
	cout<<"卡号 | 金额 | 密码"<<endl;
	while(ptr!=nullptr){
		cout<<"["<<ptr->data.id<<","<<ptr->data.value<<","<<ptr->data.pwd<<"]"<<endl;
		ptr = ptr->next;
	}
}


