#include <iostream>

using namespace std;

// Triangle Sides Check
int main ()
{
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    if(a1 + a2 <= a3 || a2 + a3 <= a1 || a1 + a3 <= a2)
    {
        cout << "The Triangle is invalid" << endl;
        return 0;

    }
    if (a1 == a2 && a2 == a3)
    {
        cout << "The Triangle is Equilteral" << endl;
    }
    else if (a1 == a2 || a2 == a3 || a1 == a3)
    {
        cout << "The Triangle is Isoscales" << endl;
    }
    else if(a1 != a2 && a2 != a3)
    {
        cout << "The Triangle is Scalene" << endl;
    }


return 0;

}