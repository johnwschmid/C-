// JOHN SCHMID

#include <iostream>
using namespace std;


const int AT_BAT = 421;
const int HITS = 123;

int main()
{
	float batAvg;

	batAvg = static_cast<float>(HITS)/AT_BAT;		//an assignment statement
	cout << "The batting average is " << batAvg << endl;    //output the result

	return 0;
}

/* 

		Exercise 1: "The batting average is 0"

		Exercise 2: The answer is still 0

		Exercise 3: Typecasting the batAvgg operation solved the problem.

*/
