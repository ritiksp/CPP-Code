//nested loop 1

#include<iostream>

using namespace std;

int main()

{
	int n;
	cout<<"Enter number";
	cin>>n;
	
	int j=1;
	int i=1;
	
	for(;i<=n;i++)
	{
		for(;j<=i;j++)
		cout<<"*";
		cout<<endl;
	}
 return 0;}
