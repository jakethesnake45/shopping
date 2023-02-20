#include<iostream>
#include<string>
#include<fstream>
#include "ItemFreq.h"
using namespace std;

int main()
{
	ItemFreq itemfreq;
	ifstream infile;
	string tempname;

	infile.open("Shopping.txt");

	if (!infile)
	{
		cout << "Error opening file... bailing out..." << endl;
	}
	while (!infile.eof())
	{
		infile >> tempname;
		itemfreq.addItem(tempname);
	}
	itemfreq.printFreq();
	
	infile.close();

	return 0;
}