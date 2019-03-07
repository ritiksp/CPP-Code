//sum of trwo array
#include<iostream>
#define n 5
 

using namespace std;

int main()

{
	int A[n];

	
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter array A "<<i+1<<"th element "<<endl;
		cin>>A[i];
		
	}
	
	int B[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter array B "<<i+1<<"th element "<<endl;
		cin>>B[i];
		
	}
	
	int C[n];
	for(int i=0;i<n;i++)
	{
		C[i]=A[i]+B[i];
	}
	cout<<"Sum of two array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<C[i]<<endl;
	}


	
 return 0;}
