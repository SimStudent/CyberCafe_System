#include <bits/stdc++.h>
#define Status int
using namespace std;

struct manager{
	int super;  // 是否超级管理员(是1/否0)，链表的首节点为数字
	string name;
	string password;
};

struct managerNode{
	struct manager *elem;
	managerNode * next;
};

// ------------------------------

bool isSuper(manager* a);  // 是否超级管理员

int countManager(managerNode *head);

manager* searchManager(managerNode *head,string target);  // 通过名称查找

Status initManager(managerNode *node,manager* elem);
Status addManager(managerNode *head,manager* elem);
Status deleteManager(managerNode *head,manager* elem);

Status initManagers(managerNode *head);
Status writeManagers(managerNode *head);
Status loadManagers(managerNode *head);
