#include <iostream>

using namespace std;


int main ()
{

    int a1 , a2 , result;
    char op;
    
    cout <<"please Enter two numbers then the operator"<< endl;
    cin >> a1 >> a2 >> op;
    
    if (op == '/' && a2 == 0)
    {
        cout << "we can't divide by zero" << endl;
        return 0;
    }

    switch (op) {
        case '+' :
        result = a1 + a2;
        break;
        case '%' :
        result = a1 % a2;
        break;
        case '*' :
        result = a1 * a2;
        break;
        case '-' :
        result = a1 - a2;
        break;
        case '/' :
        result = a1 / a2;
        break;
    }

    cout << "Result is " << result << endl;
    

    return 0;
}