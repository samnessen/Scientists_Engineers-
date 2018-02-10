#include <iostream>
#include<math.h>
#include <iomanip>
using namespace std;
/*Prototype */
double PI(void);
double vol_Cylinder(double, double);
double surface_Area(double, double);

int main ()
{
	double radius = 2, height = 4;
    cout <<"\nVolume of Cylinder 1 is: " << vol_Cylinder(radius, height) << endl;
    cout << "\nSurface area of Cylinder 1:  " << surface_Area(radius, height) << endl;// only in use for PART B, refer to line 15
    return 0;
}
/* Function Definition */
double PI(void)
{ return acos(-1); }
double vol_Cylinder(double radius, double height)
{ return PI()*pow(radius,2.0)*height; }
double surface_Area(double radius, double height)
{ return ( 2 * PI() * radius * (height + radius) ); }
