#include <iostream>
using namespace std;

int main()
{
    int grade = 0;
    cout << "Please enter your grade: " << endl;
    cin >> grade;
    if (grade <= 100 && grade >= 0)
    {
        if (grade >= 90 && grade <= 100) // Range check
        {
            if (grade >= 95 && grade <= 100)
            {   
                cout << "Excellent" << endl;
                return 0;
            }

            cout << "A" << endl;
        }
        if (grade >= 80 && grade <= 90)
        {
            cout << "B" << endl;
        }
        if (grade >= 70 && grade <= 60)
        {
            cout << "C" << endl;
        }
        if (grade >= 60 && grade <= 70)
        {
            cout << "D" << endl;
        }
        else if (grade <= 60)
        {
            cout << "You have Failed ^----^"<< endl;
        }
    }
    else
    {
        cout << "the input must be between 0 and 100"; // Warning Message 
    }
    return 0;
}