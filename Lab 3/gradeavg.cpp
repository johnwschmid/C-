// JOHN SCHMID

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
	float a,b,c;
	float gradeAvg;

	cout << setprecision(2) << fixed;

	cout << "Please input the first grade" << endl;

	cin  >> a;

	cout << "Please input the second grade" << endl;

	cin  >> b;

	cout << "Please input the third grade" << endl;

	cin  >> c;

	gradeAvg = (a+b+c) / 3;

	cout << endl;
	cout << "The average of the three grades is " << gradeAvg << endl;

	return 0;
}

/*
	My algorithm is as follows:

	1) Input the grades
	2) Find the average
	3) Add up the three grades
	4) Divide that by the number of grades, which is 3
	5) Output the grade average
*/
