/**********************************************************
      Solves for the roots of a quadratic equation
               
               Form:    ax + bx + c = 0
               Answer in floating point
			   Includes Imaginary numbers
************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, discriminant, root1, root2;

    cout << "This program calculates the root(s) of a\n"
         << "quadratic equation of the form\n"
         << "\tax + bx + c = 0\n" << endl;

    cout << "Enter values for a, b, and c: \n\n";
    cin  >> a >> b >> c;
    cout << endl;
    discriminant = ( pow(b,2.0) - (4*a*c) );

    if (a == 0.0 && b == 0.0)
          cout << "  The equation is degenerate and has no roots. \n";
        else if (a == 0.0)
        {    cout << "The equation has a single root \n"
                 << "  x = "
                 << ( -c/b ) << endl;//(ax+bx+c)=0  =>  bx = -c  so,  x = (-c/b)
        }
        else          
    discriminant = ( pow(b, 2.0) - ( 4 * a * c) ); 
    if (discriminant > 0.0)
            {
            root1 = (-b + discriminant) / (2 * a);
            root2 = (-b - discriminant) / (2 * a);
            cout << "The two real roots are "
                 << root1 << " & " << root2 << endl;
            }
        else if (discriminant < 0.0)
            {
            double imaginary = sqrt( -discriminant) / (2 * a);
            cout << "Roots are complex \n"
                 << "  x = " << ( -b / (2 * a) )<< "+" << imaginary << "i" << endl
                 << "  x = " << ( -b / (2 * a) )<< "-" << imaginary << "i" << endl;
            cout << "\n**NOTE results may not be in a simplified form \n";
            }
        else
        {
        cout << "Both roots are equal to "
             << ( -b / (2 * a) )
             << endl;
        }


    return 0;
}



