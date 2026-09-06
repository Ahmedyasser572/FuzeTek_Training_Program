#include <iostream>
using namespace std;
using std::string;

class Employee{
    
    public:
    string Name;
    string Company;
    int age; 


    void introduceYourself()
    {
        cout << "Name: "<< Name << endl;
        cout << "Company: "<< Company << endl;
        cout << "age "<< age << endl;
    }

    Employee( string name, string company, int Age)
    {
        Name = name;
        Company = company;
        age = Age;
    }



};


int main()
{

    Employee employee1 = Employee("ahmed", "Valeo", 25);


    employee1.introduceYourself();
    

}