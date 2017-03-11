#include <iostream> 
using namespace std;

int main() 
{
	int numTellers;
	float numSickdays, total;
	int teller,year = 0;

	cout << "How many tellers worked at Nation's Bank during each of the last three years?\n";
	cin  >> numTellers;
	cout << endl;

	for(teller = 1; teller <= numTellers; teller++)
	{
	total = 0;

		for(year = 1; year <= 3; year++)
		{
		cout << "How many days was teller " << teller << " sick during year " << year << "?\n";
		cin  >> numSickdays;
		total = total + numSickdays;
		}

	}

	cout << endl << "The " << numTellers << " tellers were out sick for a total of "
        << total << " days during the past 3 years." << endl << endl;
	return 0;
}
