/**************************************************
 *	Program Creates a file to list out car parts  *
 **************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string> // string class
using namespace std;

int main()
{
    string filename;
    cout << " Enter the name of your file ";
    cin >> filename;
    ofstream outfile;
    outfile.open(filename.c_str());
    if (outfile.fail())
    {
        cout << "** File Error **";
        exit (1);
    }
    outfile <<" Car Number    Miles Driven      Gallon Gas Used" << endl;
    outfile <<" 54            250               19             " << endl
            <<" 62            525               38             " << endl;
    outfile.close();
    return 0;
}
