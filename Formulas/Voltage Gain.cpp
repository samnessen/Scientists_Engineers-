/********************************************
	This program determines voltage gain
	
	variables 
	frequency & stage amplification
*********************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double stage, frequency, voltage_gain;

    stage = 12; /*stage amplification*/
    frequency = 9500; // frequency
    voltage_gain = (275 / sqrt( pow(23.0,2) + 0.5 * pow(frequency,2) ) ); 
    voltage_gain = pow(voltage_gain,stage);

    cout << "At a frequency of "
         << setw(5) << frequency << " hertz,"
         << " the voltage gain is "
         << setw(5) << voltage_gain << endl; 

    return 0;
}

