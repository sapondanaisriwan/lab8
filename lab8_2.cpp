#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//[Missing Code 1] Write definition of the function findGrade() here.

char findGrade(double score)
{
	char result = ' ';
	if (score > 90)
	{
		result = 'A';
	}
	else if (score > 75 && score <= 90)
	{
		result = 'B';
	}
	else if (score > 60 && score <= 75)
	{
		result = 'C';
	}
	else if (score > 45 && score <= 60)
	{
		result = 'D';
	}
	else if (score <= 45)
	{
		result = 'F';
	}
	return result;
}

int main()
{
	// Input the number of students
	int N, i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];

	// Store names and scores of students into an array
	while (i < N)
	{
		cout << "Name of student " << i + 1 << ": ";
		cin.ignore();
		getline(cin, name[i]);

		//[Missing Code 2] Get name of the i-th students that may include whitespace.
		cout << "Score of student " << i + 1 << ": ";
		cin >> score[i];

		//[Missing Code 3] Get score of the i-th students.
		i++;
	}

	// Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while (i < N)
	{
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	}
	cout << "---------------------------------------------\n";

	return 0;
}