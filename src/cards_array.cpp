#include <bits/stdc++.h>
#define Status int

using namespace std;

/*
 Cards' definition
*/

struct card{
	bool registered;
	string personal_id;  // 身份证号码的识别
	int value;
};

struct cardsArray{
	struct card elems[10000001];
	int tail=1;
	int quantity=0;
};


bool isValid(string personal_id);

void init_card(cardsArray cardsList,string personal_id,int value=0){
	if(!isValid(personal_id))return;
	int index = cardsList.tail;
	
	cardsList.elems[index].personal_id = personal_id;
	cardsList.elems[index].value = value;

	cardsList.tail++;
	cardsList.quantity++;
}

Status delete_card(cardsArray cardsList,int id){  // 通过id来删除卡
	if(!cardsList.elems[id].registered)return 0;
	else{
		
	}
}



struct cardsArray cardsList;

int main(){
	cout<<"Card | Test for the function"<<endl;  // 多文件编译是否可以有多个main函数？
//	cout<< (cardsList.elems[0].personal_id == nullptr) <<endl;
	cout<<cardsList.elems[0].registered<<endl;
	cout<<cardsList.elems[0].value<<endl;
	
	
}
