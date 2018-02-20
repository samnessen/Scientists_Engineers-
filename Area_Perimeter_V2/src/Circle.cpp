/*****************************************************
	MEMBER FUNCTION DEFINITIONS OF THE CLASS CIRCLE
******************************************************/

#include "stdafx.h" /*USING VISUAL STUDIOS*/
#include "Circle.h"
#include <iostream>
#include <math.h>
using namespace std;

#define PI acos(-1)  /*INVERSE COSINE*/

void Circle::getDimensions(void)
{
	cout << "enter a radius for circle: ";
	cin >> radius;
}
void Circle::getDimensionsH(void)
{
	cout << "enter a radius for **half** circle: ";
	cin >> radius;
}
double Circle::getArea(void)
{
	double area;
	area = (PI * (radius*radius) );
	return area;
}
double Circle::getCircumfrence(void)
{
	double circumfrence;
	circumfrence = (2 * PI * radius);
	return circumfrence;
}
