//nested loop 1

#include<iostream>

using namespace std;

int main()

{
	int n;
	cout<<"Enter number	";
	cin>>n;
	
	
	int i;
	int j;
	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
				cout<<"*";
	}
	cout<<endl;
	}

 return 0;}
