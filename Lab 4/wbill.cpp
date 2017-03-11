#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{

	float wBill1,wBill2,wBill3,wBill4,avgBill;

	cout << setprecision(2) << showpoint << fixed;
	
	cout << "Please input your water bill for quarter 1:" << endl;
	cin  >> wBill1;

	cout << "Please input your water bill for quarter 2:" << endl;
	cin  >> wBill2;

	cout << "Please input your water bill for quarter 3:" << endl;
	cin  >> wBill3;

	cout << "Please input your water bill for quarter 4:" << endl;
	cin  >> wBill4;

	avgBill = ((wBill1 + wBill2 + wBill3 + wBill4) / 12);

	if (avgBill > 75)
		cout << "Your average monthly bill is $" << avgBill << ". You are using excessive amounts of water" << endl;

	else if (avgBill > 25)
		cout << "Your average monthly bill is $" << avgBill << ". You are using a typical amount of water" << endl;

	else
		cout << "Your average monthly bill is $" << avgBill << ". YOU CONSERVED THE SHIT OUT OF THAT WATER - NICE BRO!!" << endl;

return 0;
}
	
