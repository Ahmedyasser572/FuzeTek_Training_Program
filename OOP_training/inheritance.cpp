#include <iostream>
#include <string>

using namespace std;

// Parent class: common properties and behavior for every employee.
class Employee {
protected:
	string name;
	string company;
    

public:
	Employee(string employeeName, string employeeCompany)
		: name(employeeName), company(employeeCompany) {}

	void introduceYourself() const
	{
		cout << "Name: " << name << endl;
		cout << "Company: " << company << endl;
	}
};

// Developer inherits name, company, and introduceYourself()
// from Employee.
class Developer : public Employee {
public:
string languageUsed;

	Developer(string name, string company, string languageUsed)
		: Employee(name, company), languageUsed(languageUsed) {}

	void writeCode() const
	{
		cout << name << " writes " << languageUsed << " code." << endl;
	}
};

// Tester also inherits from Employee.
class Tester : public Employee {
public:
string typeTestesting;

	Tester(string name, string company, string typeTestesting)
		: Employee(name, company), typeTestesting(typeTestesting) {}

	void testSoftware() const
	{
		cout << name << " makes "<< typeTestesting << endl;
	}
};

int main()
{
	Developer developer("Ahmed", "Valeo", "c++");
	Tester tester("Sara", "Valeo", "unittesting");

	developer.introduceYourself();
	developer.writeCode();

	cout << endl;

	tester.introduceYourself();
	tester.testSoftware();
}
