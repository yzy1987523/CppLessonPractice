#include "pch.h"
#include "employee.h"
#include <iostream>
namespace employeessavitch {
	employeessavitch::Employee::Employee() :Employee("Null", "Null")
	{
	}

	employeessavitch::Employee::Employee(string theName, string theSSN) : name(theName), ssn(theSSN), netPay(0)
	{
	}

	string employeessavitch::Employee::getName() const
	{
		return name;
	}

	string employeessavitch::Employee::getSSN() const
	{
		return ssn;
	}

	double employeessavitch::Employee::getNetPay() const
	{
		return netPay;
	}

	void employeessavitch::Employee::setName(string newName)
	{
		name = newName;
	}

	void employeessavitch::Employee::setSSN(string newSSN)
	{
		ssn = newSSN;
	}

	void employeessavitch::Employee::setNetPay(double newNetPay)
	{
		netPay = newNetPay;
	}
	//需要重定义
	void employeessavitch::Employee::printCheck() 
	{
		cout << "Error!\n";
		exit(1);
	}
	HorlyEmployee::HorlyEmployee():HorlyEmployee("Null","Null",0,0)
	{
	}
	HorlyEmployee::HorlyEmployee(string theName, string theSSN, double theWageRate, double theHours):Employee(theName,theSSN),wageRate(theWageRate),hours(theHours)
	{
	}
	void HorlyEmployee::setRate(double newWageRate)
	{
		wageRate = newWageRate;
	}
	double HorlyEmployee::getRate() const
	{
		return wageRate;
	}
	void HorlyEmployee::setHours(double hoursWorked)
	{
		hours = hoursWorked;
	}
	double HorlyEmployee::getHours() const
	{
		
		return hours;
	}
	void HorlyEmployee::printCheck()
	{
		setNetPay(hours*wageRate);
		cout << "\n_______________________________\n";
		cout << "Pay to the order of " << getName() << endl;
		cout << "The sum of " << getNetPay() << " Dollars\n";
		cout << "\n_______________________________\n";
		cout << "Check Stub:NOT NEGOTIABLE\n";
		cout << "Employee Number: " << getSSN() << endl;
		cout << "Hourly Employee. \nHours worked: " << hours
			<< " Rate: " << wageRate << " Pay: " << getNetPay() << endl;
		cout << "\n_______________________________\n";
	}
}