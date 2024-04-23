#include <bits/stdc++.h>
using namespace std;

void menuPrint(); // TOOD：输入一个函数数组，然后按照顺序打印选择，并且能够接收keyboard的输入



void menu_1(){  // 一级菜单登录
	while(true){
		int n;
		cin>>n;
		
		switch(n){
		case 1:
			cout<<"登入";
			break;
		case 2:
			cout<<"登出";
			break;
		}
	}
}


int main(){
	
	menu_1();
	
}
