/******************************************
 	 This Program writes into a file

 	 Area of a Trapezoid is calculated
 	 Then displayed into
 	 an established file
 ******************************************/
#include <cmath>
#include <iostream>
#include <fstream>
#include <cstdlib> // we can use exit (1)
using namespace std;
/*Prototype*/
double area_Trapezoid(double&, double&, double&);

int main ()
{
    ofstream outfile;
    outfile.open("TRAPEZOID_AREA.txt");
    if(outfile.fail() )//condition
    {
        cout <<"** File Failed ** \n";
        exit(1);
    }
    double base1, base2, height;
    double area = area_Trapezoid(base1, base2, height);
	outfile << "You entered in: \n"
		    << "BASE1: "<< base1 <<endl
		    << "BASE2: "<< base2 <<endl
		    << "HEIGHT: "<< height << endl;
    outfile <<"The area of trapezoid 1 is:   "<< area <<endl;
    return 0;
}
/*Definition*/
double area_Trapezoid(double& a, double& b, double& h)
{
	cout << "enter variables for a trapezoid \n" << " base1, base2, height \n";
	cin >> a >> b >> h;
	cout << "You entered in: \n"
		 << "BASE1: "<< a <<endl
		 << "BASE2: "<< b <<endl
		 << "HEIGHT: "<< h;
	return ( (a+b)*( h/2) );
}
