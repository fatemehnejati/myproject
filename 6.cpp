#include <iostream> 

void fib(int n);
using namespace std; 
 
int main() 
{
  int n;
  cout << "adad fibo ra vard konid:";
  cin >> n;
  fib(n);
  return 0;
}
void fib(int n) 
{ 
    int a=1,b=1;
    int c; 
    cout<<a<<endl;
    cout<<b<<endl; 
    int i=2;
    while (i<n)
    { 
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
        i++;
    }
}
