#include "permissions.h"

// 此文件描述的是对管理员权限数据的增删查改

//struct manager{
//	int super;
//	string name;
//	string password;
//};
//
//struct managerNode{
//	struct manager *elem;
//	managerNode * next;
//};
 
managerNode * head;

// ------------------------------

bool isSuper(manager *a){
	return a->super;
}

int countManager(managerNode *head){
	return head->elem->super;
}

manager* searchManager(managerNode *head,string target){
	managerNode * ptr = head;
	while(ptr!=NULL){
		string temp = ptr->elem->name;
		if(target.compare(temp)==0){
			return ptr->elem;
		}	
	}
	return NULL;
}

// ###############


Status initManager(managerNode *node,manager* elem){  // elem装箱节点
	
}

Status addManager(managerNode *head,manager* elem){
	managerNode *ptr = head;
	while(ptr!=NULL)ptr = ptr->next;
	
	managerNode *temp = initManager(elem);
	
	elem->next = ptr->next;
	
	
}

Status deleteManager(managerNode *head,manager* elem){
	
}


// #####################

Status initManagers(managerNode *head){
	manager * elem; elem->super = 0;
	head->elem = elem;
	head->next =NULL;
	return 1;
}


