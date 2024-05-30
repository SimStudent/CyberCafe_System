#include "menus.h"

void menuPrint(){}; // TODO：输入一个函数数组，然后按照顺序打印选择，并且能够接收keyboard的输入

void menu(){  // 一级菜单登录
	
//	tm * aTime = getRecentTime();
//	printTime(aTime);	
	
	while(true){
		system("cls");
		
		tm * aTime  = getRecentTime();
		
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  网吧管理系统"<<endl;
		cout<<"  "; printTime(aTime); cout<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		cout<<"1. 卡管理"<<endl;
		cout<<"2. 计费标准管理"<<endl;
		cout<<"3. 计费管理"<<endl;
		cout<<"4. 费用管理"<<endl;
		cout<<"5. 查询统计"<<endl;
		cout<<"6. 权限管理"<<endl;
		cout<<"7. 系统"<<endl;
		cout<<"0. 关闭系统"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		int n;
		
		while(!(cin>>n)){
			cin.clear();
			while(cin.get()!='\n')continue;
		}
		
		switch(n){
		case 1:
			menu_1();
			break;
		
		case 2:
			menu_2();
			break;
		case 3:
			menu_3();
			break;
		case 4:
			menu_4();
			break;
		case 5:
			menu_5();
			break;
		case 6:
			menu_6();
			break;
		case 7:
			menu_7();
			break;
		case 0:
			menu_72();
		}
	}
}

void menu_1(){
	while(true){
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  1. (卡) 管理"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		cout<<"1. 添加卡"<<endl;
		cout<<"2. 查询卡"<<endl;
		cout<<"3. 注销卡"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		int n; 
		
		while(!(cin>>n)){
			cin.clear();
			while(cin.get()!='\n')continue;
		}
		switch(n){
		case 1:
			menu_11();
			break;
		case 2:
			menu_12();
			break;
		case 3:
			menu_13();
			break;
		case 0:
			menu();
			break;
		}
	}
}

void menu_2(){
	while(true){
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  2. (计费标准) 管理"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		cout<<"1. 新增"<<endl;
		cout<<"2. 查询"<<endl;
		cout<<"3. 删除"<<endl;
		cout<<"4. 修改"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		int n; 
		
		while(!(cin>>n)){
			cin.clear();
			while(cin.get()!='\n')continue;
		}
		
		switch(n){
		case 1:
			menu_21();
			break;
		case 2:
			menu_22();
			break;
		case 3:
			menu_23();
			break;
		case 4:
			menu_24();
			break;
		case 0:
			menu();
			break;
		}
	}
}
void menu_3(){
	while(true){
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  3. (计费) 管理"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		cout<<"1. 上机"<<endl;
		cout<<"2. 下机"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		int n; 
		
		while(!(cin>>n)){
			cin.clear();
			while(cin.get()!='\n')continue;
		}
		
		switch(n){
		case 1:
			menu_31();
			break;
		case 2:
			menu_32();
			break;
		case 0:
			menu();
			break;
		}
	}
}
void menu_4(){
	while(true){
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  4. （余额) 管理"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		cout<<"1. 充值"<<endl;
		cout<<"2. 退费"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		int n; 
		while(!(cin>>n)){
			cin.clear();
			while(cin.get()!='\n')continue;
		}
		
		switch(n){
		case 1:
			menu_41();
			break;
		case 2:
			menu_42();
			break;
		case 0:
			menu();
			break;
		}
	}
}
void menu_5(){
	while(true){
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  5. 查询统计"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		cout<<"1. 查询消费记录"<<endl;
		cout<<"2. 统计总营业额"<<endl;
		cout<<"3. 统计月营业额"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		int n; 
		
		while(!(cin>>n)){
			cin.clear();
			while(cin.get()!='\n')continue;
		}
		
		switch(n){
		case 1:
			menu_51();
			break;
		case 2:
			menu_52();
			break;
		case 3:
			menu_53();
			break;
		case 0:
			menu();
			break;
		}
	}
}
void menu_6(){
	while(true){
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  6. 权限管理"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		cout<<"1. 添加管理员"<<endl;
		cout<<"2. 删除管理员"<<endl;
		cout<<"3. 设置权限"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		int n; 
		
		while(!(cin>>n)){
			cin.clear();
			while(cin.get()!='\n')continue;
		}
		
		switch(n){
		case 1:
			menu_61();
			break;
		case 2:
			menu_62();
			break;
		case 3:
			menu_63();
			break;
		case 0:
			menu();
			break;
		}
	}
	
}
void menu_7(){
	while(true){
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  7. 系统"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		cout<<"1. 登录"<<endl;
		cout<<"2. 退出"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		int n; 
		
		while(!(cin>>n)){
			cin.clear();
			while(cin.get()!='\n')continue;
		}
		
		switch(n){
		case 1:
			menu_71();
			break;
		case 2:
			menu_72();
			break;
		case 0:
			menu();
			break;
		}
	}
}

