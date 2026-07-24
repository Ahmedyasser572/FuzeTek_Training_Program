#include <iostream>
using namespace std;




int main ()
{
    int year ;
    
    cin >> year ;

    if (year % 4  == 0)
    {
        cout << "Leap year" << endl;
    }
    if (year % 400  == 0)
    {
        cout << "Leap year" << endl;
    }
    if (year % 4  != 0 && (year % 400  != 0))
    {
        cout << "Not a Leap year" << endl;
    }
    return 0;
}