//Swapping two number 
#include<iostream>

using namespace std;

int main()

{
	int a, b;
	cout<<"Enter first integer a  ";
	cin>>a;
	cout<<"Enter second integer b  ";
	cin>>b;
	
	int c=a;
		a=b;
		b=c;
	
	cout<<"After swapping value are a and b respectively	"<<a<<"\t"<<b;	
 return 0;}
