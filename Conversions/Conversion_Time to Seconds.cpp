/*************************
* Converison             *
* Total Seconds to       *
* Hour: Minutes: Seconds *
**************************/

#include <iostream>
#include <cmath>
using namespace std;
/*Prototype*/
void time(int, int&, int&, int&);
void Convert(int value, int &hour, int &minute, int &seconds);

int main()
{
    int h, m, s, total;

    cout << "This program determines time with seconds as an input \n\n"
         << "Enter total amount of seconds:  ";
    cin  >> total;
    time(total, h, m, s);

    return 0;
}
/*Definition*/
void time(int totals, int &hours, int &minutes, int &seconds)
{
   hours = totals / 3600;
   minutes = (totals % 3600)/60;
   seconds = totals % 60;

    cout <<" seconds is equivalent to \n"
         << "\n hours:    " << hours
         << "\n minutes:  " << minutes
         << "\n seconds:  " << seconds << endl;
}
void Convert(int value, int &hour, int &minute, int &seconds)
{
    hour = ( value / 3600 );           // Hour component
    minute = (value % 3600) / 60;     // Minute component
    seconds = ( value % 60 );        // Second component
}
