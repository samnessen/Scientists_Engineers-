/*********************************
 ****	   Grading Program	  ****
 ****      	  that does		  ****
 ****      Student Averages   ****
 ****  	   & Test Averages    ****
 *********************************/

#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 5;
const int COLMS = 6;

int main ()
{
    double total = 0;
    double average = 0.00;
    int grades[ROWS][COLMS] = { {70, 80,  73,  78,  75, 73}, // each row for each student and all that students grades
                                {85, 88,  90,  91,  87, 78},
                                {90, 93,  92,  65,  96, 74},
                                {60, 55,  58,  70,  63, 75},
                                {99, 99,  93,  90,  60, 76} };
    cout << "Student averages: \n";
    for (int student = 0; student < ROWS; student++) {
    	cout << " Student " << student + 1 << ":  ";
        for (int grade = 0; grade < COLMS; grade++) {
        	cout << grades[student][grade] << "   ";
        	total += grades[student][grade];
        }
        average = total / COLMS;
        cout << setprecision(4)<<" Average: " << average << endl;

        total = 0;
        average = 0;
    }
    cout << "\nTests averages for all students are: \n";
    for (int testDay = 0; testDay < ROWS; testDay++) {
    	cout << " Tests " << testDay + 1 << ": ";
        for (int studentTest = 0; studentTest < COLMS; studentTest++) {
        	cout << grades[testDay][studentTest] << "  ";
            total += grades[testDay][studentTest];
        }
        average = total / COLMS;
        cout << "   Average: " << average << endl;

        total = 0; //reset counter
        average = 0;
    }
    return 0;
}

