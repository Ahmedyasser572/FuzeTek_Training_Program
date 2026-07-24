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



int main() {

    cout << "Please enter a line of text: " << endl;
    string input;
    int Vowels = 0, consonant= 0,number = 0, special = 0;
    getline(cin, input);

    for (char c :input){
        if (isVowel(c))
        {
            Vowels++;
        }
        if (!isVowel(c) && !isSpecial(c) && (c >= '0' && c <= '9'))
        {
            consonant++;
        }
        if (c >= '0' && c <= '9') {
            number++;
        }

        else if (isSpecial(c))
        {
            special++;
        }

}
cout <<"Vowels "<< Vowels << " consonant " << consonant << " number " << number << " Special " << special << endl;
return 0;
}
