/*****************************
 *	Program Adds & Subtracts *
 *	Using Two Arrays		 *
 *****************************/

#include <iostream>
#include <iomanip>
using namespace std;

const int NUMROWS = 3;
const int NUMCOLS = 2;
/* Prototype */
void addMatrix(int[NUMROWS][NUMCOLS], int[NUMROWS][NUMCOLS]);
void subtractMatrix(int x[NUMROWS][NUMCOLS], int y[NUMROWS][NUMCOLS]);

int main()
{
    int alpha[NUMROWS][NUMCOLS] = { 3, 2,
                               	    3, 4,
								    1, 2 };
    int beta[NUMROWS][NUMCOLS]  = { 6, 2,
                                    1, 4,
                                    6, 2 };
    cout << "Element addition in two arrays\n";
    addMatrix(alpha, beta);
    cout << endl;
    cout << "Element subtraction in two arrays\n";
    subtractMatrix(alpha, beta);
    return 0;
}

void addMatrix(int x[NUMROWS][NUMCOLS], int y[NUMROWS][NUMCOLS]) // header
{
    for (int i=0; i<NUMROWS; i++)
    {
        cout << "Row " << i + 1 << ": ";
    	for (int j=0; j<NUMCOLS; j++)
            cout << setw(5) << x[i][j] + y[i][j];
            cout << endl;
    }
}
void subtractMatrix(int x[NUMROWS][NUMCOLS], int y[NUMROWS][NUMCOLS]) // header
{
    for (int i=0; i<NUMROWS; i++)
    {
        cout << "Row " << i + 1 << ": ";
    	for (int j=0; j<NUMCOLS; j++)
            cout << setw(5) << x[i][j] - y[i][j];
            cout << endl;
    }
}
