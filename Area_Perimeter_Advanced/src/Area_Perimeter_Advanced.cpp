#include<iomanip>
#include<iostream>
#include<math.h>
#include<fstream>
#include<cstdlib>
using namespace std;

/*DEFAULT AMOUNT OF SHAPES*/
#define MAX_RECTAN 2
#define MAX_TRI 2

struct Rectangle {
	double lengthR;
	double widthR;
	double areaR;
	double perimeterR;
}rectangle[MAX_RECTAN];
/*
struct Triangle {
	double lengthT1;
	double lengthT2;
	double baseT;
	double heightT;
	double areaT;
	double perimeterT;
}triangle[MAX_TRI];

Function Prototypes*/
Rectangle variablesRectangle(Rectangle&, Rectangle&);
void printRectangle(Rectangle&);
//Triangle variablesTriangle(Triangle&, Triangle&, Triangle&, Triangle&);
//void printTriangle(Triangle&);

int main()
{
    ofstream outfile;
        outfile.open("geometry.txt");
        if(outfile.fail() )
        {
            cout <<"** File Failed ** \n";
            exit(1);
        }
	/*Variables for shapes*/
	Rectangle length, width, varRectangle;
	//Triangle base, height, length1, length2, varTriangle;

	varRectangle = variablesRectangle(length, width);
    printRectangle(varRectangle);
    //varTriangle = variablesTriangle(height, base, length1, length2);
    //printTriangle(varTriangle);

    /*Print To File*/
    outfile << "\t\tTESTER FILE SHOWS INPUTS & OUTPUTS FOR COMPLEX SHAPES\n\n";
	outfile << printRectangle(varRectangle);
    //outfile << printTriangle(varTriangle);

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
/*Print area & perimeter*/
void printRectangle(Rectangle& a)
{
	for (int i=0; i<MAX_RECTAN; i++) {
		cout << "rectangle ["<< i << "]"<< " has area: "
	         << rectangle[i].areaR << endl;
		cout << "rectangle ["<< i << "]"<< " has perimeter: "
			 << rectangle[i].perimeterR << endl;
	}
}
/*
Triangle variablesTriangle(Triangle& h, Triangle& b, Triangle& l1, Triangle& l2);
	for (int i=0; i<MAX_RECTAN; i++) {
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
*/
