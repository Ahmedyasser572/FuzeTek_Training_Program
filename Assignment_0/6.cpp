#include <iostream>

using namespace std;

// conversion from Celcious to fherenhiht and vice versa
int main ()
{
    float input, result;
    char c;

    cin >> input >> c;
    switch (c)
    {
        case 'c' :
        result = (input * (9.0/5.0)) + 32.0 ;
        break;
        case 'f' :
        result = (input - 32.0) * (5.0/9.0) ;
        break;
    }

    
    
    // 1. Determine the Celsius value for the advisory check
    int celsius_temp;
    if (c == 'c') {
        celsius_temp = input; // If input was Celsius, use input
    } else {
        celsius_temp = result; // If input was Fahrenheit, the result is Celsius
    }

    // 2. Output the converted temperature and unit
    if (c == 'c') {
        cout << result << "°F ";
    } else {
        cout << result << "°C ";
    }

    // 3. Output the weather advisory based on the Celsius temperature
    if (celsius_temp < 0) {
        cout << "Freezing" << endl;
    } else if (celsius_temp >= 0 && celsius_temp <= 15) {
        cout << "Cold" << endl;
    } else if (celsius_temp >= 16 && celsius_temp <= 30) {
        cout << "Moderate" << endl;
    } else if (celsius_temp > 30) {
        cout << "Hot" << endl;
    }

return 0;
}