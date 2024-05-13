#include <bits/stdc++.h>
#define Status int

using namespace std;

struct card{
    bool registered;
    string personal_id;
    int value;
};

struct cardsArray{
    struct card elems[10000001];
    int tail=1;
    int quantity = 0;
};

bool isRegistered(int id);  // 是否已经注册

Status isValid(string person_id);  // 检测身份证号是否合法

void printMan(int id);  // 打印某个id的账户信息

void init_card(string personal_id,int value);  // 初始化一张卡

Status delete_card(cardsArray cardsList,int id);  // 在数组中删除一张卡
