#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
	
    int x;
    int y;
	cout << "Enter the rows";
    cin >> x;
    cout << "Enter the columns";
    cin >> y;
    
    for (int row = 1; row <= x; ++row) 
    {
        for (int col = 1; col <= y; ++col) 
        {
            cout << " * ";
        }
        cout << endl;
    }
    _getch();
    return 0;
    
}
