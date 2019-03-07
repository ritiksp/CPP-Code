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
}

int main()
{
	int A[n][n];
	rmat(A);
	pmat(A);
	smat(A);
  return 0;
}

