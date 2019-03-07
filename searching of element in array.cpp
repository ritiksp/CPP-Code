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
	
	int num;
	cout<<"Enter number you want to search	";
	cin>>num;
	
	for(int i=0;i<n;i++)
	{
		if(num==A[i])
		break;
	}
	if(i==n)
	{
		cout<<"couldn't found";
	}
	else 
	cout<<"Found"<<num<<"in"<<i<<"position";
	
	
	
	


	
 return 0;}
