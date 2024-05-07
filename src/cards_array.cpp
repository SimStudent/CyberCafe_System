#include <bits/stdc++.h>
#include "cards_array.h"

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


struct cardsArray cardsList;

// ------------------------------

void duqu08(){  // TODO
	std::string str = "HBK08";
	int lastDigit = -1; // 初始化为-1，如果没有找到数字则保持不变
	
	for (char& ch : str) { // 使用范围for循环
		if (std::isdigit(ch)) {
			lastDigit = ch - '0'; // 将字符'0'到'9'转换为对应的整数值0到9
			break; // 找到数字后退出循环
		}
	}
	
	if (lastDigit != -1) {
		std::cout << "找到的数字是: " << lastDigit << std::endl;
	} else {
		std::cout << "没有找到数字。" << std::endl;
	}
	
}


bool isRegistered(int id){
	int index = id;
	if(cardsList.elems[index].registered)return true;
	else return false;
}


Status isValid(string person_id){  // 用来测试输入的身份证是否合法
	if(person_id.size()!=18)return -1;  // 出错了
	
	
}

void printMan(int id){ // 识别身份证字符串
	if(!isRegistered(id))return;
	
	
}

void init_card(string personal_id,int value=0){
	if(!isValid(personal_id))return;
	int index = cardsList.tail;
	
	cardsList.elems[index].registered = true;
	cardsList.elems[index].personal_id = personal_id;
	cardsList.elems[index].value = value;

	cardsList.tail++;
	cardsList.quantity++;
}

Status delete_card(cardsArray cardsList,int id){  // 通过id来删除卡，应该说是重置信息
	if(!isRegistered(id))return 0;
	else{
		card * temp = &cardsList.elems[id];
		temp->registered = false;
		temp->personal_id = "";
		temp->value = 0;
		return 1;
	}
}





int main(){
	cout<<"Card | Test for the function"<<endl;  // 多文件编译是否可以有多个main函数？
	cout<< (cardsList.elems[0].personal_id.empty()) <<endl;
	cout<<cardsList.elems[0].registered<<endl;
	cout<<cardsList.elems[0].value<<endl;

}
