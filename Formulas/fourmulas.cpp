/*****************************************************
	FORMULAS
				
	DISTANCE FORMULA  IN CARTESIAN
	GETDATA ( USED IN HERONS FORMULA )
	HERONS FORMULA FOR AREA OF OBLIQUE TRAINGLE 
	FACTORIAL!
*******************************************************/
#include <iostream>
#include <cmath>
using namespace std;
/*Prototype*/
double distance_Formula(double, double, double, double);
double factorial(double num);
void getdata(double&, double&, double&);
void herons_Formula(double, double, double, double&, double&);


int main()
{
    double x1, x2, y1, y2; /*distance*/
    double num; /*factorial*/
    double side1, side2, side3, area, surface; /*Herons Formula*/
    
    //Distance formuala
    cout << " Enter 2 coordinate sets for distance formula \n"
         << " Example input:\n x1 \n"
         <<                " y2...\n";
    cin >> x1 >> y1
        >> x2 >> y2;
    cout << "The distance from point 1 --> point 2 is: " << distance_Formula(x1,y1,x2,y2) << endl;

    //Factorial of a number
    cout << "enter a whole number";
    cin >> num; 
    cout << factorial(num) << endl;
    
    //Herons Formula: Area of a Triangle 
    getdata(side1, side2, side3);
    herons_Formula(side1, side2, side3, area, surface);
    return 0;
}
/*Function Definition*/
//Distance between two points on cartesian 
double distance_Formula(double x1, double y1, double x2, double y2)
{ return sqrt( pow( (x2 - x1), 2) + pow( (y2 - y1), 2) ); }
//FACTORIAL   
double factorial(double num)
{
    double factorial = 1;
    for (int i = 1; i  <= num; i++) 
    { factorial = factorial * i; }
    cout << " factorial of " << num <<" is  " 
         << factorial << endl;    
}
// interacts with user 3 inputs 
void getdata(double& aa, double& bb, double& cc)
{ 
  cout << "Enter the sides of an oblique triangle \n";
  cin >> aa >> bb >> cc;
}
//Herons Formuala   **NOTE USING GETDATA AND ITS ADDRESS OF VARIABLES 1,2,3
void herons_Formula(double a, double b, double c, double& s, double & A)
{ 
  s = ( 0.5 * (a + b + c) );
  if (s < 0)
      cout << "There is no triangle " << "  Area = -1" << endl;
  else { 
   A = sqrt( (s * ((s-a) * (s-b) * (s-c)) ) );
   cout << "Area of an oblique triangle is:   " << A << endl;
   }
}
