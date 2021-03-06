/***********************************************
PROGRAM FINDS
TOTAL AREA & TOTAL PERIMETER
FOR A COMPLEX SHAPE

IF SHAPE SUCH AS S FLOOR PLAN
IS BROKEN UP INTO MANY SIMPLE SHAPES
THIS PROGRAM WILL CALCULATE ITS AREA & PERIMETER

SIMPLE SHAPES ARE DEFINED TO BE:
RECTANGLE, CIRCLE, TRIANGLE_90, TRIANGLE_OBTUSE
************************************************/

#include "stdafx.h" /*USING VISUAL STUDIOS*/
#include "Rectangle.h"
#include "Circle.h"
#include "TriangleObl.h"
#include "Triangle90.h"
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
void exitConsole(void);

/*TOTAL AMOUNT OF SIMPLE SHAPES*/
#define MAX_REC 1     /*RECTANGLES*/
#define MAX_CIR 1     /*CIRCLES*/
#define MAX_CIR_H 2   /*HALF CIRCLES*/
#define MAX_TRI_90 2  /*RIGHT TRIANGLE*/
#define MAX_TRI_OBL 1 /*OBLIQUE TRIANGLE*/
#define FILE_OUT "comeplex_shape.txt" /*FILE FOR CALCULATED DATA  **WRITE ONLY***/
int main()
{
	ofstream outfile;
	outfile.open(FILE_OUT);
	if (outfile.fail()) {
		cout << "** FILE FAILED **\n";
		exit(1);
	}
		/*DECLARING RECTANGLES*/
	Rectangle rectangle[MAX_REC];
	double areaR[MAX_REC], perimeterR[MAX_REC];
    
	double totalperimeterR = 0; 
	double totalareaR = 0;
	for (int i = 0; i<MAX_REC; i++) {
		rectangle[i].getDimensions();
		areaR[i]= rectangle[i].getArea();
		perimeterR[i] = rectangle[i].getPerimeter();
		cout << "Area" << " [ " << i << " ]: " << areaR[i] << endl;
		cout << "Perimeter" << " [" << i << "]: " << perimeterR[i] << endl;
		totalareaR += areaR[i];
		totalperimeterR += perimeterR[i];
	}
	cout << "total area of all " << MAX_REC << " rectangles is: " << totalareaR << endl
	     << "total perimeter of all " << MAX_REC << " rectangles is: " << totalperimeterR << endl << endl;

	/*DECLARING CIRCLES*/
	Circle circle[MAX_CIR];
	double areaC[MAX_CIR], circumfrenceC[MAX_CIR];

	double totalcircumfrenceC = 0;
	double totalareaC = 0;
	for (int i = 0; i<MAX_CIR; i++) {
		circle[i].getDimensions();
		areaC[i] = circle[i].getArea();
		circumfrenceC[i] = circle[i].getCircumfrence();
		cout << "Area" << " [ " << i << " ]: " << areaC[i] << endl;
		cout << "Circumfrence" << " [" << i << "]: " << circumfrenceC[i] << endl;
		totalareaC += areaC[i];
		totalcircumfrenceC += circumfrenceC[i];
	}
	cout << "total area of all " << MAX_CIR << " circles is: " << totalareaC << endl
	     << "total circumfrence of all " << MAX_CIR << " circles is: " << totalcircumfrenceC << endl << endl;
	
	/*DECLARING 1/2 CIRCLES*/
	Circle circleH[MAX_CIR_H];
	double areaH[MAX_CIR_H], circumfrenceH[MAX_CIR_H];

	double totalcircumfrenceH = 0;
	double totalareaH = 0;
	for (int i = 0; i<MAX_CIR_H; i++) {
		circleH[i].getDimensionsH();
		areaH[i] = ( (circleH[i].getArea()) / 2 );
		circumfrenceH[i] = ( (circleH[i].getCircumfrence()) / 2 );
		cout << "Area" << " [ " << i << " ]: " << areaH[i] << endl;
		cout << "Circumfrence" << " [" << i << "]: " << circumfrenceH[i] << endl;
		totalareaH += areaH[i];
		totalcircumfrenceH += circumfrenceH[i];
	}
	cout << "total area of all " << MAX_CIR_H << " half circles is: " << totalareaH << endl
		 << "total circumfrence of all " << MAX_CIR_H << " half circles is: " << totalcircumfrenceH << endl << endl;

	/*DECLARING OBTUSE ANGLE TRIANGLES*/
	TriangleObl triangleO[MAX_TRI_OBL];
	double areaO[MAX_TRI_OBL], perimeterO[MAX_TRI_OBL], check[MAX_TRI_OBL];

	double totalperimeterO = 0;
	double totalareaO = 0;
	for (int i = 0; i<MAX_TRI_OBL; i++) {
		triangleO[i].getDimensions();
		check[i] = triangleO[i].checkTriangle();
		areaO[i] = triangleO[i].getArea(check[i]);
		perimeterO[i] = triangleO[i].getPerimeter();
		cout << "Area" << " [ " << i << " ]: " << areaO[i] << endl;
		cout << "Perimeter" << " [" << i << "]: " << perimeterO[i] << endl;
		totalareaO += areaO[i];
		totalperimeterO += perimeterO[i];
	}
	cout << "total area of all " << MAX_TRI_OBL << " obtuse triangles is: " << totalareaO << endl
		 << "total perimeter of all " << MAX_TRI_OBL << " obtuse triangles is: " << totalperimeterO << endl << endl;

	/*DECLARING RIGHT ANGLE TRIANGLES*/
	Triangle triangle90[MAX_TRI_90];
	double area90[MAX_TRI_90], perimeter90[MAX_TRI_90];

	double totalperimeter90 = 0;
	double totalarea90 = 0;
	for (int i = 0; i<MAX_TRI_90; i++) {
		triangle90[i].getDimensions();
		area90[i] = triangle90[i].getArea();
		perimeter90[i] = triangle90[i].getPerimeter();
		cout << "Area" << " [ " << i << " ]: " << area90[i] << endl;
		cout << "Perimeter" << " [" << i << "]: " << perimeter90[i] << endl << endl;;
		totalarea90 += area90[i];
		totalperimeter90 += perimeter90[i];
	}
	cout << "total area of all " << MAX_TRI_90 << " right triangles is: " << totalarea90 << endl
		 << "total perimeter of all " << MAX_TRI_90 << " right triangles is: " << totalperimeter90 << endl;

	/*SAVE TO TEXT FILE*/
	outfile << "THIS FILE CONTAINS DATA FROM PROGRAM AREA_PERIMETER_V2\n\n\n"
		    << "The total area of the complex shape is:      " << totalareaH + totalareaC + totalareaR + totalarea90 + totalareaO << endl
	        << "The total perimeter of the complex shape is: " << totalcircumfrenceH + totalcircumfrenceC + totalperimeterR + totalperimeter90 + totalperimeterO << endl
			<<"\n\nDATA BROKEN DOWN IN SHAPES\n\n"
		<< "total area of all " << MAX_REC << " rectangles is: " << totalareaR << endl
		<< "total perimeter of all " << MAX_REC << " rectangles is: " << totalperimeterR << endl << endl
		<< "total area of all " << MAX_CIR << " circles is: " << totalareaC << endl
		<< "total circumfrence of all " << MAX_CIR << " circles is: " << totalcircumfrenceC << endl << endl
		<< "total area of all " << MAX_CIR_H << " half circles is: " << totalareaH << endl
		<< "total circumfrence of all " << MAX_CIR_H << " half circles is: " << totalcircumfrenceH << endl << endl
		<< "total area of all " << MAX_TRI_OBL << " obtuse triangles is: " << totalareaO << endl
		<< "total perimeter of all " << MAX_TRI_OBL << " obtuse triangles is: " << totalperimeterO << endl << endl
		<< "total area of all " << MAX_TRI_90 << " right triangles is: " << totalarea90 << endl
		<< "total perimeter of all " << MAX_TRI_90 << " right triangles is: " << totalperimeter90 << endl << endl;

	outfile.close();
	exitConsole();
	return 0;
}


/*EXIT CONSOLE*/
void exitConsole()
{
	char e;
	cout << "\nwould you like to exit?\tpress any key \n";
	cin >> e;
	if (e = 'e')
	cout << "program terminated";
	else { cout << "hmmm"; }
}
