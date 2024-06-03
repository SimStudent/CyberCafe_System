#ifndef statsLinkedList
#define statsLinkedList

#define Status int

#include <bits/stdc++.h>

#include <sys/stat.h>    // 用于创造文件的mkdir
#include <sys/types.h>

#include <unistd.h>  // 判断文件是否存在

#include <cstring>  // 用处字符串处理

using namespace std;

extern const char DATA_ADDR[];

const char STATS_ADDR[] = "data/stats.txt";


struct stats{
	int year;
	int month;
	int times;  // 上机次数，头节点代表stats节点的个数总数
	int m_total;  // 月总营业额
};


struct statsNode{
	stats data;
	statsNode *next;
};


void initStats(statsNode**head);

void addStats(statsNode*head,statsNode*a);

void writeStats(statsNode*head,const char *addr);

void loadStats(statsNode*head,const char *addr);

void initStatsFromFiles(statsNode**head);


#endif
