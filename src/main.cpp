#include <bits/stdc++.h>
#include "timeSolutions.h"
//#include "cardsArray.h"
#include <windows.h>

using namespace std;

//struct cardsArray cardsList;


void menuPrint(); // TODO：输入一个函数数组，然后按照顺序打印选择，并且能够接收keyboard的输入

void menu_2(){
	while(true){
		system("cls");
		cout<<"###################################"<<endl;
		cout<<"#        网吧管理系统 子页        #"<<endl;
		cout<<"###################################"<<endl;
		cout<<"1. 返回"<<endl;
		
		int n; cin>>n;
		switch(n){
		case 1:
			return;
		}
	}
}

void menu_1(){  // 一级菜单登录
	
//	tm * aTime = getRecentTime();
//	printTime(aTime);	
	
	while(true){
//		IN_RED;
		system("cls");
		cout<<"###################################"<<endl;
		cout<<"#            网吧管理系统         #"<<endl;
		cout<<"###################################"<<endl;
		cout<<"1. 登入系统"<<endl;
		cout<<"2. 退出系统"<<endl;
		
		int n;
		cin>>n;
		
		switch(n){
		case 1:
			system("cls");
			int acc,pwd;
			
			cout<<"请输入您的账号："<<endl;
			cin>>acc;
			cout<<"请输入您的密码："<<endl;
			cin>>pwd;
			
			menu_2();
			
			break;
		case 2:
			exit(0);
			break;
		}
	}
}



int main(){
	
	
	menu_1();
	
}
