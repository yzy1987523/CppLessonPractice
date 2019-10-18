#include "pch.h"
#include "dtime.h"
int digitToInt(char c) {
	return (static_cast<int>(c) - static_cast<int>('0'));
}
void readHour(istream& ins, int& theHour) {
	char c1, c2;//小时数最多2位
	ins >> c1 >> c2;
	if (!(isdigit(c1) && (isdigit(c2) || c2 == ':'))) {
		cout << "Error illegal input to readHour\n";
		exit(1);
	}
	if (isdigit(c1) && c2 == ':')
	{
		theHour = digitToInt(c1);
	}
	else
	{
		theHour = (digitToInt(c1) * 10) + digitToInt(c2);
		ins >> c2;//再次获取一次输入值，确保输入的是:,否则就报错
		if (c2 != ':') {
			cout << "Error illegal input to readHour\n";
			exit(1);
		}
	}
	if (theHour < 0 || theHour>24)
	{
		cout << "Error illegal input to readHour\n";
		exit(1);
	}
}
void readMinute(istream& ins, int& theMinute) {
	char c1, c2;
	ins >> c1 >> c2;
	if (!(isdigit(c1) && isdigit(c2))) {
		cout << "Error illegal input to readMinute\n";
		exit(1);
	}

	theMinute = (digitToInt(c1) * 10) + digitToInt(c2);
	if (theMinute < 0 || theMinute>59) {
		cout << "Error illegal input to readMinute\n";
		exit(1);
	}
}
void dtimeTest() {
	DigitalTime clock, oldClock;
	cout << "Enter the time in 24 hour natation:";
	cin >> clock;
	oldClock = clock;
	clock.advance(15);
	if (clock == oldClock)
		cout << "Something is wrong.";
	cout << "You entered " << oldClock << endl;
	cout << "15 minutes later the time will be " << clock << endl;
}
DigitalTime::DigitalTime(int theHour, int theMinute)
{
	if (theHour < 0 || theHour>23 || theMinute < 0 || theMinute>59)
	{
		cout << "Illegal argument to DigitTime constructor.";
		exit(1);
	}
	else
	{
		hour = theHour;
		minute = theMinute;
	}
}

DigitalTime::DigitalTime() :DigitalTime(0, 0)
{
}

DigitalTime::~DigitalTime()
{

}
bool operator==(const DigitalTime & time1, const DigitalTime & time2)
{
	return time1.hour==time2.hour&&time1.minute==time2.minute;
}

istream & operator>>(istream & ins, DigitalTime & theObject)
{
	readHour(ins, theObject.hour);
	readMinute(ins, theObject.minute);
	return ins;
}

ostream & operator<<(ostream & outs, const DigitalTime & theObject)
{
	outs << theObject.hour << ':';
	if (theObject.minute < 10)
		outs << '0';
	outs << theObject.minute;
	return outs;
}



void DigitalTime::advance(int minutesAdded)
{
	int grossMinutes = minute + minutesAdded;
	minute = grossMinutes % 60;
	int hourAdjustment = grossMinutes / 60;
	hour = (hour + hourAdjustment) % 24;

}

void DigitalTime::advance(int hoursAdded, int minutesAdded)
{
	hour = (hour + hoursAdded % 24);
	advance(minutesAdded);
}
