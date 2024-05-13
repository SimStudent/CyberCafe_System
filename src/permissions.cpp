#include "permissions.h"

// 此文件描述的是对管理员权限数据的增删查改

//struct manager{
//	int super;
//	string name;
//	string password;
//};
//
//struct managerNode{
//	struct manager data;
//	managerNode * next;
//};
 
managerNode * head;

// ------------------------------

Status initManageList(managerNode **head){
	*head = (managerNode *)malloc(sizeof(managerNode));
	(*head)->data.super = 0;
	(*head)->next = NULL;
	return 1;
}

managerNode* searchManager(managerNode *head,string name){
	managerNode *ptr = head;  //如果ptr=head->next,那么循环中ptr!=NULL,且要ptr往后遍历再进行操作
	
	while(ptr->next!=NULL){
		ptr = ptr->next;
		if(name.compare(ptr->data.name)==0){
			return ptr;
		}
	}
	return NULL;
}

Status insertManageList(managerNode *head,manager x){  // 头插
	if(searchManager(head,x.name)!=NULL)return 0;
	managerNode * p = packManager(x);
	p->next = head->next;
	head->next = p;
	
	head->data.super++;  // 插入后加一个
	
	return 1;
}

Status deleteManager(managerNode *head,string name){  //TODO
	if(searchManager(head,name)!=NULL)return 0;
	
}

Status destroyManageList(managerNode **head){
	managerNode *p, *q;
	p = *head;
	while(p!=NULL){
		q = p;
		p = p->next;
		free(q);
	}
	*head = NULL;  // p和q不置空是因为离开函数后就会销毁,head置空是因为其在该栈定义域内不销毁
	return 1;
}

Status writeManageList(managerNode *head){
	FILE *fp;
	if((fp = fopen(PERMISSIONS_ADDR,"wb")) == NULL){
		cout<<PERMISSIONS_ADDR<<"|The opening operation is worng!"<<endl;
		return 0;
	}
	
	managerNode *ptr = head;
	while(ptr!=NULL){
		fwrite(ptr,sizeof(managerNode),1,fp);
		ptr = ptr->next;
	}
	fclose(fp);
	return 1;
}

Status loadManageList(managerNode **head){  //TODO
	FILE *fp;
	if((fp = fopen(PERMISSIONS_ADDR,"rb")) == NULL){
		cout<<PERMISSIONS_ADDR<<"|The opening operation is worng!"<<endl;
		return 0;
	}
	initManageList(head);
	
	
	
	
	
	return 1;
}

// ------ 杂项

manager newManager(int super,string name,string password){
	manager a;
	a.super = super;
	a.name = name;
	a.password = password;
	return a;
}

managerNode * packManager(manager x){
	managerNode * ptr = (managerNode *)malloc(sizeof(managerNode));
	ptr->data = x;
	ptr->next = NULL;
	return ptr;
}

bool isSuper(manager a){
	return a.super;
}

int countManageList(managerNode *head){
	return head->data.super;
}

// ------- 测试

void printManageList(managerNode *head){
	cout<<"链表遍历测试| 有"<<countManageList(head)<<"个节点"<<endl;
	cout<<"姓名 | 密码 | 是否超级管理员"<<endl;
	
	managerNode *ptr = head->next;
	while(ptr!=NULL){
		cout<<ptr->data.name<<" "<<ptr->data.password<<" "<<ptr->data.super<<endl;
	}
	return;
}

int main(){
//	FILE *fp = fopen(PERMISSIONS_ADDR,"w");  // TODO:fopen 创造 读取 检测 文件夹内文件
	
	// 对文件流的预处理
	
//	cout<<access("HBK08.txt",F_OK);
	
	
	
	managerNode *head;
	
	if((mkdir(DATA_ADDR)) == 0)cout<<"Directory created successfully"<<endl;
	else cout<<"Failed to create directory: maybe because its exist."<<endl;
	
	if(access(PERMISSIONS_ADDR,F_OK) == 0){
		// 存在该文件
		loadManageList(&head);
	}
	else{
		// 不存在该文件
		initManageList(&head);
		writeManageList(head);
	}
	
	// 经过一系列操作
	
	
	
	
	
	
	
	
	// 创建目录
//	int ret = mkdir("asshole");
//	if(ret == 0)cout<<"Directroy created successfully"<<endl;
//	else cout<<"Failed to create directory"<<endl;
	
//	FILE *fp;
//	cout<<PERMISSIONS_ADDR;
//	fp = fopen("data\\managers.dat","w");
//	
	
//	if(fopen(PERMISSIONS_ADDR,"w"))cout<<"存在该文件";
//	else cout<<"不存在";
}




// -------

//bool isSuper(manager *a){
//	return a->super;
//}
//
//int countManager(managerNode *head){
//	return head->elem->super;
//}
//
//manager* searchManager(managerNode *head,string target){
//	managerNode * ptr = head;
//	while(ptr!=NULL){
//		string temp = ptr->elem->name;
//		if(target.compare(temp)==0){
//			return ptr->elem;
//		}	
//	}
//	return NULL;
//}
//
//// ###############
//
//Status initManager(managerNode *node,manager *elem){
//	node->elem = elem;
//	node->next = NULL;
//	return 1;
//}
//
//
//Status initManager(managerNode *node,string name,string password){  // 直接构造manager装箱节点
//	manager elem;
//	elem.name = name;
//	elem.password = password;
//	node->elem = &elem;
//	node->next = NULL;
//	return 1;
//}
//
//Status addManager(managerNode *head,manager* elem){
//	managerNode *ptr = head;
//	while(ptr!=NULL)ptr = ptr->next;
//	managerNode *node; initManager(node,elem);
//	node->next = ptr->next;
//	ptr->next = node;
//	
//	head->elem->super++;
//	
//	return 1;
//}
//
//Status deleteManager(managerNode *head,manager* elem){
//	
//	return 1;
//}
//
//
//// #####################
//
//Status initManagers(managerNode *head){
//	head = (managerNode *)malloc(sizeof(managerNode));
//	head->next =NULL;
//	return 1;
//}
//
//Status writeManagers(managerNode *head){
//	FILE *fp;
//	if((fp = fopen(managersAddr,"wb")) == NULL){
//		cout<<"The opening operation is worng! managers.dat";
//		return 0;
//	}
//	
//	managerNode *ptr = head;
//	while(ptr!=NULL){
//		fwrite(ptr,sizeof(ptr),1,fp);
//		ptr = ptr->next;
//	}
//	fclose(fp);
//	
//}
//
//// ######  以下是模块测试
//
//void test(){
//	managerNode *temp;
//	cout<<1<<endl;
//	initManager(temp,"SimStudent","G13570517083");
//	cout<<2<<endl;
//	managerNode *head; initManagers(head);
//	cout<<3<<endl;
//	writeManagers(head);
//	cout<<4<<endl;
//}
//
//int main(){
//
//	test();
//	
//	
//	
//	
//}
