#include <iostream> 
 
using namespace std; 
 
int main() 
{
	int sum= 0, n, exit{};
	cout<<"adad ra vard konid :";
	cin>> n;
	while(n != exit)
	{
	
		sum = sum+ n;
		cin >> n;
	}
	cout << "sum="<< sum;
	
	return 0;
}
