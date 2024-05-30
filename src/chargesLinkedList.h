#ifndef chargesLinkedList
#define chargesLinkedList

#include <sys/stat.h>    // 用于创造文件的mkdir
#include <sys/types.h>

#include <cstring>
#include <bits/stdc++.h>


extern const char DATA_ADDR[];

const char CHARGES_ADDR[] = "data/charges.txt";

struct charge{
	int id;  // 标注每一个charge的id
	int fee;   // fee pre hour 一个小时的费用
	char desc[60];  // 描述 description
	
//	charge(){                        // new的初始化
//		strcpy(desc,"青铜区");
//		id = 0;
//		fee = 0;
//	}
};

struct chargeNode{
	charge data;
	chargeNode * next;
};

using namespace std;

// -----------------------

void initCharge(chargeNode **head);

void addCharge(chargeNode *head,int id,int fee,char *desc);

chargeNode * searchCharge(chargeNode *head,int id);

void deleteCharge(chargeNode *head,int id);

void writeCharge(chargeNode *head);

void loadCharge(chargeNode *head);

void initChargesFromFiles(chargeNode **head);

void printfCharges(chargeNode *head);

#endif


