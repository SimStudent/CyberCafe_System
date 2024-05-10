#include <bits/stdc++.h>
#define Status int

using namespace std;

struct card;

struct cardsArray;

bool isRegistered(int id);

Status isValid(string person_id);

void printMan(int id);

void init_card(string personal_id,int value);

Status delete_card(cardsArray cardsList,int id);
