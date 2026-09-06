#include <iostream>
#include <string>

using namespace std;

// Abstract class: it describes what every employee must do,
// but it does not define how each employee does the work.
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

    // Pure virtual function makes Employee an abstract class.
    virtual void work() const = 0;

    virtual ~Employee() = default;
};

class Developer : public Employee {
public:
    Developer(string name, string company)
        : Employee(name, company) {}

    void work() const override
    {
        cout << name << " writes code." << endl;
    }
};

class Tester : public Employee {
public:
    Tester(string name, string company)
        : Employee(name, company) {}

    void work() const override
    {
        cout << name << " tests the software." << endl;
    }
};

int main()
{
    Developer developer("Ahmed", "Valeo");
    Tester tester("Sara", "Valeo");

    developer.introduceYourself();
    developer.work();

    cout << endl;

    tester.introduceYourself();
    tester.work();
}