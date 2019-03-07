//reverse printing
#include<iostream>

using namespace std;

int main()

{
	int num;
	cout<<"Enter a number	";
	cin>>num;
	
	for(;num>0;num/=10)
	{
		cout<<num%10;
	}
 return 0;}
