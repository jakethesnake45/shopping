#include"ItemFreq.h"
#include<iostream>
#include<iomanip>
using namespace std; 

void ItemFreq::addItem(string item)
{
	int index = indexOfItem(item);
	if (index != -1)
	{
		// item already exsits
		frequencies[index]++;
	}
	else
	{
		//new item
		items.push_back(item);
		frequencies.push_back(1);
	}
}
void ItemFreq::printFreq() const
{
	for (int i = 0; i < items.size(); i++)
	{
		cout << setw(12) << items[i] << setw(8) << frequencies[i] << endl;
	}
}
int ItemFreq::indexOfItem(string item) const
{
	int resultIndex = -1;
	for (int i = 0; i < items.size(); i++)
	{
		if (item == items.at(i))
		{
			resultIndex = i;
			break;
		}
	}

	return resultIndex;
}
