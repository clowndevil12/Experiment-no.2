#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float num;

    cout << "Enter number" << endl;
    cin >> num;
	for (float j = 1; j <= 10; ++j) 
	{
	cout << num << " * " << j << " = " << num * j << endl;
    }
    
    _getch();
    return 0;
}
