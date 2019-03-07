#include <iostream>


using namespace std;

class number
{
	private:
		int num;
		
	public:
		void getnumber(){
			cout<<"Enter number  : "<<endl;
			cin>>num;
			
		}	
		
		void shownumber(){
			cout<<"Number is : "<<num<<endl;
			
		}
		
		number()
		{
			num=0;
		}
		number(int num)
		{
			this->num=num;
		}
		
		number (number &N)
		{
			num=N.num;
			
		}
		
		void nadd(number X, number Y)
		{
			this->num=X.num+Y.num;
		}
		void nadd(number X, int num1)
		{
			num=X.num+num1;
		}
		void nadd(number X)
		{
			num+=X.num;
		}
		void nadd(int num)
		{
			this->num+=num;
		}
		void nadd()
		{
			num++;
		}
		void nadd(int num1, number X)
		{
			num=num1+X.num;
		}
		void operator++()
		{
			num++;
		}
		
		number operator+(int num1)
		{
			number T;
			T.num=num+num1;
			return T;
		}
		void operator+=(number X)
		{
			num+=X.num;
			
		}
		void operator+=(int num1)
		{
			num+=num1;
		}
		
		int operator==(number N)
		{
			if(num==N.num)
				return 1;
			else 
				return 0;	
		}
		
		int operator>(number N)
		{
			if(num>N.num)
				return 1;
			else
					return 0;
		}
		
		int operator<(number N)
		{
			if(num<N.num)
				return 1;
			else
				return 0;
		}
		
		friend number operator+(int num1,number X); 
		
};

	number operator+(int num1,number X)
	{
		number T;
		T.num=num1+X.num;
		return T;
	}

int main()
{
  /*	number N1;
	  
	  N1.getnumber();
	  N1.shownumber();
	  
	  number P2(54);
	  P2.shownumber();
	  
	  
	  number N3(N1);
	  N3.shownumber();
	*/
	
	/*	number N1(7), N2(10), N3, N4;
		N3.nadd(N1,N2);
		N3.shownumber();
		
		N4.nadd(N3,17);
		N4.shownumber();
		
		N1.nadd(N2);
		N1.shownumber();
		
		N2.nadd(10);
		N2.shownumber();
		
		N2.nadd();
		N2.shownumber();
		
		N3.nadd(10,N1);
		N3.shownumber();
	  
	  
	  number N1(7), N2(5),N3;
	  
	  
	  N3=N1+N2;
	  N3=N1+10;
	  N1+=N2;
	  N1+=10;
	  ++N1;
	  
	  
	  if(N1==N2)
	  	cout<<"Same object";
	  	else
	  		if(N1>N2)
	  			cout<<"First object > second object";
	  			else
	  				cout<<"Second object >first";
	  */
	  
	  number N1, N3;
	  
	  N1.getnumber();
	  
	  N3=10+N2;
	  N3.shownumber();
	  
    return 0;
}

