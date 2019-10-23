#pragma once
#include <string>
using namespace std;
namespace pet {
	class Pet
	{
	public:
		virtual void print();

	protected:
	private:
		string name;
	};
	class Dog :public Pet {
	public:
		virtual void print();
		int index;
		int id;
	private:
	};
}