#pragma once
template<class T>
void swapValues(T& v1, T& v2) {
	T temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
}