void menu_11(){
	for(int j=1; j>=1 && j<=3;j++){
		
		int id_tmp, value_tmp; 
		char pwd_tmp[10];
		
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  1-1. 注册新卡"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		
		
		switch(j){
		case 1:
			cout<<"(请输入id)"<<endl;
			break;
		case 2:
			cout<<"卡号:"<<id_tmp<<endl;
			cout<<"(请输入充值的金额)"<<endl;
			break;
		case 3:
			cout<<"卡号:"<<id_tmp<<endl;
			cout<<"初始金额:"<<value_tmp<<endl;
			cout<<"(请输入10位数之内的密码)"<<endl;
			break;
		}
		
		
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		char n[10]; cin>>n;
		if(strcmp("0",n) == 0){
			menu_1();
		}
		else if(j==1){
			id_tmp = atoi(n);
		}
		else if(j==2){
			value_tmp = atoi(n);
		}
		else if(j==3){
			strcpy(pwd_tmp,n);
			
			system("cls");
			addCard(cardHead,id_tmp,value_tmp,pwd_tmp);
			writeCard(cardHead);
			cout<<"添加成功!"<<endl;
			Sleep(1000);
		}
		
		
	}
}
void menu_12(){
	while(true){
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  1-2. 卡号查询"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		
		printfCards(cardHead);
		
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		int n; 
		while(!(cin>>n)){
			cin.clear();
			while(cin.get()!='\n')continue;
		}
		
		switch(n){
		case 0:
			menu_1();
			break;
		}
	}
}
void menu_13(){
	for(int j=1; j>=1 && j<=1;j++){
		
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  1-3. 删除卡号"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		
		
		switch(j){
		case 1:
			cout<<"(请输入id)"<<endl;
			break;
		}
		
		
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		char n[100]; cin>>n;
		if(strcmp("0",n) == 0){
			menu_1();
		}
		else if(j==1){
			system("cls");
			deleteCard(cardHead,atoi(n));
			writeCard(cardHead);
			cout<<"删除成功!"<<endl;
			Sleep(1000);
		}
	}
}

