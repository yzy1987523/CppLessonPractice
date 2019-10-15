/*
文件名：UnitTransform.cpp
作者：yzy
说明：这是一个单位转换工具——克转盎司
上次修改时间：2019/10/14 09：01：59 *
*/
#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;
const int TI = 1;
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
	inStream.open("infile.dat");//需要创建，在vcxproj同级目录下
	outStream.open("outfile.dat");//可以自动生成
	int a, b, c;
	inStream >> a >> b >> c;//输入文件内的数据用空格或回车分开
	outStream << (a + b + c) << endl;
	inStream.close();//注意用完要关
	outStream.close();
}