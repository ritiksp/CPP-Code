#include <iostream>


using namespace std;


	template <class T>
	class array
	{
		T arr[n];
		
	public: 
		array()
		{
			for(int i=0;i<n;i++)
			arr[i]=0;
		}
		
		array(T arr1[])
		{
			for(int i=0;i<n;i++)
			arr[i]=arr1[i];
			
		}	
		array(array &A)
		{
			for(int i=0;i<n;i++)
			arr[i]=A.arr[i];
		}
		
		T asum()
		{
			T sum =0;
			for(int i=0;i<n;i++);
			sum+=arr[i];
			return sum;
		}
		
		showarray
		
	};
	
	
	int main()
	{
	array <int>A1
	return 0;	
	}



