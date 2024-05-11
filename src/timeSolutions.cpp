#include "timeSolutions.h"
using namespace std;

// This module is built to solve the time.

/*
// A tm structure should be like:

struct tm{
	int tm_sec;    //秒，范围从0到59（包括59秒）
	int tm_min;    //分钟，范围从0到59
	int tm_hour;   //小时，范围从0到23
	int tm_mday;   //一个月中的日期，范围从1到31
	int tm_mon;    //月份，范围从0到11（其中0代表一月）
	int tm_year;   //年份，从1900年开始
	int tm_wday;   //一周中的日子，范围从0（周日）到6（周六）
	int tm_yday;   //一年中的日子，范围从0到365
	int tm_isdst;  //夏令时标识符，当实施夏令时时，该值为正；不实施夏令时时，该值为0；未知情况时，该值为负
}
*/

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
	
	int wday = aTime->tm_wday;
	
	cout<<"Now time|"<<endl;
	cout<<year<<'/'<<month<<'/'<<day<<' '<<hour<<':'<<min<<':'<<second<<" 星期"<<wday<<endl;
}


// int main(){
	
// 	tm* aTime = getRecentTime();
// 	printTime(aTime);
	
// 	return 0;
// }
