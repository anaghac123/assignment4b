#include<iostream>
using namespace std;
int hcf(int n,int m)
{   
    if (n%m==0) {
               return m;
              }
   else  { 
         return hcf(n,m-1);
         }  
}
 int main()
{
  int x,y;
  cout<<"enter a maximum number";
  cin>>x;
  cout<<"enter a minimum number";
  cin>>y;
  cout<<"the HCF is "<<hcf(x,y);
  return 0;
}
