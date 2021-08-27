#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student {
public:
	Student() 
	{
		for (int i = 0; i < 5; i++) 
		{
			scores[i] = 0;
		}
	}
	void input()
	{
		for (int i = 0; i < 5; i++)
		{
			cin >> scores[i];
			if (scores[i] > 50)scores[i] -= 50;
		}
	}
	int calculateTotalScore()
	{
		int totalscore = 0;
		for (int i = 0; i < 5; i++)
		{
			totalscore += scores[i];
		}
		return totalscore;
	}

private:
	int scores[5];
};
int main34342() {
	int n; // number of students
	cin >> n;
	Student *s = new Student[n]; // an array of n students

	for (int i = 0; i < n; i++) {
		s[i].input();
	}

	// calculate kristen's score
	int kristen_score = s[0].calculateTotalScore();

	// determine how many students scored higher than kristen
	int count = 0;
	for (int i = 1; i < n; i++) {
		int total = s[i].calculateTotalScore();
		if (total >= kristen_score) {
			count++;
		}
	}

	// print result
	cout << count;

	return 0;
}
