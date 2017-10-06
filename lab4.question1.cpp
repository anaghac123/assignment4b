#include<iostream>
using namespace std;
int power(int x, int n)
{  int p;
   if (n==0)
    p=1;
    
   else
     p=x*power(x,n-1);
     
   return p;
}
 int main()
{
  int x,n,p;
  cout<<"enter a number";
  cin>>x;
  cout<<"enter the power to which the number is to be raised";
  cin>>n;
  cout<<"the power is "<<power(x,n);
}
