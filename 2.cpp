#include <iostream> 
 
using namespace std; 
 
int main()
{
	int a, b, c;
	cin >> a >>b >>c;
	a *= 3600;
	b *= 60;
	int sum = a + b+ c;
	cout << sum << "s";
	return 0; 
}
