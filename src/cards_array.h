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

bool isRegistered(int id);

Status isValid(string person_id);

void printMan(int id);

void init_card(string personal_id,int value);

Status delete_card(cardsArray cardsList,int id);
