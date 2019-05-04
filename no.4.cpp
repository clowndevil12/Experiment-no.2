#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	float num1, num2, num3;
	
	cout << " Please enter the first number " << endl;
	cin >> num1;
	
	cout << " Please enter the second number "<< endl;
	cin >> num2;
	
	cout << " Please enter  the third number " << endl;
	cin >> num3;
	
	if (num1>num3 && num1>num2)
	cout << num1 << " is the largest number" << endl;
	
	else if (num2>num1 && num2>num3)
	cout << num2 << " is the largest number" << endl;
	
	else if (num3>num1 && num3>num2)
	cout << c << " is the largest number" << endl;
	
	else if (num1==num2 && num2==num3 && num1==num3)
	cout << " The numbers entered are equal " << endl;
	
	else
	cout << " Make a correct input " << endl;
	
	_getch();
	return 0;
}