void menu_21(){
	for(int j=1; j>=1 && j<=3;j++){
		
		int id_tmp, value_tmp; 
		char pwd_tmp[60];
		
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  2-1. 新标准"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		
		
		switch(j){
		case 1:
			cout<<"(请输入id)"<<endl;
			break;
		case 2:
			cout<<"号码:"<<id_tmp<<endl;
			cout<<"(请输入标准的费用 元/小时)"<<endl;
			break;
		case 3:
			cout<<"卡号:"<<id_tmp<<endl;
			cout<<"初始金额:"<<value_tmp<<endl;
			cout<<"(请输入60位数之内的描述)"<<endl;
			break;
		}
		
		
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		char n[10]; cin>>n;
		if(strcmp("0",n) == 0){
			menu_2();
		}
		else if(j==1){
			id_tmp = atoi(n);
		}
		else if(j==2){
			value_tmp = atoi(n);
		}
		else if(j==3){
			strcpy(pwd_tmp,n);
			
			system("cls");
			addCharge(chargeHead,id_tmp,value_tmp,pwd_tmp);
			writeCharge(chargeHead);
			cout<<"添加成功!"<<endl;
			Sleep(1000);
		}
		
		
	}
}
void menu_22(){
	while(true){
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  2-2. 计费标准查询"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		
		printfCharges(chargeHead);
		
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		int n; 
		
		while(!(cin>>n)){
			cin.clear();
			while(cin.get()!='\n')continue;
		}
		
		switch(n){
		case 0:
			menu_2();
			break;
		}
	}
}
void menu_23(){
	for(int j=1; j>=1 && j<=1;j++){
		
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  2-3. 删除标准"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		
		
		switch(j){
		case 1:
			cout<<"(请输入id)"<<endl;
			break;
		}
		
		
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		char n[100]; cin>>n;
		if(strcmp("0",n) == 0){
			menu_2();
		}
		else if(j==1){
			system("cls");
			deleteCharge(chargeHead,atoi(n));
			writeCharge(chargeHead);
			cout<<"删除成功!"<<endl;
			Sleep(1000);
		}
	}
	
}
void menu_24(){
	for(int j=1; j>=1 && j<=3;j++){
		
		int id_tmp, value_tmp; 
		char pwd_tmp[60];
		
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  2-4. 修改标准"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		
		
		switch(j){  // 控制更新输出
		case 1:
			cout<<"(请输入id)"<<endl;
			break;
		case 2:
			cout<<"号码:"<<id_tmp<<endl;
			cout<<"(请输入标准的费用 元/小时)"<<endl;
			break;
		case 3:
			cout<<"卡号:"<<id_tmp<<endl;
			cout<<"初始金额:"<<value_tmp<<endl;
			cout<<"(请输入60位数之内的描述)"<<endl;
			break;
		}
		
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		char n[10]; cin>>n;
		if(strcmp("0",n) == 0){
			menu_2();
		}
		else if(j==1){
			id_tmp = atoi(n);
		}
		else if(j==2){
			value_tmp = atoi(n);
		}
		else if(j==3){
			strcpy(pwd_tmp,n);
			
			system("cls");
			
			chargeNode * temp = searchCharge(chargeHead,id_tmp);
			
			if(temp==nullptr){
				cout<<"未找到相对应的卡！"<<endl;
				Sleep(1000);
			}
			else{
			strcpy(temp->data.desc,pwd_tmp);
			temp->data.fee = value_tmp;
			writeCharge(chargeHead);
			cout<<"修改成功!"<<endl;
			Sleep(1000);
			}
		}
		
		
	}
	
}

void menu_31(){}
void menu_32(){}

// ##############################################
// 费用管理 充值 & 退费

void menu_41(){	
	for(int j=1; j>=1 && j<=3;j++){
		
		int id_tmp, value_tmp; 
		char pwd_tmp[60];
		
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  4-1. 充值费用"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		
		
		switch(j){  // 控制更新输出
		case 1:
			cout<<"(请输入id)"<<endl;
			break;
		case 2:
			cout<<"号码:"<<id_tmp<<endl;
			cout<<"(请输入要充值的费用)"<<endl;
			break;
		}
		
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		char n[10]; cin>>n;
		if(strcmp("0",n) == 0){
			menu_4();
		}
		else if(j==1){
			id_tmp = atoi(n);
		}
		else if(j==2){
			value_tmp = atoi(n);
		}
		else if(j==3){
			strcpy(pwd_tmp,n);
			
			system("cls");
			
			cardNode * temp = searchCard(cardHead,id_tmp);
			
			if(temp==nullptr){
				cout<<"未找到相对应的卡！"<<endl;
				Sleep(1000);
			}
			else{
				temp->data.value += value_tmp;
				writeCharge(chargeHead);
				cout<<"充值成功!"<<endl;
				Sleep(1000);
			}
		}	
	}
}
void menu_42(){
	for(int j=1; j>=1 && j<=2;j++){
		
		int id_tmp, value_tmp; 
		
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  4-2. 撤出费用"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		
		
		switch(j){  // 控制更新输出
		case 1:
			cout<<"(请输入id)"<<endl;
			break;
		case 2:
			cout<<"号码:"<<id_tmp<<endl;
			cout<<"(请输入要退费的费用)"<<endl;
			break;
		}
		
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		char n[10]; cin>>n;
		if(strcmp("0",n) == 0){
			menu_4();
		}
		else if(j==1){
			id_tmp = atoi(n);
		}
		else if(j==2){
			value_tmp = atoi(n);
		
			system("cls");
			
			cardNode * temp = searchCard(cardHead,id_tmp);
			
			if(temp==nullptr){
				cout<<"未找到相对应的卡！"<<endl;
				Sleep(1000);
			}
			else{
				temp->data.value -= value_tmp;
				writeCharge(chargeHead);
				cout<<"退费成功!"<<endl;
				Sleep(1000);
			}
		}
	}
}

void menu_51(){}
void menu_52(){}
void menu_53(){}

void menu_61(){}
void menu_62(){}
void menu_63(){}

void menu_71(){}
void menu_72(){exit(0);}
