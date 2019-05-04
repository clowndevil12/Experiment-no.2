#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int num1, num2;
	float V;

	cout << " Please enter 1st number " << endl;
	cin >> num1;
	
	cout << " Please enter 2nd number " << endl;
	cin >> num2;
	
	switch(num1)
	{
	
	case 1:
		if (num1==1 && 1<num2<5)
			V = num1 * num2 * 2.5;
			
		else if (num1==1 && num2>=5)
			V = num1 + num2/2.5;
			break;
		
	case 2:
		if (num1==2 && num2<=5)
			V = abs((num1 - num2) / 2.5);
			
		else if (num1==2 && num2>5)
			V = num1 - sqrt(num2 + 2.5);
			break;
			
	default:
		V = num1 + num2 + 2.5;
			break;
					
		}
		cout << setw(10);
		cout << fixed;
		cout << setprecision(2);
		cout << V;
		
		_getch();
		return 0;
		}
