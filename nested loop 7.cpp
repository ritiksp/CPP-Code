//nested loop 7

#include<iostream>

using namespace std;

int main()

{
	int n;
	cout<<"Enter number of rows	";
	cin>>n;
	
	
	 char ch='A';
	 int num =1;
	
	for(int i=1;i<=n;i++)
	{
		ch ='A';
		num =1;
		for(int j=1;j<=i;j++)
			{
			cout<<ch<<num;
			ch++;
			num++;
			}
		cout<<endl;
	}
 return 0;}
