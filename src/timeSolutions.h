#ifndef timeSolutions
#define timeSolutions

#include <bits/stdc++.h>
#include <windows.h>
#include <time.h>

/*
 A tm structure should be like:

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

struct td{  // TimeDifference 时间差结构体
	int iHour;
	int iMin;
	int iSec;
};

tm getRecentTime();

td createTimeDifference(tm big,tm small);

void printTime(tm aTime);


#endif
