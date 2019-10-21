#pragma once
#include <string>
using namespace std;
namespace employeessavitch {
	class Employee {
	public:
		Employee();
		Employee(string theName, string theSSN);
		string getName() const;
		string getSSN() const;
		double getNetPay() const;
		void setName(string newName);
		void setSSN(string newSSN);		
		void setNetPay(double newNetPay);
		void printCheck() const;
	private:
		string name;
		string ssn;
		double netPay;
	};
	class HorlyEmployee :public Employee {
	public:
		HorlyEmployee();
		HorlyEmployee(string theName, string theSSN,
			double theWageRate,double theHours);
		void setRate(double newWageRate);
		double getRate() const;
		void  setHours(double hoursWorked);
		double getHours() const;
		void printCheck();
	private:
		double wageRate;
		double hours;
	};
}