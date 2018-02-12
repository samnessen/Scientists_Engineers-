/****************************************
 This program determines 
 amplification of electronic circuits
*****************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double powerInput, powerOutput, decibel_amplification;

    powerOutput = 4.639; // input
    powerInput = 1; // output
    decibel_amplification = log10(po/pi);

    cout << "Power of input signal: "
         << powerInput << " watt(s)" << endl
         << "Power of output signal: " << powerOutput << " watt(s)" << endl
         << "The calculated decibel amplification is: " << decibel_amplification << " decibel(s)" << endl;


    return 0;
}


