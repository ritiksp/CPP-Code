//Multiplication of two matrix
#include<iostream>
#define n 3
 

using namespace std;

int main()

{	
	cout<<"Enter elements for matrix 1"<<endl;
	
	int mat1[n][n];
	
	for(int i=0;i<n;i++)
	
	{
		cout<<"enter "<<n<<" elements for "<<i+1<<" row"<<endl;
		for(int j=0;j<n;j++)
		{
			cin>>mat1[i][j];
		}
	}
	
	cout<<"Enter elements for matrix 2"<<endl;
	
	int mat2[n][n];
	
	for(int i=0;i<n;i++)
	
	{
		cout<<"enter "<<n<<" elements for "<<i+1<<" row"<<endl;
		for(int j=0;j<n;j++)
		{
			cin>>mat2[i][j];
		}
	}
	
	cout<<"Multiplied matrix is"<<endl;
	
	int mat3[n][n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
			sum+=mat1[i][k]*mat2[k][j];
			
			}
			mat3[i][j]=sum;	
		}
		
	}	
		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat3[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;}
