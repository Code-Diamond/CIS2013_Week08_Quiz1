#include <iostream>
#include <math.h>
using namespace std;
int change;
int quartersV = 25;
int dimesV = 10;
int nickelsV = 5;
int penniesV = 1;


void findQ()
{
	int numberOfQuarters = change / quartersV;

	cout << "Quarters: " << numberOfQuarters << endl;
	change -= numberOfQuarters * quartersV;
}

void findD()
{
	int numberOfDimes = change / dimesV;

	cout << "Dimes: " << numberOfDimes << endl;
	change -= numberOfDimes * dimesV;
}

void findN()
{
	int numberOfNickels = change / nickelsV;

	cout << "Nickels: " << numberOfNickels << endl;
	change -= numberOfNickels * nickelsV;
}

void findP()
{
	int numberOfPennies = change / penniesV;

	cout << "Pennies: " << numberOfPennies << endl;
	change -= numberOfPennies * penniesV;
}

void init()
{
	cout << "Enter a number of cents."; 	cin >> change;
	findQ(); 	findD();	findN();	findP();

}


int main()
{
	init();
	return 0;
}
