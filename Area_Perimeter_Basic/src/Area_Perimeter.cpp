/***********************************************
*	Program Determines The Area & Perimeter    *
*	For A 2-D shape	                           *
*											   *
*	Functions Use Simple Shapes				   *
*	Circle, Rectangle, & Triangle			   *
************************************************/

#include<fstream>
#include<iomanip>
#include<iostream>
#include<math.h>
using namespace std;

#define PI acos(-1)  /*INVERSE COSINE*/

// function prototype
double rectangle_Area(double length, double width);
double rectangle_Perimeter(double length, double width);
double triangle_Area(double height, double base);
double triangle_Perimeter(double length1, double baseP, double length2);
double circle_Perimeter(double radius);	
double circle_Area(double radius);

int main() 
{	 	
	///variables for shapes_A
	double areaRectangle, perimeterRectangle;
	double areaTriangle, perimeterTriangle;
	double areaCircle, perimeterCircle;
	//variables for sides_A
	double lengthS, widthS;
	double baseT, heightT, lengthT1, lengthT2;
	double radiusC;
	
	cout << "enter a length for rectangle 1: " << endl;
	cin >> lengthS;
	cout << "enter width for rectangle 1: " << endl;
	cin >> widthS;
	cout << "enter a base for triangle 1: " << endl;
	cin >> baseT;
	cout << "enter a height for triangle 1: " << endl;
	cin >> heightT;
	cout << "enter length1 for triangle 1 to calculate perimeter: " << endl;
	cin >> lengthT1;
	cout << "enter length2 for tringle 1 to calculate perimeter: " << endl;
	cin >> lengthT2;
	cout << "enter a radius for circle 1 to calculate the area and perimeter: " << endl;
	cin >> radiusC;
		
	areaRectangle = rectangle_Area(lengthS, widthS);
	perimeterRectangle = rectangle_Perimeter(lengthS, widthS);
	areaTriangle = triangle_Area(baseT, heightT);
	perimeterTriangle = triangle_Perimeter(lengthT1, baseT, lengthT2);
	areaCircle = circle_Area(radiusC);
	perimeterCircle = circle_Perimeter(radiusC);
	
	cout << "The area of rectangle 1 is: " << areaRectangle << endl;
	cout << "The perimeter of rectangle 1 is: " << perimeterRectangle << endl;
	cout << "The area of triangle 1 is: " << areaTriangle << endl;
	cout << "The perimeter of triangle 1 is: " << perimeterTriangle << endl;
	cout << "The area of cricle 1 is: " << areaCircle << endl;
	cout << "The circumfrence of circle 1 is: " << perimeterCircle << endl << endl;
	
	cout << "The total area of the shape is: " << areaSquare + areaTriangle + areaCircle << endl;
	cout << "The total perimeter of the shape is: " << perimeterSquare + perimeterTriangle + perimeterCircle << endl;
	
	return 0;
}

/* Function Decleartions */
//calculate the area of square
double rectangle_Area(double length, double width) {	
	double area = length * width;
	return area;
}
//calculate the perimeter of square
double rectangle_Perimeter(double length, double width) {
	double perimeter;	
	perimeter = ( (length * 2) + (width * 2) );
	return perimeter;
}
//calculate the area of a triangle
double triangle_Area(double height, double base) {	
	double area = ( (height*base ) /  2 );
	return area;
}
//Calculate perimeter of a triangle
double triangle_Perimeter(double length1, double base) {	
	double perimeter = (length1 + base + sqrt( (side1*side1) + (base*base) ));
	return perimeter;
}
//calculate the area of a circle
double circle_Area(double radius) {	
	double area = (PI * ( radius * radius ) );
	return area;
}
//Calculate circumference of a Circle 
double circle_Perimeter(double radius) {	
	double perimeter = ( 2 * PI * radius );
	return perimeter;
}

	 
	 
