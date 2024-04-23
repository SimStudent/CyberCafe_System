#include <bits/stdc++.h>
using namespace std;

/*
	Cards' definition
*/
struct card{
	int id;
	string personal_id;  // 身份证号码的识别
	int value;
};

// Card's Node definitons

struct cardNode{
	struct card elem;
	cardNode* next;
};

struct cardNode_binary{   // 红黑树查找类型
	struct card elem;
	card* left, *right;
};



//cardNode * Cards_head;
vector<cardNode> Cards;


// #####
cardNode * search_card(cardNode *Cards_head,int id);

void add_card(cardNode *Cards_head,string personal_id,int value){
	card * temp = (card*)malloc(sizeof(card));
	temp->personal_id = personal_id;
	temp->value = value;
}

void delete_card(cardNode *Cards_head,int id){
	if(search_card(Cards_head,id)==nullptr)return;
	// TODO
	
}


/*
	查找
*/

// 以下是在数组中进行查找

int search
card * search_card_binary(cardNode * Cards_head);  // 二分折半查找 O(logN)

// 以下是在单链表中进行查找

cardNode * search_card(cardNode *Cards_head,int id){  // 遍历查找 O(n)
	cardNode * ptr = Cards_head;
	while(ptr != nullptr){
		if((ptr->elem).id==id)return ptr;
		ptr = ptr->next;
	}
	return nullptr;
}


// 以下是在二叉树中进行查找


int main(){
	cout<<"Card | Test for the function";  // 多文件编译是否可以有多个mian函数？
}
