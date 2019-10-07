#include<iostream>
#include<string>

using namespace std;

int main()
{
	double budget = 0;
	int nights = 0;
	double prise = 0;
	double percent = 0;
	cin >> budget >> nights >> prise >> percent;
	double sum = 0;

	if (nights > 7)
	{
		sum = (prise - prise * 0.05) * nights;
	}
	else if (nights <= 7)
	{
		sum = nights * prise;
	}
	double finalSum = percent * 0.01 * budget;
	double total = sum + finalSum;
	

	cout.setf(ios::fixed);
	cout.precision(2);
	if (total <= budget)
	{
		cout << "Ivanovi will be left with " << budget - total << " leva after vacation." << endl;
	}
	else
	{
		cout << total - budget << " leva needed. " << endl;
	}
	system("pause");
	return 0;
}