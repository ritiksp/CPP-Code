//count no. of digit
#include<iostream>

using namespace std;

int main()

{
	int num;
	cout<<"Enter integer	";
	cin>>num;
	
	int count=0;
	for(;num>0;num=num/10,count++);
	
	cout<<"no. of digit is :	"<<count;

 return 0;}
