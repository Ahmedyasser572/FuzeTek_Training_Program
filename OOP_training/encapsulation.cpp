#include <iostream>
using namespace std;
using std::string;

class Employee{
    
    private:
    string Name;
    string Company;
    int age; 

public:
    void introduceYourself()
    {
        cout << "Name: "<< Name << endl;
        cout << "Company: "<< Company << endl;
        cout << "age "<< age << endl;
    }
    void SetName(string name, string company, int Age)
    {
        Name = name;
        Company = company;
        age = Age;
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
    employee1.SetName("ahmed Yasser", "Valeo", 23);


    employee1.introduceYourself();
    

}