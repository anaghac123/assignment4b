#include<iostream>
using namespace std;
int sum(int n,int m)
{   
    if (n==m) {
               return m;
              }
   else  { 
         return n+sum(n-2,m);
         }  
}
 int main()
{
  int x,y;
  cout<<"enter a maximum number";
  cin>>x;
  cout<<"enter a minimum number";
  cin>>y;
  cout<<"the sum is "<<sum(x,y);
  return 0;
}
