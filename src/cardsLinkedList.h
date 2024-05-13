#include <bits/stdc++.h>
#define Status int

using namespace std;

struct card{
	int id;
	int value;
};

struct cardNode{
	struct card data;
	cardNode *next;
};

// ------------------------

Status initCardsList(cardNode **head);  // 初始化链表的头节点

cardNode* searchCard(cardNode *head,int id); // 根据名称找对象。找到就返回一个对象（可修改的），找不到就返回NULL

Status insertCardsList(cardNode *head,card x);  // 给链表头插一个card对象（检测是否有同名）

Status deleteCard(cardNode *head,string name);  // 根据名称删除

Status destroyCardsList(cardNode **head);  // 销毁整条链表

Status writeCardsList(cardNode *head);  // 将卡号数据通过流写入的文件之中（二进制模式）

Status loadCardsList(cardNode **head);  // 从文件中读取权限（二进制模式）


// -------  杂项

card newCard(int super,string name,string password);  // 构造一个card对象

cardNode * packCard(card x); // 元素装箱，使用值传递

int countCardsList(cardNode *head);  // 通过头节点来获取card对象的多少

// -------  测试

void printCardsList(cardNode *head);  // 测试用途：遍历访问打印整个链表（包括头信息，以及各个节点的具体信息）
