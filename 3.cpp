#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
    int sum, a, b, c;
    cin >> sum; 
 
    a= sum/ 3600; 
    sum = sum % 3600; 
    b = sum / 60; 
    c = sum % 60; 
 
    cout << a << ":" << b << ":" << c; 
 
    return 0; 
}
