/*
�ļ�����UnitTransform.cpp
���ߣ�yzy
˵��������һ����λת�����ߡ�����ת��˾
�ϴ��޸�ʱ�䣺2019/10/14 09��01��59 *
*/
#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;
const int TI = 1;
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
	inStream.open("infile.dat");//��Ҫ��������vcxprojͬ��Ŀ¼��
	outStream.open("outfile.dat");//�����Զ�����
	int a, b, c;
	inStream >> a >> b >> c;//�����ļ��ڵ������ÿո��س��ֿ�
	outStream << (a + b + c) << endl;
	inStream.close();//ע������Ҫ��
	outStream.close();
}