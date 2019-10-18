#pragma once
#include <iostream>
using namespace std;
void print() {
	cout << "请输入一组数字：";
	char c;
	do 
	{
		cin.get(c);
		cout.put(c);
		cout << endl;
	} while (c!='\n');
}