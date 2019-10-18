#pragma once
#ifndef DTIME_H//Ԥ���룺���û�� def DTIME_H��ǩ ,�����±���
#define DTIME_H//def �ñ�ǩ
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
	//ǰ�����������Ѿ�����һ��ʱ��ֵ
	//����������ʱ�����ΪminutesAdded���ʱ��

	void advance(int hoursAdded, int minutesAdded);	
private:
	int hour;
	int minute;
};
#endif//����Ԥ����

