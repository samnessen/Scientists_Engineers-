/************************************************
 	File streams as objects

	program creates a file
	user writes data to that file

	Program can count vowels in the file
*************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib> /*exit stratigies*/
#include <fstream>
using namespace std;
/*Prototype*/
void getText (ofstream&, string& fname);
void countVowel(string& line);

int main()
{
    string filename = "data.txt";
    ofstream outfile;
    outfile.open(filename.c_str()); //convert the string that is filename then open that file
    if (outfile.fail())
    {
        cout <<" ** Failed File ** " << endl;
        exit (1);
    }
    getText(outfile, filename); //write some stuff in the file
    outfile.close();
    return 0;
}
/*Definition*/
//user inputs data into a file
void getText(ofstream& fileout, string& fname)
{
    string line;
    cout <<" Enter your text. Press enter when done\n"<< endl;
    getline(cin, line);
    cout <<" The text you have entered is:  " << line << endl;
    countVowel(line);
    fileout << line << endl;
    cout <<"Your text was created in:  " << fname << endl;
}
//vowel counting in a file
void countVowel(string& line)
{
	int numVowl =0;
	int stringsize= int(line.length());
	for (int i=0; i<stringsize; i++)
	{
		switch(line.at(i))
		{
        	case 'a':
        	case 'e':
        	case 'i':
        	case 'o':
        	case 'u':
        numVowl++;
		}
	} cout <<"\nNumber of vowels are: "<< numVowl <<endl;
}
