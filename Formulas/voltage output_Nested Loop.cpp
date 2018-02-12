/************************************************************
	This program determines 
	The average of 5 generation generators
	& their output voltages over 3 timed intervals
	
	Output voltages are user defined

**************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
/*DECLARE VARIABLES*/
const int GENIE = 5, VOLTAGE = 3, TOTAL = 1;

int main()
{
    double i, j, l;  /*loops & counters*/
    double volt, avg, total, avg2;

    cout << "This program determines the test of"
         << " 5 generators and their associated output voltages"
         << " at three different times \n"
         << "collects the total and outputs averages \n";

    for (l=1; l <= TOTAL; l++) { 
    	avg = 0; 
        for (i = 1; i <= GENIE; i++) {
		total = 0; 
            	for (j = 1; j <= VOLTAGE; j++) {
			cout << "\n Enter voltage output for generation " << i << ":" << endl;
            		cin >> volt;
            		total = total + volt; 
                }
        	avg = total / VOLTAGE; 
        	avg2 = avg2 + avg; 
        	cout << setprecision(0) << "The AVERAGE output for generation  #" << i
        	<< " is:        " 
        	<< setprecision(2) << fixed << avg << endl;
        }
        avg2 = avg2 / GENIE; // calculates average / GENIE at end
        cout << setprecision(2) << "average for all is:                    " << avg2;
    }
    return 0;
}
