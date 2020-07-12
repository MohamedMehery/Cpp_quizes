#include <iostream>

using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int i, j,k, num_of_inputs, num_of_queries;
	int arr_size;
	cin >> num_of_inputs;
	cin >> num_of_queries;
	int ** array_input = nullptr;	//uninit local varialbe problem solved
	int ** queries_input = nullptr;
	/*int* A = new int[M * N]; // to dynamically allocat 2D matrix in C++*/
	array_input = new int*[num_of_inputs];
	queries_input = new int*[num_of_queries];

	for (i = 0; i < num_of_inputs; i++)
	{
		cin >> arr_size;
		array_input[i] = new int[arr_size];
		for (j = 0; j < arr_size; j++)
		{
			cin >> array_input[i][j];
		}
	}

	for (i = 0; i < num_of_queries; i++)
	{
		queries_input[i] = new int[2];
		for (j = 0; j < 2; j++)
		{
			cin >> queries_input[i][j];
		}
	}
	for (k = 0; k < num_of_queries; k++)
	{
		cout << array_input[queries_input[k][0]][queries_input[k][1]]<<endl;
	}


	delete[] array_input;
	delete[] queries_input;
	while (1);
	return 0;
}