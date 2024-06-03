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

//char dayMap[] = "1234567";
//char dayMap[] = "一二三四五六日";  // TODO：宽字符处理
//wchar_t dayMap_4[] =  L"一二三四五六日";
//
//wstring dayMap_2 = L"一二三四五六日";
//string dayMap_3 = "一二三四五六日";


//tm * getRecentTime_copy(){    // 为什么两次调用会一样，因为每次调用localtime返回的是缓冲区的内容
//	time_t now = time(0);        
//	tm* local = localtime(&now);  // 将时间改为当地时间
//	return local;
//}

tm getRecentTime(){
	time_t now = time(0);
	tm local = *localtime(&now);  // 将时间改为当地时间
	return local;
}


void printTime(tm aTime){
	int year = aTime.tm_year + 1900;
	int month = aTime.tm_mon + 1;
	int day = aTime.tm_mday;
	
	int hour = aTime.tm_hour;
	int min = aTime.tm_min;
	int second = aTime.tm_sec;
	
	int wday = aTime.tm_wday;
	
//	cout<<year<<'/'<<month<<'/'<<day<<' '<<hour<<':'<<min<<':'<<second<<" 星期"<<wday;
	
	cout<<year<<'/'<<month<<'/'<<day<<' '<<hour<<':'<<setw(2)<<setfill('0')<<min<<" 星期"<<wday;
}

td createTimeDifference(tm big,tm small){
	time_t bigStamp = mktime(&big);        // 将 tm 结构体转为 time_t 时间戳，方便后续计算
	time_t smallStamp = mktime(&small);
	
	double diff = difftime(bigStamp,smallStamp);
	
	cout<<"diff:"<<diff<<endl;
	
	td res;
	res.iHour = diff/60/60;
	res.iMin = diff/60;
	res.iSec = diff;
	
	cout<<res.iHour<<" "<<res.iMin<<" "<<res.iSec<<endl;
	
	return res;
}


//int main(){
//	tm a = getRecentTime();
//	Sleep(10000);
//	tm b = getRecentTime();
//	
//	printTime(a);cout<<endl;
//	printTime(b); cout<<endl;
//	
//	td aDifference = createTimeDifference(b,a);
//	
//	cout<<aDifference.iHour<<" "<<aDifference.iMin<<" "<<aDifference.iSec;
//}

