//sum of digit
#include<iostream>

using namespace std;

int main()

{
	int num;
	
	cout<<"Enter a number	";
	cin>>num;
	
	int sum=0;
	for(;num>0;num/=10)
	{
		sum+=num%10;
	}
	
	cout<<"Sum of digit is :	"<<sum;
 return 0;}
