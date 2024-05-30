#include <bits/stdc++.h>


#include "menus.h"

#include "cardsLinkedList.h"
#include "chargesLinkedList.h"



using namespace std;

const char DATA_ADDR[] = "data";

cardNode *cardHead;
chargeNode *chargeHead;

int main(){
	
	
	initCardsFromFiles(&cardHead);
	initChargesFromFiles(&chargeHead);
	
	menu();
}
