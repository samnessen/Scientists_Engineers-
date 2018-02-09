/***********************************
* Conversions for 				   *
* 								   *
* Celsius, Farhenheit, & Kelvin    *
************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/* Function Prototype*/
double Celsius_TO_Farhenheit(double inCelsius);
double Farhenheit_TO_Celsius(double inFarhenheit);
static void Kelvin_ConvertTO(double tempValue, char tempUnit);

int main()
{
    char tempUnit, kelvin;
    double tempValue;

    cout << " Program is a conversion of temperature units for fahrenheit, celsius, & kelvin\n (**note: precision is at 'type <double>')\n";
    cout << "enter f or c to define current temperature unit \n";
    cin >> tempUnit;
    cout << "Enter value in degrees: \n";
    cin >> tempValue;

    if (tempUnit == 'f') {
    	Farhenheit_TO_Celsius(tempValue);
    } else if (tempUnit == 'c') {
    	Celsius_TO_Farhenheit(tempValue);
	} else {cout << "wrong unit value";}

    /* conversion to kelvin */
    cout <<"would you like to convert to Kelvin,   yes or no\n   y or n ";
    cin >> kelvin;
    if (kelvin != 'n') {
    	Kelvin_ConvertTO(tempValue, tempUnit);
    } else
    	cout << "good bye";

    return 0;
}

/* Function declerations */
double Farhenheit_TO_Celsius(double inFarhenheit)
{
	double celsius = (9.0 / 5.0) * inFarhenheit + 32.0;
    cout << "\n Fahrenheit -> Celsius is: " << celsius << " degrees \n" << endl;
	return celsius;
}
double Celsius_TO_Farhenheit(double inCelsius)
{
	double farhenheit = (5.0 / 9.0) * inCelsius + 32.0;
    cout << "\n Celsius -> Farhenheit is: " << farhenheit << " degrees \n" << endl;
	return farhenheit;
}
/* Kelvin conversion that identifies if the unit is celsius or farhenheit */
/* if farhenheit is identified will first convert Farhenheit -> Celsius    */
static void Kelvin_ConvertTO(double tempValue, char tempUnit)
{
	double kelvinValue;
	if (tempUnit == 'c') {
	    	kelvinValue = tempValue + 273.15;
	    	cout << " Celsius -> Kelvin is: " << kelvinValue << " K";
	} else if (tempUnit == 'f') {
	    	double celsius = Farhenheit_TO_Celsius(tempValue);
			kelvinValue = celsius + 273.15;
	    	cout << " Celsius -> Kelvin is: " << kelvinValue << " K";
	} else
	    	cout << "ERROR - wrong use of function \n";
}




