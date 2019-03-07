#include <iostream>
#define n 3
using namespace std;


void rmat(int mat[n][n])
{
	for(int i=0;i<n;i++)
	{
		cout<<"Enter elements"<<n<<" for "<<i+1<<"row"<<endl;
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
	cout<<endl;
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


int main()
{	int B[n][n];
	int A[n][n];
	int C[n][n];
	rmat(A);
	rmat(B);
	pmat(A);
	pmat(B);
	amat(A,B,C);
	pmat(C);
	
  return 0;
}

