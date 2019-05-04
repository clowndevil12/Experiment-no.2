#include<conio.h>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	float hours, bill1, bill2;
	int j;
	
	cout << " Please pick a choice according to your subscription " << endl;
	cout << "1 for A, 2 for B, 3 for C" << endl;
	cin >> j;
	cout << " How many hours? " << endl;
	cin >> Hour;
	bill1 = ( hours * 20 ) + 995; 
	bill2 = ( hours * 10) + 1495;
	
	
	{
	if (j==1)
	cout << bill1 <<"/"<<"month" << endl;
	else if (j==2)
	cout << bill2 <<"/"<<"month" << endl;
	else if (j==3)
	cout << "1995/month, no fees for extra" << endl;
	else
	cout << " Invalid " << endl;
	_getch();
	return 0;
	}
}
