#include <iostream>
#define n 3


using namespace std;

class matrix
{
	private:
		int mat[n][n];
		
	public:
		void getmatrix(){
			for(int i=0;i<n;i++)
			{
				cout<<"Enter "<<n<<" elements for "<<i+1<<"row"<<endl;
				for(int j=0;j<n;j++)
				{
					cin>>mat[i][j];
				}
				
			}
			
			
		}	
		
		void showmatrix()
		{
			cout<<"Matrix is : "<<endl;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					cout<<mat[i][j]<<"\t";
				
				}
				cout<<endl;
			}
			
		}
		
		matrix()
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					mat[i][j]=0;
				}
			}
		}
		
		matrix(int mat[n][n])
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					this->mat[i][j]=mat[i][j];
				}
			}
		}
		
		matrix (matrix &M)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					mat[i][j]=M.mat[i][j];
				}
			}
		}
		
		void mult(matrix X, matrix Y)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{	mat [i][j]=0;
					for(int k=0;k<n;k++)
					{
						mat[i][j]+=X.mat[i][k]*Y.mat[k][j];
					}
				}
			}
		}
		
		void mult(matrix X, int num)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					mat[i][j]=X.mat[i][j]*num;
				}
			}
		}
		
		
		void mult(int num, matrix X)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					mat[i][j]=num*X.mat[i][j];
				}
			}
		}
		
		matrix operator*(matrix X)
		{
			matrix T;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					mat[i][j]=0;
					for(int k=0;k<n;k++)
					{
						T.mat[i][j]+=mat[i][k]+X.mat[k][j];
					}
				}
			}
			return T;
			
		}
		
		matrix operator*(int num)
		{
			matrix T;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					T.mat[i][j]=mat[i][j]*num;
				}
			}
			return T;
		}
		
		void operator*=(int num)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					mat[i][j]*=num;
				}
			}
			
		}
		friend matrix operator+(int num,matrix X);
		
};

	matrix operator+(int num,matrix X)
	{
		matrix T;
		for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					T.mat[i][j]=num*X.mat[i][j];
				}
			}
		return T;		
	}

int main()
{	
 	/*int mat[n][n];
  	mat[0][0]=1;
  	mat[0][1]=1;
  	mat[0][2]=1;
  	mat[1][0]=1;
  	mat[1][1]=1;
  	mat[1][2]=1;
  	mat[2][0]=1;
  	mat[2][1]=1;
  	mat[2][2]=1;
	*/
	/*	int mat[n][n]={{1,1,1},{2,3,4},{11,22,33}};
	matrix M2(mat);
	  
	M2.showmatrix();
	
	
	matrix M1;
	M1.getmatrix();
	M1.showmatrix();
	
	
	matrix M3(M1);
	M3.showmatrix();*/
	
	matrix M1, M2, M3, M4;
	
	M1.getmatrix();
	
/*	M1.getmatrix();
	M2.getmatrix();
	
	M3.mult(M1, M2);
	M3.showmatrix();
	
	M4.mult(M3, 10);
	M4.showmatrix();
	
	M4.mult(10, M3);
	M4.showmatrix();


	M3=M1*M2;
	M3.showmatrix();
	
	M4=M3*10;
	M4.showmatrix();
	
	M3*=10;
	M3.showmatrix();
	
*/
	M3=10*M1;
		
	  
    return 0;
}

