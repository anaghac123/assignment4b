#include<iostream>
using namespace std;
void printnumber(int num1,int num2){
     if (num2>=num1){
      cout<<num1<<" ";
     printnumber(num1+2,num2);
     }
    }
int main()
 { int num1,num2;
   cout<<"enter lower limit";
   cin>>num1;
   cout<<"enter upper limit";
   cin>>num2;
   printnumber(num1,num2);
   return 0;
 } 
