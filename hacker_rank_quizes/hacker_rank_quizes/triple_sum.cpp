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
	Base() { ; }
	Base(int x) :x(x) { ; }
	friend void func(Base & object);	
};

void func(Base & object)
{

	cout << object.x << endl;

}

int main()
{
	Base b1(3);
	func(b1);
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
