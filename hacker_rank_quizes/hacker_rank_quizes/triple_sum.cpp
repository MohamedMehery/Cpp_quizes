#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <stdio.h>

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

void pascal_tri(void)
{
	int rows, cal = 1, space, i, j;

	printf("Enter number of rows: ");//enter number of rows for generating the pascal triangle
	cin >> rows;

	for (i = 0; i < rows; i++)            // outer loop for displaying rows
	{
		for (space = 1; space <= rows - i; space++) // space for every row starting
			printf("  ");

		for (j = 0; j < i; j++)     // inner loop for displaying the pascal triangle of numbers
		{
			if (j == 0 || i == 0)     // either outer loop value or inner-loop value is "0 " it prints 1
				cal = 1;
			else
				cal = cal * (i - j + 1) / j;  //calculate the coefficient

			printf("%4d", cal);
		}
		printf("\n");
	}

}

int main()
{
	Base b1(3);
	func(b1);
	Driven d1;
	pascal_tri();
	while (1);
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
