/*****************************
 *	Swap two numbers         *
 *	Reverse any whole numner *
 *****************************/

#include <iostream>
using namespace std;
/*Prototype*/
void swap(double, double);
int reverse(int num);


 int main ()
 {
     double num1,num2;
     swap (num1, num2);
     reverse(num1);
     reverse(num2);
     return 0;
 }

 /*Definition*/
 //Swap two numbers
 void swap(double x, double y)
 {
     cout << "enter two numbers to be swaped \n";
     cin >> x >> y;
     cout << "Original values:  "
          << "(" << x << "," << y << ")" << endl;
     double swap = x;
     x = y;
     y = swap;
     cout << "Reversed values:  "
          << "(" << x << "," << y << ")"
		  << endl;
 }
//Function reverse the digits of any whole number in base 10
//No values with decimals or fractions
 int reverse(int num) {
     int r = 0;
     cout << "Enter an integer to be reversed: \n";
     cin >> num;
     while(num != 0)
     {
    	 int remainder = num%10;
         r = r*10 + remainder;
         num/=10;
     }
     cout << "Reversed number = \n" << r;
     return 0;
 }

