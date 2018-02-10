/*******************************************
* Program determines largest set of bills *
*******************************************/

#include <iostream>
#include <cmath>
using namespace std;

void change(int&);

int main()
{
    int value;
    cout << "Program determines the largest denominator in descending order of US curency\n"
    	 << "**NOTE: Value must not include any coins/ remainders\n";
    while (1) {
    cout << "Enter amount of US dollars with no remaining coin amount: \n\t";
    cin  >> value;
    change(value);
    if (value == 1)
    	break;
    }
    return 0;
}

void change(int& value)
{
    cout << "\nNo. of 100 US bills: "  << (value / 100);
    cout << "\nNo. of 50  US bills: "  << (value %= 100)  / 50;
    cout << "\nNo. of 20  US bills: "  << (value %= 50)  / 20;
    cout << "\nNo. of 10  US bills: "  << (value %= 20) / 10;
    cout << "\nNo. of 5   US bills: "  << (value % 10) / 5;
    cout << "\nNo. of 1   US bills: "  << (value % 5) / 1;
}
