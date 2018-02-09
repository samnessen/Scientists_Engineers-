/*************************
 *	A Number & Its power *
 *************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;

    cout << "NUMBER     SQUARE     CUBE\n"
         << "------     ------     ----\n";

    num = 1;
    while (num  <= 11) //Variations include (num < 11) giving 10 inputs
    {
        cout << setw (3) << num << "     "
             << setw (7) << num * num << "     "
             << setw (5) << num * num * num << endl;
        num++;
    }
    return 0;
}

