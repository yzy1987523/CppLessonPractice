#pragma once
#include <iostream>
using namespace std;
void print() {
	cout << "������һ�����֣�";
	char c;
	do 
	{
		cin.get(c);
		cout.put(c);
		cout << endl;
	} while (c!='\n');
}