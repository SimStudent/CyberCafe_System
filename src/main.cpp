#include <bits/stdc++.h>

#include "menus.h"

#include "cardsLinkedList.h"
#include "chargesLinkedList.h"
#include "recordsLinkedList.h"
#include "permsLinkedList.h"
#include "statsLinkedList.h"

using namespace std;

const char DATA_ADDR[] = "data";

cardNode *cardHead;
chargeNode *chargeHead;
recordNode *recordHead;
permNode *permHead;
statsNode *statsHead;

permNode * currPerm;


int main(){
	
	initCardsFromFiles(&cardHead);
	initChargesFromFiles(&chargeHead);
	initRecordsFromFiles(&recordHead);
	initPermsFromFiles(&permHead);
	initStatsFromFiles(&statsHead);
	
	initPermFromFiles(&currPerm);
	
//	printfPerms(permHead);
//	cin.get();
	
	menu();
}
