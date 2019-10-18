#pragma once
#ifndef DTIME_H//预编译：如果没有 def DTIME_H标签 ,则往下编译
#define DTIME_H//def 该标签
#include <iostream>
using namespace std;
class  DigitalTime
{
public:
	DigitalTime(int theHour, int theMinute);
	DigitalTime();
	~DigitalTime();
	friend istream& operator>>(istream& ins, DigitalTime& theObject);
	friend ostream& operator<<(ostream& outs, const DigitalTime& theObject);
	friend bool operator ==(const DigitalTime& time1, const DigitalTime& time2);
	void advance(int minutesAdded);
	//前条件：对象已经有了一个时间值
	//后条件：将时间更改为minutesAdded后的时间

	void advance(int hoursAdded, int minutesAdded);	
private:
	int hour;
	int minute;
};
#endif//结束预编译

