/*
文件名：UnitTransform.cpp
作者：yzy
说明：这是一个单位转换工具——克转盎司
上次修改时间：2019/10/14 09：01：59 *
*/
#include "pch.h"
#include <iostream>
#include <fstream>
#include <cstring>
//#include <cstdlib>
#include <string>
#include <cctype>
using namespace std;
const int TI = 1;
struct  MyStruct1
{
	int  a;
	int  b;
};
struct  MyStruct
{
	int  a;
	int  b;
	MyStruct1 c;
};
class Year {
private:
	int year;
};
class Day {
public:	
	Day();
	~Day();
private:
	int hour[];
};
class Day {
public:
	friend ostream& operator<<(ostream& outs,const Day& d);
	Day(int d);
	Day();
	~Day();
	friend Day operator +(const Day& d1, const Day& d2);
	friend Day operator -(const Day& d1);
	friend bool equal(const Day& d1, const Day& d2);
	//前条件;d1和d2已经赋值
	//后条件：如果d1和d2相等则返回为true	
	void output();	
private:
	int day;
	int hour[];		
	//void priFun();
};
//class Mouth :public Day {//要用public修饰，否则有些父类的函数无法调用
//public:
//	void output();//可以覆写，也能不去定义，直接调用
//private:
//};
void add(int& number);

void UnitTransform() {
	cout << "这是一个单位转换工具——克转盎司\n请选择克或盎司：1\\2\n";
	int selectUnit;
	cin >> selectUnit;
	if (selectUnit == 1) {
		cout << "请输入克数：\n";
	}
	else
	{
		cout << "请输入盎司数：\n";
	}
	double tempIn;
	cin >> tempIn;
	double tempOut;
	if (selectUnit == 1) {
		tempOut = tempIn * 0.03527396;
		cout << tempIn << "克=" << tempOut << "盎司\n";
	}
	else {
		tempOut = tempIn * 28.349523;
		cout << tempIn << "盎司=" << tempOut << "克\n";
	}
}
void IOSum() {
	using namespace std;
	ifstream inStream;
	ofstream outStream;
	outStream.setf(ios::fixed);
	outStream.setf(ios::showpoint);
	outStream.width(4);
	outStream.precision(2);
	inStream.open("infile.dat");//需要创建，在vcxproj同级目录下
	outStream.open("outfile.dat", ios::app);//可以自动生成
	double a, b, c;

	inStream >> a >> b >> c;//输入文件内的数据用空格或回车分开
	outStream << a;
	outStream.width(2);
	outStream << b << endl;
	inStream.close();//注意用完要关
	outStream.close();
}
void CharCount() {
	char str[16];
	cin >> str;
	for (int i = 0; i < 16; i++)
	{
		cout << str[i] << endl;
	}
}
void OutStreamForm() {
	ofstream outStream;
	outStream.setf(ios::fixed);//setf=set flags，fixed：让流采用定点记数法输出double类型的数字，即非科学记数法
	outStream.setf(ios::scientific);//用e记数法写浮点型数字，如果不设置任何记数法，则会根据系统自动决定输出方式
	outStream.setf(ios::showpos);//正数添加正号
	outStream.setf(ios::showpoint);//要求浮点数中要包含小数点
	outStream.setf(ios::right);//如果有调用width函数，则下一项会对齐指定域右侧，默认已设置
	outStream.setf(ios::left);//与上面相反
	outStream.precision(2);//输出如果包含数字，则保留小数点后2位（不同编辑器意义可能不同）
	outStream.width(4);
}
void CharGet() {
	char a;
	do
	{
		cin.get(a);
		cout.put(a);
	} while (a != '3');
	//输入5  4 13 21回车，输出5  4 13 21回车
	//输入一个字符串，回车后开始往下执行，读取第一个字符，指针后移；除非遇到0，否则会一直执行“输入字符串-输出字符串”的过程
}

void add(int& number);
void arrTest();
void add(int number[], int size);
void arrTest1();
void str();
void mainTest() {
	//arrTest();
	//arrTest1();
	str();
}

void arrTest() {
	int arr[4] = { 0,1,2,3 };
	add(arr[0]);
	cout << arr[0];//输出为1
}
void add(int& number) {
	number++;
}

void arrTest1() {
	int arr[4] = { 0,1,2,3 };
	add(arr, 4);
	cout << arr[1];//输出为2，数组就是引用类型，所以只要数据变化就会记录
}
void add(int number[], int size) {
	for (int i = 0; i < size; i++)
	{
		number[i]++;
	}
}
void str() {
	Day a(2),b;
	b = -a;
	b.output();
	cout << b;
	Day c(a);
	//Day a;
	////a = Day(2);
	//a.output();
	//Day *b;
	//b = new Day(3);
	//(*b).output();
	//*b = a;
	//(*b).output();
	//Mouth c;
	//c.output();
}
void Day::output() {
	cout << day << endl;
}
ostream& operator <<(ostream& outs, const Day& d)
{
	outs << "Today is " << d.day << endl;
	return outs;
}
Day::Day(int d) {
	day = d;
}
Day::Day() :day(0) {

}
Day::~Day() {
	delete [] hour;
}
//Day::Day() : Day(1) {
//	priFun();
//}
//void Day::priFun() {
//
//}
bool equal(const Day& d1,const Day& d2) {
	
	return (d1.day==d2.day);
}
int digitToInt(char c) {
	return (static_cast<int>(c) - static_cast<int>('0'));
}
Day operator +(const Day& d1, const Day& d2) {
	Day temp;
	temp.day = d1.day + d2.day;
	return temp;
}
Day operator -(const Day& d1) {
	Day temp;
	temp.day = -d1.day;
	return temp;
}