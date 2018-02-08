/*************************************
 ****	Program runs 2D- ARRAY	  ****
 ****	Displays the array		  ****
 ****	Finds maximum number 	  ****
 ****	Finds Average of each row ****
 ************************************/

#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 4; /* rows */
const int COLMS = 5;  /* columns */
const int NUMBER_OF =( ROWS*COLMS ); /* display number of elements */

/* Function Prototype */
void display(int [ROWS][COLMS] );
void findMax(int [ROWS][COLMS] );
void findAvgRow(int array[ROWS][COLMS]);

int main()
{
    int array[ROWS][COLMS] = { 16,  22, 99,  4, 18,
                              -258, 4,  101, 5, 98,
                               105, 6,  15, 2,  45,
                               33,  88, 72, 16, 3  };
    cout << NUMBER_OF <<" Elements of the array are:\n";
    display(array);
    cout << endl;
    findMax(array);
    findAvgRow(array);
    return 0;
}

/* Function Definition */
void display(int array[ROWS][COLMS])
{
       for (int i=0; i<ROWS; i++) //count rows
       {
    	   for (int j=0; j<COLMS; j++) //count colms
    		   cout << "\t" << setw(2) << left << array[i][j];
               cout << endl;
        }
}
void findMax(int array[ROWS][COLMS])
{
	int max = array[0][0];
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLMS; j++)
        	if (array[i][j] > max)
        	max = array[i][j];
    }
    cout << "Maximum value of the array is: \n" << max << endl;
}
void findAvgRow(int array[ROWS][COLMS])
{
    double average = 0;
    double total = 0;
	for (int i = 0; i < ROWS; i++) {
		cout << " Row " << i + 1 << ":  ";
		for (int j = 0; j < COLMS; j++) {
			cout << array[i][j] << "  ";
		    total += array[i][j];
		}
		average = total / COLMS;
		cout << setprecision(4)<<" Average: " << average << endl;

		total = 0;
		average = 0;
	}
}
