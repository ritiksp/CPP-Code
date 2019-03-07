//store and print marks of student using array
#include<iostream>
#define n 10
 

using namespace std;

int main()

{
	int A[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Marks of "<<i+1<< " student"<<endl;
		cin>>A[i];
		
	}
	
	cout<<"Marks of students are	"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;
		
	}
	

 return 0;}
