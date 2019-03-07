//element which is maximum in array
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
	
	int max=A[0];
	
	for(int i=0;i<n;i++)
	{
		if(max<A[i])
		max=A[i];
	}
	
	cout<<"max of array elements	"<<max;
	
	
	


	
 return 0;}
