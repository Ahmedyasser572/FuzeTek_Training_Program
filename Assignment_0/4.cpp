#include<iostream>
using namespace std;


int main()
{
    int a1, a2, a3;

    cin >> a1 >> a2 >> a3;
    
    if(a1 > a2 && a1 > a3 )
    {
        cout << a1 <<" is the largest" << endl;
    }
    else if(a1 < a2 && a2 > a3 )
    {
        cout << a2 <<" is the largest" << endl;
    }
    else if(a3 > a2 && a1 < a3 )
    {
        cout << a3 <<" is the largest" << endl;
    }
    else {
        cout << a1 <<" is the largest" << endl;
    }
    return 0 ;

}

