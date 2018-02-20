/*********************************************************
MEMBER FUNCTION DEFINITIONS OF THE CLASS RIGHT TRIANGLE
**********************************************************/

#include "stdafx.h" /*USING VISUAL STUDIOS*/
#include "Triangle90.h"
#include <iostream>
using namespace std;

void Triangle::getDimensions(void)
{
	cout << "enter side1 for right triangle   **VERTICAL LEG**: ";
	cin >> side1;
	cout << "enter the base for a right triangle **ADJACENT TO VERTICAL**: ";
	cin >> base;
}
double Triangle::getArea(void)
{
	double area;
	area = ( (base * side1) / 2 );
	return area;
}
double Triangle::getPerimeter(void)
{
	double perimeter;
	perimeter = (side1 + base + sqrt( (side1*side1) + (base*base) ));
	return perimeter;
}