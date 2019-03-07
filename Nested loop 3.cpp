//nested loop 1

#include<iostream>

using namespace std;

int main()

{
	int n;
	cout<<"Enter number of rows	";
	cin>>n;
	
	
	 char ch=A;
	
	for(int i=1;i<=n;i++)
	{
		ch ='A';
		for(int j=1;j<=i;j++)
			{
			cout<<ch;
			ch++;
			}
		cout<<endl;
	}
 return 0;}
