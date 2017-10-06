#include<iostream>
using namespace std;
int sum(int n)
{  int p;
   if (n/10!=0){
      p=n%10;
     return p+sum(n/10);
     }
   else {
     return n;
    }
}
int main()
 { int number;
   cout<<"enter number";
   cin>>number;
   cout<<"sum of the digits of the number="<<sum(number);
  return 0;
 }
