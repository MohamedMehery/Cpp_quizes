#include <iostream>
#include <string>

using namespace std;

class Permutation
{
public:
	string Swap(string st, int i, int j)
	{
		char temp;
		temp = st[i];
		st[i] = st[j];
		st[j] = temp;
		return st;
	}

	void calculate(string st, int left, int right)
	{
		
		if (right == left)
		{
			cout << st << endl;
		}
		else
		{
			for (int i = left; i <= right; i++)
			{
				string swaped = Swap(st, left, i);
				calculate(swaped, left + 1, right);
			}
		}
	}


};

int main()
{
	Permutation *p = new Permutation;
	string st = "0123456789";
	p->calculate(st, 0, st.length()-1);

	delete p;
	getchar();
	return 0;
}