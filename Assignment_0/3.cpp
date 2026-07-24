#include <iostream>
using namespace std;


bool isVowel(char c){

        if(c == 'a' || c == 'A' )
        {return true;}
   else if(c == 'e' || c == 'E' )
        {return true;}
   else if(c == 'i' || c == 'I' )
        {return true;}
   else if(c == 'o' || c == 'O' )
        {return true;}
   else if(c == 'u' || c == 'U' )
        {return true;}
    else {return false;}
}

bool isSpecial(char c)
{
    if ((c == ' ' || c == '\t' || c == '\n') || ((c >= 32 && c <= 47) || (c >= 58 && c <= 64)))
    {
        return true;
    }
    else { return false;}
}

bool isNumber(char c)
{
    if (c >= '0' && c <= '9')
     {
            return true;
     }
     else 
     return false;
}


int main ()
{
    char input;
    cout << "Please enter your Character: " << endl;
    cin >> input;

    if (isVowel(input))
    {
        cout << "Vowel" << endl;
    }
    else if (!isVowel(input) && !isSpecial(input) && !isNumber(input))
    {
        cout << "consonant" << endl;
    }
    else if(isSpecial(input))
    {
        cout << "Special" << endl;
    }
    else 
    {
        cout << "Digit" << endl;
    }


    return 0;
}





