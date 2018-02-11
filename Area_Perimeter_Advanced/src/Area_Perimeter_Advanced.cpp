/******************************************
 	 PROGRAM SOLVES
 	 TOTAL AREA & TOTAL PERIMETER
 	 FOR A COMPLEX SHAPE

 	 IF SHAPE SUCH AS S FLOOR PLAN
 	 IS BROKEN UP INTO MANY SIMPLE SHAPES
 	 THIS PROGRAM CAN CALCULATE SUCH A SHAPE

 	 SIMPLE SHAPES:
 	 RECTANGLE, TRIANGLE, CIRCLE
 ********************************************/

#include<iomanip>
#include<iostream>
#include<math.h>
#include<fstream>
#include<cstdlib>
using namespace std;

/*DEFAULT AMOUNT OF SHAPES*/
#define MAX_RECTAN 2
#define MAX_TRI 2
#define MAX_TRI_OBL 2
#define MAX_CIR 2
#define PI acos(-1)  /*INVERSE COSINE*/
#define FILEOUT "geometry.txt"
struct Rectangle {
	double lengthR;
	double widthR;
	double areaR;
	double perimeterR;
}rectangle[MAX_RECTAN];

struct Triangle {
	double lengthT1;
	double lengthT2;
	double baseT;
	double heightT;
	double areaT;
	double perimeterT;
}triangle[MAX_TRI];

struct ObliqueTriangle {
	double side1H;
	double side2H;
	double side3H;
	double areaH;
	double perimeterH;
}triangleO[MAX_TRI_OBL];

struct Circle {
	double radiusC;
	double areaC;
	double perimeterC;
}circle[MAX_CIR];

/*Function Prototypes*/
Rectangle variablesRectangle(Rectangle&, Rectangle&);
Triangle variablesTriangle(Triangle&, Triangle&, Triangle&, Triangle&);
ObliqueTriangle variablesOblique(ObliqueTriangle&, ObliqueTriangle&, ObliqueTriangle&);
Circle variablesCircle(Circle&);
void printRectangle(Rectangle&);
void printTriangle(Triangle&);
void printOblique(ObliqueTriangle& a);
void fileoutArrays(double&, double&);

