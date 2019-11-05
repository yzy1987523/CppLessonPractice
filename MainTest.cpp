#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#define NDEBUG
#include <cassert>
#include "dtime.h"
//#include "node.h"
#include "queue.h"
#include "vprint.h"
#include "pet.h"
#include "template.h"
using namespace std;
using namespace pet;
void dtimeTest();
//void nodeTest();
void queueTest();
void print();
void petTest();
//vector<int> twoSum(vector<int>& nums, int target);
int main(){		
	Solution s;
	vector<int> a = {1,2,3,4,5,6};

	vector<int> b= s.twoSum(a,8);
	cout << b[0] << endl;
	cout << b[1] << endl;
	//dtimeTest();
	//nodeTest();
	//queueTest();
	//print();
	//petTest();

	//twoSum();
}
