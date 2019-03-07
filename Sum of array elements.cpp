//store and print marks of student using array
#include<iostream>
#define n 5
 

using namespace std;

int main()

{
	int A[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter array "<<i+1<<"th element "<<endl;
		cin>>A[i];
		
	}

	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		sum+=A[i];
	}
	
	cout<<"Sum of Array elements"<<sum<<endl;

 return 0;}