void printCircle(Circle&);
int main()
{
	/*Variables for shapes*/
	Rectangle length, width, varRectangle;
	Triangle base, height, length1, length2, varTriangle;
	Circle radius, varCircle;
	ObliqueTriangle side1, side2, side3, varOblique;

	varRectangle = variablesRectangle(length, width);
    printRectangle(varRectangle);
    cout << endl;
    varTriangle = variablesTriangle(height, base, length1, length2);
    printTriangle(varTriangle);
    cout << endl;
    varCircle = variablesCircle(radius);
    printCircle(varCircle);
    cout << endl;
    varOblique = variablesOblique(side1, side2, side3);
    printOblique(varOblique);

    /*Adding totals for final shape*/
    double totalA, totalP;
    for (int i=0; i<MAX_RECTAN; i++) {
		 totalA += rectangle[i].areaR + triangle[i].areaT + circle[i].areaC + triangleO[i].areaH;
		 totalP += rectangle[i].perimeterR + triangle[i].perimeterT + circle[i].perimeterC + triangleO[i].perimeterH;
	}
    fileoutArrays(totalA, totalP);

    return 0;
}
/*Function Definition*/
/*gathering all variables*/
Rectangle variablesRectangle(Rectangle& l, Rectangle& w)
{
	for (int i=0; i<MAX_RECTAN; i++) {
		cout << "enter a length for rectangle ["<< i << "] :"<< endl;
		cin >> rectangle[i].lengthR;
		cout << "enter width for rectangle ["<< i << "] :"<< endl;
		cin >> rectangle[i].widthR;
		rectangle[i].areaR = ( rectangle[i].lengthR * rectangle[i].widthR );
		rectangle[i].perimeterR = ( rectangle[i].lengthR + rectangle[i].widthR);
	}
}
/*Area & Perimeter*/
void printRectangle(Rectangle& a)
{
	for (int i=0; i<MAX_RECTAN; i++) {
		cout << "rectangle ["<< i << "]"<< " has area: "
	         << rectangle[i].areaR << endl;
		cout << "rectangle ["<< i << "]"<< " has perimeter: "
			 << rectangle[i].perimeterR << endl;
	}
}
/*NOTE: Right Triangle*/
Triangle variablesTriangle(Triangle& h, Triangle& b, Triangle& l1, Triangle& l2)
{
	for (int i=0; i<MAX_TRI; i++) {
		cout << "for perimeter enter a length A for triangle ["<< i << "] :"<< endl;
		cin >> triangle[i].lengthT1;
		cout << "for perimeter enter a length B for triangle ["<< i << "] :"<< endl;
		cin >> triangle[i].lengthT2;
		cout << "for perimeter/ area enter a base for triangle ["<< i << "] :"<< endl;
		cin >> triangle[i].baseT;
		cout << "for area enter a height for triangle ["<< i << "] :"<< endl;
		cin >> triangle[i].heightT;
		triangle[i].perimeterT = ( triangle[i].lengthT1 + triangle[i].lengthT2 + triangle[i].baseT );
		triangle[i].areaT = ( (triangle[i].heightT * triangle[i].baseT) / 2 );
	}
}
void printTriangle(Triangle& a)
{
	for (int i=0; i<MAX_TRI; i++) {
		cout << "triangle ["<< i << "]"<< " has area: "
	         << triangle[i].areaT << endl;
		cout << "triangle ["<< i << "]"<< " has perimeter: "
			 << triangle[i].perimeterT << endl;
	}
}
/*NOTE: A Full Circle*/
Circle variablesCircle(Circle& r)
{
	for (int i=0; i<MAX_CIR; i++) {
		cout << "enter a radius for circle ["<< i << "] :"<< endl;
		cin >> circle[i].radiusC;
		circle[i].areaC = ( PI*(circle[i].radiusC * circle[i].radiusC) );
		circle[i].perimeterC = 2 * PI * circle[i].radiusC;
	}
}
void printCircle (Circle& a)
{
	for (int i=0; i<MAX_CIR; i++) {
		cout << "circle ["<< i << "]"<< " has area: "
	         << circle[i].areaC << endl;
		cout << "circle ["<< i << "]"<< " has perimeter: "
			 << circle[i].perimeterC << endl;
	}
}
/* Herons Formula   **NOTE AREA OF AN OBLIQUE TRIANGLE */
/* THIS MAY BE USED IN REPLACE OF TRAPEZOID if the triangles are not acute*/
ObliqueTriangle variablesOblique(ObliqueTriangle& aa, ObliqueTriangle& bb, ObliqueTriangle& cc)
{
	int i;
	char answer;
	cout << "do you have any oblique trinagles ?";
	cin >> answer;
	//use this function for struct ObliqueTriangles
	while (answer == 'y') {
		for (i=0; i<MAX_TRI_OBL; i++) {
			cout << "enter side1 for oblique triangle ["<< i << "] :"<< endl;
			cin >> triangleO[i].side1H;
			cout << "enter side2 for oblique triangle ["<< i << "] :"<< endl;
			cin >> triangleO[i].side2H;
			cout << "enter side3 for oblique triangle ["<< i << "] :"<< endl;
			cin >> triangleO[i].side3H;
			//Check if oblique
			double checkShape = ( 0.5 * (triangleO[i].side1H + triangleO[i].side2H + triangleO[i].side3H) );
			  if (checkShape < 0)
				  cout << "There is no oblique triangle, maybe its acute" << endl;
			  else {
				  triangleO[i].areaH = sqrt( (checkShape * ((checkShape-triangleO[i].side1H) * (checkShape-triangleO[i].side2H) * (checkShape-triangleO[i].side3H)) ) );
				  triangleO[i].perimeterH = (triangleO[i].side1H + triangleO[i].side2H + triangleO[i].side3H);
			  }
		}
	}
}
void printOblique(ObliqueTriangle& a)
{
	for (int i=0; i<MAX_CIR; i++) {
		cout << "oblique triangle ["<< i << "]"<< " has area: "
	         << triangleO[i].areaH << endl;
		cout << "oblique triangle ["<< i << "]"<< " has perimeter: "
			 << triangleO[i].perimeterH << endl;
	}
}
/*Prints data gathered from command line to designated text file*/
void fileoutArrays(double& totalArea, double& totalPerm)
{
    ofstream outfile;
    outfile.open(FILEOUT); /*input .txt*/
    if(outfile.fail() )
    {
    	cout <<"** File Failed ** \n";
        exit(1);
    }
	outfile << "THIS FILE CONTAINS DATA FROM PROGRAM Area_Perimeter_Advanced.cpp \n";
    for (int i=0; i<MAX_RECTAN; i++) {
		outfile << "rectangle ["<< i << "]"<< " has area: "
                << rectangle[i].areaR << endl;
		outfile << "rectangle ["<< i << "]"<< " has perimeter: "
		        << rectangle[i].perimeterR << endl;
    }
	for (int i=0; i<MAX_TRI; i++) {
		outfile << "triangle ["<< i << "]"<< " has area: "
	            << triangle[i].areaT << endl;
		outfile << "triangle ["<< i << "]"<< " has perimeter: "
			    << triangle[i].perimeterT << endl;
	}
	for (int i=0; i<MAX_CIR; i++) {
		outfile << "circle ["<< i << "]"<< " has area: "
	            << circle[i].areaC << endl;
		outfile << "circle ["<< i << "]"<< " has perimeter: "
			    << circle[i].perimeterC << endl;
	}
	for (int i=0; i<MAX_CIR; i++) {
		outfile << "oblique triangle ["<< i << "]"<< " has area: "
	            << triangleO[i].areaH << endl;
		outfile << "oblique triangle ["<< i << "]"<< " has perimeter: "
			    << triangleO[i].perimeterH << endl;
	}
	outfile << "\n\nTOTALS FOR A COMPLEX SHAPES\n"
			<< "Total AREA for the shape is: "<< totalArea << endl
			<< "Total PERIMETER for the shape is: "<< totalPerm;
	outfile.close();
}
