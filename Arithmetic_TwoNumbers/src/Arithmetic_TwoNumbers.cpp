/********************************
*	User Input for Arithmetic	*
*		  of Two Numbers		*
*********************************/

#include <iostream>
using namespace std;

int main()
{
    int select;
    double num1, num2;

    cout << "Enter two numbers using enter:\n";
    cin >> num1 >> num2;
    cout << "Enter a selct code: "
         << "\n     1 for adittion"
         << "\n     2 for multiplication:"
         << "\n     3 for division:"
         << "  **NOTE: will divide number 1 over number 2\n";
    cin >> select;

    switch (select) // expression
    {
    case 1:
        cout << "The sum of the numbers are: " << num1 + num2;
        break; //out of loop
    case 2:
        cout <<"The product of the numbers are: " << num1 * num2;
        break; //if continue goes to outer most loop
    case 3:
        cout <<"The quotient of number 1 / number 2 is: " << num1 / num2;
        break;
    }
    return 0;
}
