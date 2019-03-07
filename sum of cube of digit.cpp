//sum of cube of digit
#include<iostream>
#include<cmath>
using namespace std;

int main()

{
	int num;
	cout<<"Enter a number	";
	cin>>num;
	
	int sum;
	sum==0;
	
	for(;num>0;num/=10)
	{
		sum+=pow(num%10,3);
	}
	cout<<"Sum of digit is :	"<<sum;
 return 0;}
