/*
�ļ�����UnitTransform.cpp
���ߣ�yzy
˵��������һ����λת�����ߡ�����ת��˾
�ϴ��޸�ʱ�䣺2019/10/14 09��01��59 *
*/
#include "pch.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;
const int TI = 1;
void add(int& number);
void UnitTransform() {	
	cout << "����һ����λת�����ߡ�����ת��˾\n��ѡ��˻�˾��1\\2\n";
	int selectUnit;
	cin >> selectUnit;
	if (selectUnit == 1) {
		cout << "�����������\n";
	}
	else
	{
		cout << "�����밻˾����\n";
	}
	double tempIn;
	cin >> tempIn;
	double tempOut;
	if (selectUnit == 1) {
		tempOut = tempIn * 0.03527396;
		cout << tempIn << "��=" << tempOut << "��˾\n";
	}
	else {
		tempOut = tempIn * 28.349523;
		cout << tempIn << "��˾=" << tempOut << "��\n";
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
	inStream.open("infile.dat");//��Ҫ��������vcxprojͬ��Ŀ¼��
	outStream.open("outfile.dat",ios::app);//�����Զ�����
	double a, b, c;
	
	inStream >> a >> b >> c;//�����ļ��ڵ������ÿո��س��ֿ�
	outStream << a;
	outStream.width(2);
	outStream <<  b  << endl;
	inStream.close();//ע������Ҫ��
	outStream.close();
}
void CharCount() {
	char str[16];
	cin >> str;
	for(int i=0;i<16;i++)
	{		
		cout<<str[i]<<endl;
	}
}
void OutStreamForm() {
	ofstream outStream;
	outStream.setf(ios::fixed);//setf=set flags��fixed���������ö�����������double���͵����֣����ǿ�ѧ������
	outStream.setf(ios::scientific);//��e������д���������֣�����������κμ�������������ϵͳ�Զ����������ʽ
	outStream.setf(ios::showpos);//�����������
	outStream.setf(ios::showpoint);//Ҫ�󸡵�����Ҫ����С����
	outStream.setf(ios::right);//����е���width����������һ������ָ�����Ҳ࣬Ĭ��������
	outStream.setf(ios::left);//�������෴
	outStream.precision(2);//�������������֣�����С�����2λ����ͬ�༭��������ܲ�ͬ��
	outStream.width(4);
}
void CharGet() {
	char a;
	do 
	{
		cin.get(a);
		cout.put(a);
	} while (a!='3');
	//����5  4 13 21�س������5  4 13 21�س�
	//����һ���ַ������س���ʼ����ִ�У���ȡ��һ���ַ���ָ����ƣ���������0�������һֱִ�С������ַ���-����ַ������Ĺ���
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
	int arr[4] = {0,1,2,3};
	add(arr[0]);
	cout << arr[0];//���Ϊ1
}
void add(int& number) {
	number++;
}

void arrTest1() {
	int arr[4] = { 0,1,2,3 };
	add(arr,4);
	cout << arr[1];//���Ϊ2����������������ͣ�����ֻҪ���ݱ仯�ͻ��¼
}
void add(int number[],int size) {	
	for (int i=0;i<size;i++)
	{
		number[i]++;
	}	
}
void str() {
	typedef int* IntPtr;
	IntPtr p;

}