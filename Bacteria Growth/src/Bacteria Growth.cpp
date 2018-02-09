/********************************
 *	Program Determines          *
 *	Bacteria Growth	Population  *
 *	Based On Time		        *
 ********************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double time;

    cout << "Enter refrigeration time in hours:minutes:seconds\n";
    cin >> time;
    cout << "Bacteria growth in culture after "
         << time << " total hours = "
         << setprecision(2) << fixed << 300000*exp(-0.032*time)
         <<endl;

    return 0;
}

