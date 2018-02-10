/*******************************
    Statistics 
			
	MEAN........"AVERAGE"
	STANDARD DEVIATION  
********************************/
#include <iostream>
#include <cmath>
using namespace std;

const int NUMS = 10;

/*Function Prototype*/
double average_Num(double [], int);  
double standard_Deviation(double [], int, double); 

int main()
{
    //Enter data for analysis  
    double numbers [NUMS] = { 1.2, 1.4, 1.3, 1.23, 1.24, 
                              1.14, 1.234, 1.3, 1.2, 1.4 };
    double avg, standardDev;
    avg = average_Num(numbers, NUMS);
    standardDev = standard_Deviation(numbers, NUMS, avg);
    cout << "Average of the numbers is:   " << avg << endl;
    cout << "Standard deviation of the numbers is:  " << standardDev << endl;

    return 0;
}
//X-bar or "mean" of a group of elements 
double average_Num(double x[], int y)
{
    double total = 0; /*counter*/
    for (int i=0; i<y; i++)
        total = total + x[i]; 
    return (total / y);
}
//Standard Deviation of a group of elements
double standard_Deviation(double x[], int y, double z)
{
    double total = 0;
    for (int i=0; i<y; i++)
        total = total + pow( ( z-x[i] ), 2.0);
    return sqrt( total / (y-1) );
}
