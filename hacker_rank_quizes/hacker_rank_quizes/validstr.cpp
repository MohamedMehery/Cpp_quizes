#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isValid(string s)
{
	int maxfreq = 1;
	int minfreq = 1;
	int count = 0;
	int oldfreq = 1;
	sort(s.begin(), s.end());
	for (int i = 0; i < s.length() - 1; i++)
	{
		if (s[i] == s[i + 1])
		{
			oldfreq++;
			if (oldfreq > maxfreq)
			{
				maxfreq = minfreq;
				count++;
			}
			else if (oldfreq < minfreq)
			{
				minfreq = oldfreq;
				count++;
			}
		}
		else
		{
			oldfreq = 1;
		}
	}
	if ((maxfreq - minfreq > 1) || count > 2)return "NO";

	return "YES";
}

int main()
{
	string s;
	cout << "\tEnter the test string!" << endl;
	cin >> s;

	string result = isValid(s);

	cout << "\t" << result << endl;
	cin >> s;
	return 0;
}
