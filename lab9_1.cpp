#include <iostream>
#include <iomanip> //For using setw(), setprecision(), ...
using namespace std;
double intial;
double interestrate;
double yearpay;

int main()
{
	cout << "Enter initial loan: ";
	cin >> intial;
	cout << "Enter interest rate per year (%): ";
	cin >> interestrate;
	cout << "Enter amount you can pay per year: ";
	cin >> yearpay;

	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance";
	cout << setw(13) << left << "Interest";
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	cout << fixed << setprecision(2);
	int year = 1;
	double prevbalance = intial;
	while (prevbalance > 0)
	{
		double interest = prevbalance * (interestrate / 100);
		double total = prevbalance + interest;

		double payment;
		if (total <= yearpay)
		{
			payment = total;
		}
		else
		{
			payment = yearpay;
		}
		double Newbalance= total-payment;
	

	cout << setw(13) << left << year;
	cout << setw(13) << left << prevbalance;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << Newbalance;
	cout << "\n";
	prevbalance=Newbalance;
	year++;
	}

	return 0;
}
