#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, i=2, u=3, nextnumber;
    cout << "The next numbers of the Fibonacci is" << endl;
    num=20;
    
    for(int x=0;x<i;x++)
    {
    	cout<<i<<", ";
    	nextnumber=i+u;
    	i=u;
    	u=nextnumber;
	}
_getch();
return 0;
}
