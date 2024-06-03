#include "recordsLinkedList.h"

void initRecord(recordNode **head){
	*head = (recordNode *)malloc(sizeof(recordNode)); 
	(*head)->data.user = 0;    // 链表的记录总数
	(*head)->data.charge = 0;
	(*head)->data.total = 0;    // 所有记录的总金额
	(*head)->data.first = {0,0,0,0,0,0,0,0,0};
	(*head)->data.last = {0,0,0,0,0,0,0,0,0};
	(*head)->data.dur = {0,0,0};

	(*head)->next = nullptr;
}

void addRecord(recordNode *head,recordNode *aNode){
	aNode->next = head->next;
	head->next =aNode;
	head->data.user++;
}


void addRecord(recordNode *head,int user,int charge,int total,tm first,tm last,td dur){
	recordNode *elem = new recordNode;
	elem->data.user = user;
	elem->data.charge = charge;
	elem->data.first = first;
	elem->data.last = last;
	elem->data.dur = dur;
	elem->data.total = total;
	
	elem->next = head->next;    // 头插
	head->next = elem;
	
	head->data.user++;
}

// 根据user找寻

recordNode * searchFirstRecord(recordNode *head,int user){
	recordNode * t = head->next;
	while(t != nullptr){
		if(user == t->data.user)return t;
		t = t->next;
	}
	return t;
}

recordNode * searchNextRecord(recordNode *head,int user,recordNode *curr){
	recordNode * t = curr->next;
	while(t != nullptr){
		if(user == t->data.user)return t;
		t = t->next;
	}
	return t;
}

void deleteRecord(recordNode *head,int user){  // 删除某号用户在链表中的第一个数据
	if(searchFirstRecord(head,user)==nullptr)return;
	else{
		
		recordNode *curr = head->next, *pre = head;
		
		while(curr->data.user != user){
			pre = curr;
			curr = curr->next;
		}
		
		pre->next = curr->next;
		delete curr;
		
		head->data.user--;
	}
}


//struct tm {
//	int tm_sec;
//	int tm_min;
//	int tm_hour;
//	int tm_mday;
//	int tm_mon;
//	int tm_year;
//	int tm_wday;
//	int tm_yday;
//	int tm_isdst;
//};

void writeRecord(recordNode *head){
	FILE *fp = fopen(RECORDS_ADDR,"w");
	recordNode * ptr = head;
	while(ptr != nullptr){
		
		fprintf(fp,"%d%c%d%c%d%c",ptr->data.user,' ',ptr->data.charge,' ',ptr->data.total,'\n');
		fprintf(fp,"%d%c%d%c%d%c%d%c%d%c%d%c%d%c%d%c%d%c",
			ptr->data.first.tm_sec,' ',ptr->data.first.tm_min,' ',
			ptr->data.first.tm_hour,' ',ptr->data.first.tm_mday,' ',
			ptr->data.first.tm_mon,' ',ptr->data.first.tm_year,' ',
			ptr->data.first.tm_wday,' ',ptr->data.first.tm_yday,' ',
			ptr->data.first.tm_isdst,'\n');
		
		fprintf(fp,"%d%c%d%c%d%c%d%c%d%c%d%c%d%c%d%c%d%c",
			ptr->data.last.tm_sec,' ',ptr->data.last.tm_min,' ',
			ptr->data.last.tm_hour,' ',ptr->data.last.tm_mday,' ',
			ptr->data.last.tm_mon,' ',ptr->data.last.tm_year,' ',
			ptr->data.last.tm_wday,' ',ptr->data.last.tm_yday,' ',
			ptr->data.last.tm_isdst,'\n');
		
		fprintf(fp,"%d%c%d%c%d%c",
			ptr->data.dur.iHour,' ',ptr->data.dur.iMin,' ',
			ptr->data.dur.iSec,'\n');
		
		
		ptr = ptr->next;
	}
	fclose(fp);
}

