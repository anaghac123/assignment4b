#include<iostream>
using namespace std;
void reverse(int n)
{ 
   if (n/10!=0){
       cout<<n%10;
       reverse(n/10);
   
     }
   else
      cout<<n;
    }
int main()
 { int number;
   cout<<"enter number";
   cin>>number;
   reverse(number);
   return 0;
 }  
