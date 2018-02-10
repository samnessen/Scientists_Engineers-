/*****************************
 * Determines absolute value *
 * 							 *
 * One function Handling     *
 * Different datatypes	     *
 *****************************/
//Funtion Template
#include<iostream>
using namespace std;
template <class T> /* class datatype */
T abs_Template(T num)
{
    if (num < 0)
        num = -num;
    return num;
}

int main ()
{
    int num1 = -4;
    double num2 = -4.22;
    float num3 = -4.33;
    abs_Template(num1);
    abs_Template(num2);
    abs_Template(num2);
    cout << "Absolute value of: \n"
    	 << "num1	num2	num3"<<endl
		 << "----    ----    ----" <<endl
		 <<" "<<num1 <<"    "<< num2 <<"   "<< num3;
    return 0;
}
