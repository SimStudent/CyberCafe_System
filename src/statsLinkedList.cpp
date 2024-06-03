#include "statsLinkedList.h"

void initStats(statsNode **head){
	*head = (statsNode *)malloc(sizeof(statsNode)); 
	(*head)->data.year = 0;
	(*head)->data.month = 0;
	(*head)->data.times = 0;  // 头节点保存记录的个数
	(*head)->data.m_total = 0;  // 头节点保存月总营业额
	(*head)->next = nullptr;
}

void addStats(statsNode *head,int y,int m,int times,int m_total){
	statsNode *elem = new statsNode;
	elem->data.year = y;
	elem->data.month = m;
	elem->data.times = times;
	elem->data.m_total = m_total;
	
	elem->next = head->next;  // 头插
	head->next = elem;
	head->data.times++;
}

//statsNode * searchStats(statsNode *head,int id){
//	statsNode * t = head->next;
//	while(t != nullptr){
//		if(id == t->data.id)return t;
//		t = t->next;
//	}
//	return t;
//}

void writeStats(statsNode *head){
	FILE *fp = fopen(STATS_ADDR,"w");
	statsNode * ptr = head;
	while(ptr != nullptr){
		
		fprintf(fp,"%d%c%d%c%d%c%d%c",ptr->data.year,' ',ptr->data.month,' ',ptr->data.times,' ',ptr->data.m_total,'\n');
		
		ptr = ptr->next;
	}
	fclose(fp);
}

void loadStats(statsNode *head){  // 这个head已经初始化的
	FILE *fp = fopen(STATS_ADDR,"r");

	statsNode * ptr = head;
	
	fscanf(fp,"%d%d%d%d",&(ptr->data.year),&(ptr->data.month),&(ptr->data.times),&(ptr->data.m_total));

	int n = ptr->data.times;
	while(n){
		
		statsNode *temp = new statsNode;
		
		fscanf(fp,"%d%d%d%d",&(temp->data.year),&(temp->data.month),&(temp->data.times),&(temp->data.m_total));
		
		temp->next = ptr->next;
		ptr->next = temp;
		
		n--;
	}
	fclose(fp);
}

// ####################

void initStatsFromFiles(statsNode **a){  // 文件流的初始化
	if((mkdir(DATA_ADDR)) == 0)cout<<"Directory created successfully."<<endl;
	else cout<<"Failed to create directory: maybe because its exist."<<endl;
	
	if(access(STATS_ADDR,F_OK) == 0){
		// 文件存在 读取
		initStats(a);
		loadStats(*a);
	}
	else{
		// 不存在 创造写入
		initStats(a);
		writeStats(*a);
	}
}