void loadRecord(recordNode *head){  // 这个head已经初始化的
	FILE *fp = fopen(RECORDS_ADDR,"r");

	recordNode * ptr = head;
	
	fscanf(fp,"%d%d%d",&(ptr->data.user),&(ptr->data.charge),&(ptr->data.total));
	fscanf(fp,"%d%d%d%d%d%d%d%d%d",&(ptr->data.first.tm_sec),&(ptr->data.first.tm_min),&(ptr->data.first.tm_hour),
		&(ptr->data.first.tm_mday),&(ptr->data.first.tm_mon),&(ptr->data.first.tm_year),
		&(ptr->data.first.tm_wday),&(ptr->data.first.tm_yday),&(ptr->data.first.tm_isdst)
		);
	
	fscanf(fp,"%d%d%d%d%d%d%d%d%d",&(ptr->data.last.tm_sec),&(ptr->data.last.tm_min),&(ptr->data.last.tm_hour),
		&(ptr->data.last.tm_mday),&(ptr->data.last.tm_mon),&(ptr->data.last.tm_year),
		&(ptr->data.last.tm_wday),&(ptr->data.last.tm_yday),&(ptr->data.last.tm_isdst)
		);
	
	fscanf(fp,"%d%d%d",&(ptr->data.dur.iHour),&(ptr->data.dur.iMin),&(ptr->data.dur.iSec));
	
	printfRecords(head);
	
	
	int n = ptr->data.user;
	while(n){
		
		recordNode *temp = new recordNode;
		
		fscanf(fp,"%d%d",&(temp->data.user),&(temp->data.charge));
		fscanf(fp,"%d%d%d%d%d%d%d%d%d",&(temp->data.first.tm_sec),&(temp->data.first.tm_min),&(temp->data.first.tm_hour),
			&(temp->data.first.tm_mday),&(temp->data.first.tm_mon),&(temp->data.first.tm_year),
			&(temp->data.first.tm_wday),&(temp->data.first.tm_yday),&(temp->data.first.tm_isdst)
			);
		
		fscanf(fp,"%d%d%d%d%d%d%d%d%d",&(temp->data.last.tm_sec),&(temp->data.last.tm_min),&(temp->data.last.tm_hour),
			&(temp->data.last.tm_mday),&(temp->data.last.tm_mon),&(temp->data.last.tm_year),
			&(temp->data.last.tm_wday),&(temp->data.last.tm_yday),&(temp->data.last.tm_isdst)
			);
		
		fscanf(fp,"%d%d%d",&(temp->data.dur.iHour),&(temp->data.dur.iMin),&(temp->data.dur.iSec));
		
		temp->next = ptr->next;
		ptr->next = temp;
		
		n--;
	}
	fclose(fp);
}

// ####################

void initRecordsFromFiles(recordNode **a){  // 文件流的初始化
	if((mkdir(DATA_ADDR)) == 0)cout<<"Directory created successfully."<<endl;
	else cout<<"Failed to create directory: maybe because its exist."<<endl;
	
	if(access(RECORDS_ADDR,F_OK) == 0){
		// 文件存在 读取
		initRecord(a);
		
//		printfRecords(*a);
		loadRecord(*a);
	}
	else{
		// 不存在 创造写入
		initRecord(a);
		writeRecord(*a);
	}
}

void printfRecords(recordNode *head){
	if(head == nullptr)return;
	
	recordNode * ptr = head;
	
	cout<<"RecordsLinkedList | 有 "<<ptr->data.user<<" 个记录"<<endl;
	
	cout<<endl;
	while(ptr!=nullptr){
		printf("%d%c%d%c%d%c",ptr->data.user,' ',ptr->data.charge,' ',ptr->data.total,'\n');
		printf("%d%c%d%c%d%c%d%c%d%c%d%c%d%c%d%c%d%c",
			ptr->data.first.tm_sec,' ',ptr->data.first.tm_min,' ',
			ptr->data.first.tm_hour,' ',ptr->data.first.tm_mday,' ',
			ptr->data.first.tm_mon,' ',ptr->data.first.tm_year,' ',
			ptr->data.first.tm_wday,' ',ptr->data.first.tm_yday,' ',
			ptr->data.first.tm_isdst,'\n');
		
		printf("%d%c%d%c%d%c%d%c%d%c%d%c%d%c%d%c%d%c",
			ptr->data.last.tm_sec,' ',ptr->data.last.tm_min,' ',
			ptr->data.last.tm_hour,' ',ptr->data.last.tm_mday,' ',
			ptr->data.last.tm_mon,' ',ptr->data.last.tm_year,' ',
			ptr->data.last.tm_wday,' ',ptr->data.last.tm_yday,' ',
			ptr->data.last.tm_isdst,'\n');
		
		printf("%d%c%d%c%d%c",
			ptr->data.dur.iHour,' ',ptr->data.dur.iMin,' ',
			ptr->data.dur.iSec,'\n');
		
		printf("############################\n\n");
		
		ptr = ptr->next;
	}
}

void countDur(recordNode *a){
	td res = createTimeDifference(a->data.last,a->data.first);
	a->data.dur = res;
}


void countFee(recordNode *a){
	
	int res = a->data.charge * a->data.dur.iHour;
	if(a->data.dur.iMin >= 10) res += a->data.charge;  // 大于等于十分钟就计一个小时
	
	a->data.total = res;
}
