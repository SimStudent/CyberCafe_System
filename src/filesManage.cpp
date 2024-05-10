#include <bits/stdc++.h>
#include "cards_array.h"
using namespace std;

char cardsAddress[] = "cards.dat";

// cards的数据 
// TODO:多文件编译以及链接的问题

void cardsWrite(cardsArray target){
	FILE *fp;
	if((fp = fopen(cardsAddress,"wb")) == NULL){
		printf("The opening operation is worng!:cards.dat");
		exit(0);
	}
	struct card elem;
	
	
	
	fread()
	
}


void cardsLoad(){
	FILE *fp = fopen(cardsAddress,"rb");
	
}


int main(){
	cardsArray cardsList;
	cout<<"Card | Test for the function"<<endl;  // 多文件编译是否可以有多个main函数？
	cout<< (cardsList.elems[0].personal_id.empty()) <<endl;
	cout<<cardsList.elems[0].registered<<endl;
	cout<<cardsList.elems[0].value<<endl;
	return 0;
}
