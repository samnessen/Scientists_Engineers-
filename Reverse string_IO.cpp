//Program reverses a string of text
//Uses to functions rbegin(begin), rend(end)
//getline uses ? to end program
//although at() would determine pointer position the function begin and end
//are more thoughtful and uses less process time and previously proven to work
#include <iostream>
using namespace std;
int main ()
{
    string text;
    cout << "enter text to be reversed and end with ? \n" << endl;
    getline (cin, text, '?'); //cin input, user text, ? ends program
    text = string(text.rbegin(), text.rend()); //begin and reverse functions
    cout <<" The reverse is \n" << text << endl;

    return 0;
}
