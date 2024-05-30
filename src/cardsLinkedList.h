#ifndef cardsLinkedList
#define cardsLinkedList

#include <bits/stdc++.h>

#include <sys/stat.h>    // 用于创造文件的mkdir
#include <sys/types.h>

#include <unistd.h>  // 判断文件是否存在

#include <cstring>  // 用处字符串处理

using namespace std;

extern const char DATA_ADDR[];

const char CARDS_ADDR[] = "data/cards.txt";

struct card{
	int id;
	char pwd[10];
	int value;  // 头节点value为元素个数
};

struct cardNode{
	card data;
	cardNode *next;
};


//extern cardNode *head;

// ------------------------

void initCard(cardNode **head);

void addCard(cardNode *head,int id,int value,char *pwd);

cardNode * searchCard(cardNode *head,int id);

void deleteCard(cardNode *head,int id);

void writeCard(cardNode *head);

void loadCard(cardNode *head);

void initCardsFromFiles(cardNode **head);

void printfCards(cardNode *head);


#endif
