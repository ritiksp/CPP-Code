//element which is maximum in array
#include<iostream>
#define n 3
 

using namespace std;

int main()

{	
	cout<<"Enter elements for matrix"<<endl;
	
	int mat1[n][n];
	
	for(int i=0;i<n;i++)
	
	{
		cout<<"enter "<<n<<" elements for "<<i+1<<" row"<<endl;
		for(int j=0;j<n;j++)
		{
			cin>>mat1[i][j];
		}
	}	
		int num;
		cout<<"Enter a scalar you want to multiply with matrix";
		cin>>num;
		
		int mat2[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				mat2[i][j]=num*(mat1[i][j]);
			}
		}
	
		cout<<"scalar multiplied matrix is\n";
		for(int i=0;i<n;i++)
		{	
			for(int j=0;j<n;j++)
				cout<<mat2[i][j]<<"\t";
				cout<<endl;
		}
			
	
	return 0;}
