#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <iterator>

using namespace std;

vector<string> split_string(string);

// Complete the triplets function below.
long triplets(vector<int> a, vector<int> b, vector<int> c) {

	long num_triples = 0;


	return num_triples;
}

class Base {
	int x;
public:
	Base() { cout << "base" << endl ; }
	Base(int x) :x(x) { ; }
	friend void func(Base & object);	
};

class Driven: public Base {
public:
	Driven() 
	{
		cout << " Driven " << endl;
	}
};

void func(Base & object)
{

	cout << object.x << endl;

}

void sorting_alg(int * arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int temp;
		for (int j = 0; j < size - i -1 ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				
			}
			

		}
	}
}

int main()
{
	Base b1(3);
	func(b1);
	Driven d1;

	int arr[5] = { 3 ,4, 2, 1, 5 };
	sorting_alg(arr, 5);

	getchar();
	return 0;
}

vector<string> split_string(string input_string) {
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
		return x == y && x == ' ';
	});

	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ') {
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}
