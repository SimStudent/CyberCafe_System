#include "permsLinkedList.h"

void initPerm(permNode **head){
	*head = (permNode *)malloc(sizeof(permNode)); 
	
	(*head)->data.id = 0;
	strcpy((*head)->data.pwd,"GG");
	
	(*head)->data.p1 = 0;
	(*head)->data.p2 = 0;
	(*head)->data.p3 = 0;
	(*head)->data.p4 = 0;
	(*head)->data.p5 = 0;
	(*head)->data.p6 = 0;
	(*head)->next = nullptr;
}

void addPerm(permNode *head,permNode *elem){
	if(searchPerm(head,elem->data.id)!=nullptr)return;
	else{
		elem->next = head->next;  // 头插
		head->next = elem;
		head->data.id++;
	}
}

permNode * searchPerm(permNode *head,int id){
	permNode * t = head->next;
	while(t != nullptr){
		if(id == t->data.id)return t;
		t = t->next;
	}
	return t;
}

Status deletePerm(permNode *head,int id){
	if(searchPerm(head,id)==nullptr)return 0;
	else{
		
		permNode *curr = head->next, *pre = head;
		
		while(curr->data.id != id){
			pre = curr;
			curr = curr->next;
		}
		
		pre->next = curr->next;
		delete curr;
		
		head->data.id--;
		return 1;
	}
}

void writePerm(permNode *head,const char *addr){
	FILE *fp = fopen(addr,"w");
	permNode * ptr = head;
	while(ptr != nullptr){
		
		fprintf(fp,"%d%c%s%c",ptr->data.id,' ',ptr->data.pwd,'\n');
		fprintf(fp,"%d%c%d%c%d%c%d%c%d%c%d%c",ptr->data.p1,' ',ptr->data.p2,' ',ptr->data.p3,
			' ',ptr->data.p4,' ',ptr->data.p5,' ',ptr->data.p6,'\n');
		
		ptr = ptr->next;
	}
	fclose(fp);
}

void loadPerm(permNode *head,const char *addr){  // 这个head已经初始化的
	FILE *fp = fopen(addr,"r");
	
	permNode * ptr = head;
	fscanf(fp,"%d%s",&(ptr->data.id),ptr->data.pwd);
	fscanf(fp,"%d%d%d%d%d%d",&(ptr->data.p1),&(ptr->data.p2),&(ptr->data.p3),
		&(ptr->data.p4),&(ptr->data.p5),&(ptr->data.p6));

	int n = ptr->data.id;
	
	if(strcmp(addr,"data/perm.txt") == 0){
		fclose(fp);
		return;
	}
	
	while(n){
		
		permNode *temp = new permNode;
		
		fscanf(fp,"%d%s",&(temp->data.id),temp->data.pwd);
		fscanf(fp,"%d%d%d%d%d%d",&(temp->data.p1),&(temp->data.p2),&(temp->data.p3),
			&(temp->data.p4),&(temp->data.p5),&(temp->data.p6));
		
		temp->next = ptr->next;
		ptr->next = temp;
		
		n--;
	}
	fclose(fp);
}

// ####################

void initPermsFromFiles(permNode **a){  // 文件流的初始化
	if((mkdir(DATA_ADDR)) == 0)cout<<"Directory created successfully."<<endl;
	else cout<<"Failed to create directory: maybe because its exist."<<endl;
	
	if(access(PERMS_ADDR,F_OK) == 0){
		// 文件存在 读取
		initPerm(a);
		loadPerm(*a,PERMS_ADDR);
	}
	else{
		// 不存在 创造写入
		initPerm(a);
		writePerm(*a,PERMS_ADDR);
	}
}

void initPermFromFiles(permNode **a){  // 文件流的初始化
	if((mkdir(DATA_ADDR)) == 0)cout<<"Directory created successfully."<<endl;
	else cout<<"Failed to create directory: maybe because its exist."<<endl;
	
	if(access(PERM_ADDR,F_OK) == 0){
		// 文件存在 读取
		initPerm(a);
		loadPerm(*a,PERM_ADDR);
	}
	else{
		// 不存在 创造写入
		initPerm(a);
		writePerm(*a,PERM_ADDR);
	}
}

void printfPerms(permNode *head){
	permNode * ptr = head;
	cout<<"PermsLinkedList | 有 "<<ptr->data.id<<" 个管理员"<<endl;
	
	while(ptr!=nullptr){
		printf("%d%c%s%c",ptr->data.id,' ',ptr->data.pwd,'\n');
		printf("%d%c%d%c%d%c%d%c%d%c%d%c",ptr->data.p1,' ',ptr->data.p2,' ',ptr->data.p3,
			' ',ptr->data.p4,' ',ptr->data.p5,' ',ptr->data.p6,'\n');
		cout<<endl;
		
		ptr = ptr->next;
	}
}

void messagePerm(permNode *a){
	
	if(a->data.id <= 0)return;
	
	int permRank = a->data.p1 + a->data.p2 + a->data.p3 + a->data.p4 + a->data.p5 + a->data.p6;
	
	switch(permRank){
	case 0:cout<<"奴隶";break;
	case 1:cout<<"佃农";break;
	case 2:cout<<"工人";break;
	case 3:cout<<"牧师";break;
	case 4:cout<<"骑士";break;
	case 5:cout<<"领主";break;
	case 6:cout<<"国王";break;
	}
	cout<<" 号码："<<a->data.id;
}
