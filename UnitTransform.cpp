/*
�ļ�����UnitTransform.cpp
���ߣ�yzy
˵��������һ����λת�����ߡ�����ת��˾
�ϴ��޸�ʱ�䣺2019/10/14 09��01��59 *
*/
#include "pch.h"
#include <iostream>
using namespace std;
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