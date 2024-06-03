#ifndef permsLinkedList
#define permsLinkedList

#define Status int


#include <bits/stdc++.h>

#include <sys/stat.h>    // 用于创造文件的mkdir
#include <sys/types.h>

#include <unistd.h>  // 判断文件是否存在

#include <cstring>  // 用处字符串处理

using namespace std;

extern const char DATA_ADDR[];

const char PERMS_ADDR[] = "data/perms.txt";
const char PERM_ADDR[] = "data/perm.txt";

struct perm{
	int id;    // id 在头节点也是存储数量的
	char pwd[50];
	int p1;
	int p2;
	int p3;
	int p4;
	int p5;
	int p6;
};

struct permNode{
	perm data;
	permNode *next;
};


//extern permNode *head;

// ------------------------

void initPerm(permNode **head);

void addPerm(permNode *head,permNode *a);

permNode * searchPerm(permNode *head,int id);

Status deletePerm(permNode *head,int id);

void writePerm(permNode *head,const char *addr);

void loadPerm(permNode *head,const char *addr);

void initPermsFromFiles(permNode **head);

void initPermFromFiles(permNode **head);

void printfPerms(permNode *head);

void messagePerm(permNode *a);

#endif
