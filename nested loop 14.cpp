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
				cout<<j;
				
		}
		
		for(int k=j-1;k>1;k--)
		{
				cout<<k-1;
		}
	cout<<endl;
	}

 return 0;}
