/******************************************************
	Program counts the number of vowels in a string
	
	User inputs the text with terminating character
*******************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numVowl= 0;
    string line;
    cout <<" Enter your line of text. When finished type 'x' then ENTER to terminate \n";
    getline(cin, line, 'x');
    cout << "\tyou typed:\n" << "\t"<<line << endl;
    int stringsize= int(line.length());
    for (int i=0; i<stringsize; i++)
    {
        switch(line.at(i))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
        numVowl++;
        }
    }
    cout <<"\nNumber of vowels are: "<< numVowl <<endl;
    return 0;
}