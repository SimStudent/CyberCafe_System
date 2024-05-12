#include <bits/stdc++.h>
#define Status int
using namespace std;

const char PERMISSIONS_ADDR[] = "data/managers.dat";

struct manager{
	int super;  // 是否超级管理员(是1/否0)，链表的首节点为数字
	string name;
	string password;
};

struct managerNode{
	struct manager data;
	managerNode * next;
};

// ------------------------------

Status initManageList(managerNode **head);  // 初始化链表的头节点

managerNode* searchManager(managerNode *head,string name); // 根据名称找对象。找到就返回一个对象（可修改的），找不到就返回NULL

Status insertManageList(managerNode *head,manager x);  // 给链表头插一个manager对象（检测是否有同名）

Status deleteManager(managerNode *head,string name);  // 根据名称删除

Status destroyManageList(managerNode **head);  // 销毁整条链表

Status writeManageList(managerNode *head);  // 将权限通过流写入的文件之中（二进制模式）

Status loadManageList(managerNode *head);  // 从文件中读取权限（二进制模式）


// -------  杂项

manager newManager(int super,string name,string password);  // 构造一个manager对象

managerNode * packManager(manager x); // 元素装箱，使用值传递

bool isSuper(manager a); // 是否超级管理员

int countManageList(managerNode *head);  // 通过头节点来获取manager对象的多少

// -------  测试

void printManageList(managerNode *head);  // 测试用途：遍历访问打印整个链表（包括头信息，以及各个节点的具体信息）


//-------




//
//bool isSuper(manager* a);  // 是否超级管理员
//
//int countManager(managerNode *head);
//
//manager* searchManager(managerNode *head,string target);  // 通过名称查找
//
//Status initManager(managerNode *node,manager *elem);
//Status initManager(managerNode *node,string name,string password);
//Status addManager(managerNode *head,manager* elem);
//Status deleteManager(managerNode *head,manager* elem);
//
//Status initManagers(managerNode *head);
//Status writeManagers(managerNode *head);
//Status loadManagers(managerNode *head);

