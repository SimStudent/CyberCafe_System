#include <bits/stdc++.h>
using namespace std;

struct card{
	int id;
	char[18] personal_id;
	char[20] name;
	int value;
};

struct cardsList{
	struct card elem;
	card* next;
	int 
};

struct cardsList_binary{
	struct card elem;
	card* left;
	card* right;
};



card * Cards_head;

void add_card(card *Cards_head);

/*

 以下是在CardList链表中查找

*/

card * search_card_binary(card * Cards_head);  // 二分折半查找 O(logN)

card * search_card(card *Cards_head,int id){  // 遍历查找 O(n)
	card * ptr = Cards_head;
	while(ptr != nullptr){
		if(ptr->id==id)return ptr;
		ptr = ptr->next;
	}
	return nullptr;
}

/*

	以下是在CardList二分查找树中查找

*/


int main(){
	cout<<"Card | Test for the function";
}
