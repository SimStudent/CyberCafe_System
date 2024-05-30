#ifndef timeSolutions
#define timeSolutions

#include <bits/stdc++.h>
#include <windows.h>
#include <time.h>

struct td{  // Time Difference 时间差结构体
	int iHour;
	int iMin;
	int iSec;
};



tm * getRecentTime();
tm * countTime(tm *big,tm *small);


void printTime(tm *aTime);


#endif
