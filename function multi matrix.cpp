#include <iostream>
#define n 3
using namespace std;


void rmat(int mat[n][n])
{
	for(int i=0;i<n;i++)
	{
		cout<<"Enter "<<n<<" elements for "<<i+1<<"row"<<endl;
		for(int j=0;j<n;j++)
		{
			cin>>mat[i][j];
		}
	}
}

void smat(int mat[n][n])
{
	int num;
	cout<<"Enter number you want to multiply to matrix	";
	cin>>num;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<num*mat[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void pmat(int mat[n][n])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void amat(int mat1[n][n], int mat2[n][n], int mat3[n][n])
{
	cout<<"Matrix after addition"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	
}

void mmat(int mat1[n][n], int mat2[n][n], int mat3[n][n])
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum=0;
			for(int k=0;k<n;k++)
			{
			sum+=mat1[i][k]*mat2[k][j];
			
			}
			mat3[i][j]=sum;	
		}
		
	}
}

int main()
{	int B[n][n],A[n][n],C[n][n];
	
	rmat(A);
	rmat(B);
	
	pmat(A);
	pmat(B);
	
	mmat(A,B,C);
	pmat(C);
	
  return 0;
}

