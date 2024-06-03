#include "menus.h"

void menuPrint(){}; // TODO：输入一个函数数组，然后按照顺序打印选择，并且能够接收keyboard的输入

void menu(){  // 一级菜单登录
	
	while(true){
		system("cls");
		tm  aTime  = getRecentTime();
		
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  网吧管理系统"<<endl;
		cout<<"  "; printTime(aTime); cout<<endl<<endl;
		
		if(currPerm->data.id>0)
		{
		cout<<"  状态：管理员 ";messagePerm(currPerm);
		}
		else{
		cout<<"  状态：无权限 ";	
		}
		cout<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		if(currPerm->data.p1) cout<<"1. 卡管理"<<endl;
		if(currPerm->data.p2)cout<<"2. 计费标准管理"<<endl;
		if(currPerm->data.p3)cout<<"3. 计费管理"<<endl;
		if(currPerm->data.p4)cout<<"4. 费用管理"<<endl;
		if(currPerm->data.p5)cout<<"5. 查询统计"<<endl;
		if(currPerm->data.p6)cout<<"6. 权限管理"<<endl;
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
			if(currPerm->data.p1)
			menu_1();
			break;
		
		case 2:
			if(currPerm->data.p2)
			menu_2();
			break;
		case 3:
			if(currPerm->data.p3)
			menu_3();
			break;
		case 4:
			if(currPerm->data.p4)
			menu_4();
			break;
		case 5:
			if(currPerm->data.p5)
			menu_5();
			break;
		case 6:
			if(currPerm->data.p6)
			menu_6();
			break;
		case 7:
			menu_7();
			break;
		case 0:
			exit(0);
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
		cout<<"4. 管理员列表"<<endl;
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
		case 4:
			menu_64();
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

// ##############################################
// 计费管理 上机 & 下机

void menu_31(){   //TODO
	for(int j=1; j>=1 && j<=3;j++){
		
		int id_tmp; 
		char pwd_tmp[10];
		int charge_tmp;
		cardNode * card_tmp;
		
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  3-1. 上机"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		
		
		switch(j){  // 控制更新输出
		case 1:
			cout<<"(请输入id)"<<endl;
			break;
		case 2:
			cout<<"号码:"<<id_tmp<<endl;
			cout<<"(请输入密码)"<<endl;
			break;
		case 3:
			cout<<"卡号:"<<id_tmp<<endl;
			cout<<"密码:"<<pwd_tmp<<endl;
			cout<<"(请输入想去的机房号码)"<<endl;
			break;
		}
		
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		char n[10]; cin>>n;
		if(strcmp("0",n) == 0){
			menu_3();
		}
		
		// 每输入一个参数之后进行的处理 j（=n）表示在第几个参数输入之后
		if(j==1){
			id_tmp = atoi(n);
			card_tmp = searchCard(cardHead,id_tmp);
			if(card_tmp == nullptr){
				system("cls");
				cout<<"未找到相对应的卡！"<<endl;
				Sleep(1000);
				menu_31();
			}
			
		}
		else if(j==2){
			strcpy(pwd_tmp,n);
			
			if(strcmp(pwd_tmp,card_tmp->data.pwd) != 0){
				system("cls");
				cout<<"密码错误！请重新输入账号密码！"<<endl;
				Sleep(1000);
				menu_31();
			}
			else{
				// 密码正确，跳转到（j==3）的地方
				
				recordNode *record_tmp = searchFirstRecord(recordHead,id_tmp);  //应该放在循环外边，不然死循环
				
				while(true){
//					recordNode *record_tmp = searchFirstRecord(recordHead,id_tmp);
					
//					cout<<"record_tmp "<<record_tmp->data.last.tm_year<<endl;    // 此处找寻到record初始化错误，把头指针覆盖了
					
//					printfRecords(record_tmp);
//					cin.get();
//					if(record_tmp == nullptr)cout<<endl<<"It is nullptr"<<endl;
//					else cout<<endl<<"It isn't nullptr"<<endl;
//					
//					cin.get();
					
					
					if(record_tmp == nullptr){
						break;                 // 如果没有找到任何一个记录（从未上机）直接往后添加
					}
					else if(record_tmp->data.last.tm_year == 0){
						system("cls");
						cout<<"哦偶！你已经上机了喔！"<<endl;
						Sleep(1000);
						menu_31();
					}
					else{
						record_tmp = searchNextRecord(recordHead,id_tmp,record_tmp);
					}
				}
					
			}		
		}
		else if(j==3){  //todo
			charge_tmp = atoi(n);
			system("cls");
			chargeNode * temp = searchCharge(chargeHead,charge_tmp);
			
			if(temp==nullptr){
				cout<<"未找到相对应的计费标准！"<<endl;
				Sleep(1000);
				menu_31();
			}
			else{	
				recordNode *aRecord;
				initRecord(&aRecord);
				aRecord->data.user = id_tmp;
				aRecord->data.charge = charge_tmp;
				
				tm aTime = getRecentTime();
				aRecord->data.first = aTime;
				
				addRecord(recordHead,aRecord);
				
				writeRecord(recordHead);
				
				cout<<"原神启动！"<<endl;
				Sleep(1000);
				menu_3();
			}
		}
		
		
	}
}
void menu_32(){
	for(int j=1; j>=1 && j<=3;j++){
		
		int id_tmp,charge_tmp;
		char pwd_tmp[10];
		cardNode * card_tmp;
		
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  3-2. 下机"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		
		
		switch(j){  // 控制更新输出
		case 1:
			cout<<"(请输入id)"<<endl;
			break;
		case 2:
			cout<<"号码:"<<id_tmp<<endl;
			cout<<"(请输入密码)"<<endl;
			break;
		}
		
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		char n[10]; cin>>n;
		if(strcmp("0",n) == 0){
			menu_3();
		}
		else if(j==1){
			id_tmp = atoi(n);
			card_tmp = searchCard(cardHead,id_tmp);
			if(card_tmp == nullptr){
				system("cls");
				cout<<"未找到相对应的卡！"<<endl;
				Sleep(1000);
				menu_31();
			}
			
		}
		else if(j==2){
			strcpy(pwd_tmp,n);
			if(strcmp(pwd_tmp,card_tmp->data.pwd) == 0){
				// 密码正确，跳转到（j==3）的地方
				while(true){
					recordNode *record_tmp = searchFirstRecord(recordHead,id_tmp);
					
//					cout<<"record_tmp "<<record_tmp->data.last.tm_year<<endl;    // 此处找寻到record初始化错误，把头指针覆盖了					
					if(record_tmp == nullptr)break;
					else{	
						if(record_tmp->data.last.tm_year == 0){
							
							tm aTime = getRecentTime();
							record_tmp->data.last = aTime;
							
//							addRecord(recordHead,record_tmp);
							
							countDur(record_tmp);
							countFee(record_tmp);
							
							recordHead->data.total += record_tmp->data.total;
							
							writeRecord(recordHead);
							
							system("cls");
							cout<<id_tmp<<"号玩家成功下机！"<<endl;
							Sleep(1000);
							menu_31();
						}
						else{
							record_tmp = searchNextRecord(recordHead,id_tmp,record_tmp);
						}
					}
					
				}
				
				cin.get();
				
			}
			else{
				system("cls");
				cout<<"密码错误！请重新输入账号密码！"<<endl;
				Sleep(1000);
				menu_31();
			}
		}
		else if(j==3){
			charge_tmp = atoi(n);
			system("cls");
			chargeNode * temp = searchCharge(chargeHead,charge_tmp);
			
			if(temp==nullptr){
				cout<<"未找到相对应的计费标准！"<<endl;
				Sleep(1000);
				menu_31();
			}
			else{	
				recordNode *aRecord;
				initRecord(&aRecord);
				aRecord->data.user = id_tmp;
				aRecord->data.charge = charge_tmp;
				
				tm aTime = getRecentTime();
				aRecord->data.first = aTime;
				
				addRecord(recordHead,aRecord);
				
				writeRecord(recordHead);
				
				cout<<"下机成功！"<<endl;
				Sleep(1000);
				menu_3();
			}
		}
	}
}

// ##############################################
// 费用管理 充值 & 退费

void menu_41(){	
	for(int j=1; j>=1 && j<=2;j++){
		
		int id_tmp, value_tmp; 
		
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
			
			system("cls");
			
			cardNode * temp = searchCard(cardHead,id_tmp);
			
			if(temp==nullptr){
				cout<<"未找到相对应的卡！"<<endl;
				Sleep(1000);
				menu_41();
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

// 查询

void menu_51(){  // 查询一张卡的消费记录
	for(int j=1; j>=1 && j<=2;j++){
		
		int id_tmp;
		
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  5-1. 查询消费记录"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		switch(j){
		case 1:
			cout<<"(请输入卡号id)"<<endl;
			break;
		case 2:
			recordNode *ptr = recordHead->next;
			cout<<"上机号数 | 上机描述 | 机位费用 | 上机时间 | 下机时间 | 总时长 | 应付费用"<<endl;
			
			while(ptr != nullptr){
				if(ptr->data.user == id_tmp && ptr->data.total != 0){
					chargeNode * charge_tmp = searchCharge(chargeHead,ptr->data.charge);
					if(charge_tmp == nullptr){
						ptr = ptr->next;
						continue;
					}
					else{
						cout<<ptr->data.charge<<' '<<charge_tmp->data.desc<<' '<<charge_tmp->data.fee<<' ';
						printTime(ptr->data.first); cout<<' '; printTime(ptr->data.last); cout<<' ';
						cout<<ptr->data.dur.iHour<<':'<<ptr->data.dur.iMin<<':'<<ptr->data.dur.iSec<<" "<<ptr->data.total<<endl;
					}
				}
				ptr = ptr->next;
			}
			
		}
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		char n[100]; cin>>n;
		if(strcmp("0",n) == 0){
			menu_5();
		}
		else if(j==1){
			id_tmp = atoi(n);
			
//			card_tmp = searchCard(cardHead,id_tmp);  //要不要和卡数据同步，是一个问题 
//			if(card_tmp==nullptr){
//				system("cls");
//				cout<<"哎呦！卡号不存在！"<<endl;
//				Sleep(1000);
//				return;
//			}
		}
	}
}
void menu_52(){
	for(int j=1; j>=1 && j<=1;j++){
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  5-2. 统计总营业额"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		switch(j){
		case 1:
			cout<<"总营业额："<<recordHead->data.total<<endl;
			break;
		}
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		char n[100]; cin>>n;
		if(strcmp("0",n) == 0){
			menu_5();
		}
	}
}
void menu_53(){}

void menu_61(){
	for(int j=1; j>=1 && j<=8;j++){
		
		int id_tmp; 
		int p1;
		int p2;
		int p3;
		int p4;
		int p5;
		int p6;
		char pwd_tmp[60];
		
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  6-1. 添加新管理员"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		
		
		switch(j){
		case 1:
			cout<<"(请输入id)"<<endl;
			break;
		case 2:
			cout<<"管理员账号:"<<id_tmp<<endl;
			cout<<"(请输入注册的密码)"<<endl;
			break;
		case 3:
			cout<<"卡号:"<<id_tmp<<endl;
			cout<<"密码:"<<pwd_tmp<<endl;
			cout<<"(请输入权限：卡管理 1/2)"<<endl;
			break;
		case 4:
			cout<<"卡号:"<<id_tmp<<endl;
			cout<<"初始金额:"<<pwd_tmp<<endl;
			cout<<"卡管理："<<p1<<endl;
			cout<<"(请输入权限：计费标准管理)"<<endl;
			break;
		case 5:
			cout<<"卡号:"<<id_tmp<<endl;
			cout<<"初始金额:"<<pwd_tmp<<endl;
			cout<<"卡管理："<<p1<<endl;
			cout<<"计费标准管理："<<p2<<endl;
			cout<<"(请输入权限：计费管理)"<<endl;
			break;
		case 6:
			cout<<"卡号:"<<id_tmp<<endl;
			cout<<"初始金额:"<<pwd_tmp<<endl;
			cout<<"卡管理："<<p1<<endl;
			cout<<"计费标准管理："<<p2<<endl;
			cout<<"计费管理："<<p3<<endl;
			cout<<"(请输入权限：费用管理)"<<endl;
			break;
		case 7:
			cout<<"卡号:"<<id_tmp<<endl;
			cout<<"初始金额:"<<pwd_tmp<<endl;
			cout<<"卡管理："<<p1<<endl;
			cout<<"计费标准管理："<<p2<<endl;
			cout<<"计费管理："<<p3<<endl;
			cout<<"费用管理："<<p4<<endl;
			cout<<"(请输入权限：查询统计)"<<endl;
			break;
		case 8:
			cout<<"卡号:"<<id_tmp<<endl;
			cout<<"初始金额:"<<pwd_tmp<<endl;
			cout<<"卡管理："<<p1<<endl;
			cout<<"计费标准管理："<<p2<<endl;
			cout<<"计费管理："<<p3<<endl;
			cout<<"费用管理："<<p4<<endl;
			cout<<"查询统计："<<p5<<endl;
			cout<<"(请输入权限：权限管理)"<<endl;
			break;
		}
		
		
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		char n[10]; cin>>n;
		if(strcmp("0",n) == 0){
			menu_6();
		}
		else if(j==1){
			id_tmp = atoi(n);
			if(searchPerm(permHead,id_tmp)!=nullptr){
				system("cls");
				cout<<"管理员已存在！"<<endl;
				Sleep(1000);
				menu_61();
			}
			
		}
		else if(j==2){
			strcpy(pwd_tmp,n);
		}
		else if(j==3){
			p1 = atoi(n);
			if(p1==1)p1=1;
			else p1=0;
		}
		else if(j==4){
			p2 = atoi(n);
			if(p2==1)p2=1;
			else p2=0;
		}
		else if(j==5){
			p3 = atoi(n);
			if(p3==1)p3=1;
			else p3=0;
		}
		else if(j==6){
			p4 = atoi(n);
			if(p4==1)p4=1;
			else p4=0;
		}
		else if(j==7){
			p5 = atoi(n);
			if(p5==1)p5=1;
			else p5=0;
		}
		else if(j==8){
			
			p6 = atoi(n);
			if(p6==1)p6=1;
			else p6=0;
			
			system("cls");
			
//			permNode a;    // 如果使用 permNode a 的话会无法在函数外使用
//			a.next = nullptr;
//			a.data.id = id_tmp;
//			a.data.p1 = p1;
//			a.data.p2 = p2;
//			a.data.p3 = p3;
//			a.data.p4 = p4;
//			a.data.p5 = p5;
//			a.data.p6 = p6;
			
			
			permNode *a = (permNode *)malloc(sizeof(permNode));
			a->next = nullptr;
			a->data.id = id_tmp;
			a->data.p1 = p1;
			a->data.p2 = p2;
			a->data.p3 = p3;
			a->data.p4 = p4;
			a->data.p5 = p5;
			a->data.p6 = p6;
			
			strcpy(a->data.pwd,pwd_tmp);
			
			addPerm(permHead,a);
			writePerm(permHead,PERMS_ADDR);
			
			cout<<"添加成功!"<<endl;
			Sleep(1000);
		}
	}
}
void menu_62(){
	for(int j=1; j>=1 && j<=1;j++){
		
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  6-2. 删除管理员"<<endl<<endl;
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
			menu_6();
		}
		else if(j==1){
			system("cls");
			
			if(deletePerm(permHead,atoi(n)))cout<<"删除成功!"<<endl;
			else cout<<"管理员不存在!"<<endl;
			
			writePerm(permHead,PERMS_ADDR);
			Sleep(1000);
		}
	}
}
void menu_63(){}

void menu_64(){
	
	while(true){
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  6. 权限管理"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		printfPerms(permHead);		
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		int n; 
		
		while(!(cin>>n)){
			cin.clear();
			while(cin.get()!='\n')continue;
		}
		
		switch(n){
		case 0:
			menu_6();
			break;
		}
	}
	

}

void menu_71(){
	for(int j=1; j>=1 && j<=2;j++){
		
		int id_tmp;
		char pwd_tmp[10];
		permNode  * perm_tmp;
		
		
		system("cls");
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"  7-1. 登录"<<endl<<endl;
		cout<<"-----------------------------------"<<endl;
		
		
		switch(j){  // 控制更新输出
		case 1:
			cout<<"(请输入id)"<<endl;
			break;
		case 2:
			cout<<"号码:"<<id_tmp<<endl;
			cout<<"(请输入密码)"<<endl;
			break;
		}
		
		cout<<"-----------------------------------"<<endl;
		cout<<"0. 返回"<<endl;
		cout<<"-----------------------------------"<<endl;
		
		char n[50]; cin>>n;
		if(strcmp("0",n) == 0){
			menu_7();
		}
		else if(j==1){
			id_tmp = atoi(n);
			perm_tmp = searchPerm(permHead,id_tmp);
			
			if(perm_tmp == nullptr){
				system("cls");
				cout<<"未找到对应的管理员！"<<endl;
				Sleep(1000);
				menu_71();
			}
			
		}
		else if(j==2){
			strcpy(pwd_tmp,n);
			if(strcmp(pwd_tmp,perm_tmp->data.pwd) != 0){
				system("cls");
				cout<<"密码错误！请重新输入账号密码！"<<endl;
				Sleep(1000);
				menu_71();
			}
			else{	
				while(true){
					currPerm->data = perm_tmp->data;
					writePerm(currPerm,PERM_ADDR);
					
					system("cls");
					cout<<"登录成功！";
					Sleep(1000);
					menu();
				}
				
			}
		}
	}
	
	
}
void menu_72(){
	currPerm->data.id = 0;
	currPerm->data.p1 = 0;
	currPerm->data.p2 = 0;
	currPerm->data.p3 = 0;
	currPerm->data.p4 = 0;
	currPerm->data.p5 = 0;
	currPerm->data.p6 = 0;
	writePerm(currPerm,PERM_ADDR);

	system("cls");
	messagePerm(currPerm);cout<<"退出成功！";
	Sleep(1000);
	
	menu();
}
