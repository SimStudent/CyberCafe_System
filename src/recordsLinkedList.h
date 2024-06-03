#ifndef recordsLinkedList
#define recordsLinkedList

#include <sys/stat.h>   // 用于创造文件的 mkdir
#include <sys/types.h>

#include "timeSolutions.h"


extern const char DATA_ADDR[];

const char RECORDS_ADDR[] = "data/records.txt";

struct record{
	int user;    //  用户 编号 (头节点user用于储存记录的个数)
	int charge;   //  计费标准 编号
	int total;    // 总费用
	tm first;    // 上机时间
	tm last;     // 下机时间
	td dur;      //持续时间
};

struct recordNode{
	record data;
	recordNode *next;
};

using namespace std;

// ------------------------

void initRecord(recordNode **head);

void addRecord(recordNode *head,recordNode *aNode);

void addRecord(recordNode *head,int id,int value,char *pwd);

recordNode * searchFirstRecord(recordNode *head,int user);

recordNode * searchNextRecord(recordNode *head,int user,recordNode *curr);

void deleteRecord(recordNode *head,int id);

void writeRecord(recordNode *head);

void loadRecord(recordNode *head);

void initRecordsFromFiles(recordNode **head);

void printfRecords(recordNode *head);

void countFee(recordNode *a);

void countDur(recordNode *a);

#endif
