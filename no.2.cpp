#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
	double waterPrice, litersUsed, latePay, latePrice, pricing, gallon;
	waterPrice = 35;
	latePrice = 20;
	cout << " How much water did you consumed this month? "<< endl;
	cin >> gallon; 
	cout << " Unattended payment " << endl;
	cin>> latePay;
	if (latePay >0)
	{
		litersUsed = gallon * 1.10;
		pricing = waterPrice + litersUsed + latePrice+ latePay;
		cout << " Water bill: " << pricing << endl;
	}
	else 
	{
		litersUsed = gallon * 1.10;
		pricing = (waterPrice + litersUsed); 
		cout << " Total Water Bill: " << pricing << endl;
		
	}
_getch();
return 0;
}
