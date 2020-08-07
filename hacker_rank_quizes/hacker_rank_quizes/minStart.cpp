#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <random>

using namespace std;
/*
	There is a given array of integers. Start with some value x and add each of the array elements to it consecutively. That is, calculate a running sum of x plus each of the array elements. Determine the minimum value of x such that the running sum is always at least 1.
	**Examples: **
	arr= [-4, 3, 2, 1]
	If x = 5 the running sums are:
	5 + (-4) = 1
	1 + 3 = 4
	4 + 2 = 6
	6 + 1 = 7
	There is no smaller value for x that satisfies the condition.
	arr = [3, -6, 5, -2, 1]

	If the starting value is 4, running sums are [7,1,6,4,5]. This is the minimum starting value.

	**Function description: **
	Complete the minStart function in the editor below.

	minStart has the following parameters:
	int arr[n]: an array of integer to sum.

	**Return: **
	long: the minimum initial value
*/

long minStart(vector<int> arr)
{
	long x = 1 - arr[0]; long x_par = 0;
	vector<int>::iterator min_ptr; int min_indx;
	min_ptr = min_element(arr.begin(), arr.end());
	min_indx = min_ptr - arr.begin();
	x_par = 1 - arr[min_indx];
	for (int i = min_indx - 1; i >= 0; i--)
	{
		x = x_par - arr[i];
		x_par = x;
	}
	return x;
}


int recursion_square(int n)
{
	int square = 0;;
	if (n <= 1)
	{
		return 1;
	}
	square = recursion_square(n - 1);
	square += n + n - 1;
	return square;
}

int main()
{
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(-11, 10);

	vector<int>arr(6);
	for (int i = 0; i < 6; i++)
	{
		arr[i] = dist(mt);
		cout << arr[i] << "  ";
	}
	cout << endl;

	long min_start = minStart(arr);
	cout << min_start << endl;
	int n = 6;
	cout << "Recursion square number of " << n << " is " << recursion_square(n) << endl;
	while (1);
}



