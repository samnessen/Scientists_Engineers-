/**********************
 * Feet to Meter      *
 *                    *
 * Outputs a table    *
 * from feet to meter *
 **********************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int START_FEET = 3;
	const int STOP_FEET = 30;
    const int STEP_SIZE = 3; /* Increment the values */

    cout << "A conversion table from Feet to Meter\n"
         << "FEET        METER\n"
         << "----        -----\n";
    double feet = START_FEET;

    cout << setiosflags(ios::showpoint)
         << setprecision(4);

    while (feet <= STOP_FEET)
    {
        double meter = feet / 3.28;
        cout << setw(3) << feet
             << setw(14) << meter << endl;
        feet = feet + STEP_SIZE;
    }
    return 0;
}
