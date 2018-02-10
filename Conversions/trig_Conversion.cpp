/***************************************
 * Program converts                    *
 * Deg to Rad and shows                *
 * value in sine                       *
 *                                     *
 * Program also determines             *
 * where theta lies on an axis         *
 ***************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = acos(-1);
const double DEG_TO_RAD = ( PI / 180.0000 );

/*Prototype*/
double sin_Rad(double angle);
void quad(double angle);

int main()
{
        double angle;
        cout << "enter the angle (in degrees) ";
        cin >> angle;
        sin_Rad(angle);
        
        quad(angle);

         return 0;
}
/*Function Definition*/

//conversion degree to radian, value in terms of sine()
double sin_Rad(double angle)
{
    cout << setiosflags(ios:: fixed)
         << setiosflags(ios:: showpoint)
         << "the sine of the angle is " << sin(angle * DEG_TO_RAD)
         <<endl<<endl;
}
void quad(double angle)
{
    if (angle == 0 || angle == 90 || angle == 180 || angle == 270 || angle ==360)
    {
        cout << " angle is a quadrantal angle and lies on some axis \n";
        if (angle == 0 || angle == 360)
            cout << " This angle lies on Positive x-axis\n";
        else if
            (angle == 180)
            cout << " This angle lies on Negative x-axis\n";
        else if
             (angle == 90)
             cout << " This angle lies on Positive y-axis\n";
        else if
             (angle == 270)
             cout <<  " This angle lies on Negative y-axis\n";
    }
        else if (angle > 0 && angle < 90)
            cout << "This angle lies in quadrant: I";
        else if (angle > 90 && angle < 180)
            cout << "This angle lies in quadrant: II";
        else if (angle > 180 && angle < 270)
            cout << "This angle lies in quadrant III";
        else
            cout << "This angle lies in quadrant IV";
}
