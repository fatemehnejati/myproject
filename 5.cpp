#include <iostream> 
#include <random> 
 
using namespace std; 
 
int main() 
{ 
	srand(time(0));
	int a = rand() % 6+1;
	cout << a;
	while(a == 6)
	{
		a = rand() %6 +1;
		cout << a;
	} 
    return 0; 
}
