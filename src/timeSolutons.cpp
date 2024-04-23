#include <bits/stdc++.h>
using namespace std;

// This module is built to solve the time.

tm * getRecentTime(){
	time_t now = time(0);
	tm* localTime = localtime(&now);
	return localTime;
}

void printTime(tm *aTime){
	int year = aTime->tm_year + 1900;
	int month = aTime->tm_mon + 1;
	int day = aTime->tm_mday;
	
	int hour = aTime->tm_hour;
	int min = aTime->tm_min;
	int second = aTime->tm_sec;
	
	cout<<"Now time|"<<endl;
	cout<<year<<'/'<<month<<'/'<<day<<' '<<hour<<':'<<min<<':'<<second<<endl;
}


int main(){
	
	tm* aTime = getRecentTime();
	printTime(aTime);
	
	return 0;
}
