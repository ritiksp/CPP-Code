#include <iostream>
#define n 2


using namespace std;

class array
{
	private:
		int arr[n];
		
	public:
		void getarray(){
			cout<<"Enter numbers  : "<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<"Enter integer array elements :	"<<endl;
				cin>>arr[i];
			}
			
		}	
		
		void showarray(){
			cout<<"Integer array is : "<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
		
		array()
		{
			for(int i=0;i<n;i++)
			{
			arr[i]=0;
			}
		}
		array(int arr[n])
		{
			for(int i=0;i<n;i++){
			
			this->arr[i]=arr[i];
		}
		}
		
		array (array &A)
		{
			for(int i=0;i<n;i++){
			
			arr[i]=A.arr[i];
		}
	}
	
	void add(array X, array Y)
	{
		for (int i=0;i<n;i++)
		{
			arr[i]=X.arr[i]+Y.arr[i];
		}
	}
	
	void add(array X)
	{
		for(int i=0;i<n;i++)
		{
			arr[i]+=X.arr[i];
		}
	}
	
	void add(int num)
	{
		for(int i=0;i<n;i++)
		{
			arr[i]+=num;
		}
	}
	
	void add(array X, int num)
	{
		for(int i=0;i<n;i++)
		{
			arr[i]=X.arr[i]+num;
		}
	}
	
	void add(int num, array X)
	{
		for(int i=0;i<n;i++)
		{
			arr[i]=num+X.arr[i];
		}
	}
	
	array operator+(array X)
	{
		array T;
		for(int i=0;i<n;i++)
			T.arr[i]=arr[i]+X.arr[i];
		return T;
	}
	
	array operator+(int num)
	{
		array T;
		for(int i=0;i<n;i++)
			T.arr[i]=arr[i]+num;
		return T;
	}
	
	void operator+=(array X)
	{
		for(int i=0;i<n;i++)
		arr[i]+=X.arr[i];
	}	
	void operator+=(int num)
	{
		for(int i=0;i<n;i++)
		arr[i]+=num;
	}
	
	int operator==(array A)
	{
		for(int i=0;i<n;i++)
			if(arr[i]!=A.arr[i])
				return 0;

		return 1;
		
	}
	
	friend array operator+(int num, array A);
	
};

array operator+(int num, array A)
{
	array T;
	for(int i=0;i<n;i++)
		T.arr[i]=num+A.arr[i];
	return T;
}

int main()
{
  	array A1, A2, A3, A4;
	  
	//array A2(arr[0]=1, arr[1]=3);
	//A2.showarray();;
	  
/*	A1.getarray();
	A1.showarray();
	
	array A3(A1);
	A3.showarray();*/
	
	A1.getarray();
	
	
/*	A3.add(A1,A2);
	A3.showarray();
	
	A1.add(A2);
	A1.showarray();
	
	A3.add(10);
	A3.showarray();
	
	A4.add(A2,20);
	A4.showarray();
	
	A4.add(10,A2);
	A4.showarray();
	


	A3=A1+A2;
	A3.showarray();
	
	A3=A1+10;
	A3.showarray();
	
	A1+=A2;
	A1.showarray();
	
	A1+=10;
	A1.showarray();	
	*/
	
	/*if(A1==A2)
	cout<<"Same Array";
	else 
	cout<<"not same";
	*/	
	
		
	A3=10+A1;
	A3.showarray();
	
    return 0;
}

