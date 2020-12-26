#include <iostream>

using namespace std;

template <class T>

unsigned int Countsetbits(T number , unsigned int bis_size)
{
	unsigned int bitcount = 0;
	for (int i = 0; i < bis_size; i++)
	{
		if (number>>i & 1)
		{
			bitcount++;
		}
	}
	return bitcount;
}

int main242()
{

	cout << Countsetbits(2, 8) << endl;
	
	getchar();
	
	return 0;
}