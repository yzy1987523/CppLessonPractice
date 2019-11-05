#pragma once
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
using namespace std;
template<class T>
void swapValues(T& v1, T& v2) {
	T temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
}
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> a;//�ṩһ��һ��hash
		vector<int> b(2, -1);//�������ؽ������ʼ��һ����СΪ2��ֵΪ-1������b
		for (int i = 0; i < nums.size(); i++)
		{
			if (a.count(target - nums[i]) > 0)
			{
				b[0] = a[target - nums[i]];
				b[1] = i;
				break;
			}
			a[nums[i]] = i;//����������map�У�������ȡ����±�
		}
		return b;
	}
};