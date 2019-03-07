//reverse of array elements
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

	cout<<"Reverse of this array is"<<"\n";
	
	for(int i=n-1;i>=0;i--)
	{
		cout<<A[i]<<endl;
	}
 return 0;}
