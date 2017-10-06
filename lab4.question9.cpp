#include<iostream>
using namespace std;
int factorial(int n){
     if (n==1)
       return n;
     else
     return n*factorial(n-1);
     
    }
int main()
 { int number;
   cout<<"enter number";
   cin>>number;
   cout<<factorial(number);
 }  
