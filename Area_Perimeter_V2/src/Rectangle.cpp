/*********************************************************
	MEMBER FUNCTION DEFINITIONS OF THE CLASS RECTANGLE
**********************************************************/

#include "stdafx.h" /*USING VISUAL STUDIOS*/
#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::getDimensions(void)
{
	cout << "enter a length for rectangle: ";
	cin >> length;
	cout << "enter width for rectangle: ";
	cin >> width;
}
double Rectangle::getArea(void)
{
	double area;
	area = length * width;
	return area;
}
double Rectangle::getPerimeter(void)
{
	double perimeter;
	perimeter = (length * 2) + (width * 2);
	return perimeter;
}