#ifndef ITEM_FREQ_H
#define ITEM_FREQ_H

#include <string>
#include <vector>
using namespace std;

class ItemFreq
{
public:
	
	void addItem(string item);
	void printFreq() const;

private:
	vector<string> items;
	vector<int> frequencies;
	int indexOfItem(string item) const;


};

#endif

