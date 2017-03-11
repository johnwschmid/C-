// This program finds the average time spent programming by a student
// each day over a three day period.

// JOHN SCHMID

#include <iostream>
using namespace std;

int main()
{
	int numStudents, numDays;
	float numHours, numHoursBio, total, average, totalBio, averageBio;
	int student,day = 0;    		 // these are the counters for the loops

	cout << "This program will find the average number of hours a day" 
         << " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there?" << endl << endl;
	cin >> numStudents; 
	cout << "How many days were in the long weekend?\n\n";
	cin >> numDays;
       
    for(student = 1; student <= numStudents; student++)
	{
		total = 0;
		totalBio = 0;

		for(day = 1; day <= numDays; day++)
		{
		cout << "Please enter the number of hours spent programming by student " 
		     << student << " on day " << day << "." << endl;
		cin  >> numHours;
		cout << "Now enter the number of hours spent in biology by student "
                     << student << " on day " << day << "." << endl;
		cin  >> numHoursBio;

		totalBio = totalBio + numHoursBio;
	        total = total + numHours;
		}

	average = total / numDays;
	averageBio = totalBio / numDays;

	cout << endl;
	cout << "The average number of hours per day spent programming by "
	     << "student " << student << " is " << average
	     << endl << endl;
	cout << "The average number of hours per day spent in biology by "
             << "student " << student << " is " << averageBio
             << endl << endl << endl;

    if (average > averageBio)
	cout << "The student spent more time on programming.\n\n";
    else
	cout << "The student spent more time in Biology.\n\n";

	}

    return 0;	
}
