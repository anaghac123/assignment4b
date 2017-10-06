#include<iostream>
using namespace std;
void print(int i,int n)
{
	if(i==n)
	{
		cout<<i;
	}
	else
	{
		cout<<i<<" ";
		print(i+1,n);
	}
    
}
int main()
{
int x,y;
cout<<"number "<<endl;
cin>> x;
y=1;
print(y,x);
return 0;
}
