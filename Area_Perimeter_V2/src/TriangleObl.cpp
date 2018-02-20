/*********************************************************
MEMBER FUNCTION DEFINITIONS OF THE CLASS OBLIQUE TRIANGLE
**********************************************************/

#include "stdafx.h"
#include "TriangleObl.h"
#include <iostream>
#include <math.h>
using namespace std;

void TriangleObl::getDimensions(void)
{
	cout << "enter side1 for oblique triangle: ";
	cin >> side1;
	cout << "enter side2 for oblique triangle: ";
	cin >> side2;
	cout << "enter side3 for oblique triangle: ";
	cin >> side3;
}
/*CHECK IF OBLIQUE TRIANGLE EXSITS*/
double TriangleObl::checkTriangle(void)
{
	double checkShape = ((side1 + side2 + side3) / 2);
	if (checkShape < 0 || checkShape == 0) 
		cout << "\t** There is no oblique triangle, maybe its acute **\n";
	else {
		cout << "\tThis is an oblique triangle\n";
		return checkShape;
	}
}
/*PASS IN VALUE 'CheckShape' */
double TriangleObl::getArea(double s)
{
	double area;
	area = sqrt((s * ((s - side1) * (s - side2) * (s - side3)) ));
	return area;
}
double TriangleObl::getPerimeter(void)
{
	double perimeter;
	perimeter = side1 + side2 + side3;
	return perimeter;
}

