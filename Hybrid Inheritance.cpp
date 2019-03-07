#include <iostream>
#include<string>
#include<cstring>

using namespace std;

class Base
{
	private:
		int b;
		
	public:
		
		void getbase()
		{
			cout<<"Enter number";
			cin>>b;
			
		}
		
		void show()
		{
			cout<<"Base contructor\n";
			cout<<b;
		}
		
		
		Base()
			{
				b=0;
				cout<<"Base default constructor \n";
				
			}
			
			Base(int b)
			{
				this->b=b;
				cout<<"Base perametric constructor \n";
			}
			
			Base(Base &B)
			{
				
				b=B.b;
				cout<<"Base Copy constructor \n";
				
			}
};


class Derived1 : virtual public Base
{
	private : 
			int d1;
			  
			  
	public : 
		
			Derived1()
			{
				d1=0;
				cout<<"Derived1 Default contructor \n ";
			}
			
			Derived1(int b,int d1):Base(b)
			{
				this->d1=d1;
					cout<<"Derived1 Parametric contructor \n ";
			}
			Derived1(Derived1 &D1):Base(D1)
			{
				d1=D1.d1;
				cout<<"Derived1 copy contructor \n ";
			}
			void getderived1()
			{
				getbase();
				cout<<"Enter derived1";
				cin>>d1;
			}
			
			void show()
			{
				Base::show();
				cout<<"Derived contructor \n"<<d1;
				
			}
					  
};



class Derived2 :virtual public Base 
{
	private : 
			int d2;
			  
			  
	public : 
		
			Derived2()
			{
				d2=0;
			cout<<"Derived2 Default contructor \n ";
			}
			
			Derived2(int b,int d2):Base(b)
			{
				this->d2=d2;
				cout<<"Derived2 Parametric contructor \n ";
			}
			Derived2(Derived2 &D2):Base(D2)
			{
				d2=D2.d2;
				cout<<"Derived2 copy contructor \n ";
			}
			void getderived2()
			{
				getbase();
				cout<<"Enter derived2";
				cin>>d2;
			}
			
			void show()
			{
				Base::show();
				cout<<d2<<endl;
				
			}
					  
};


class Derived12 : Derived1, Derived2
{
	private : 
			int d12;
			  
			  
	public : 
		
			Derived12()
			{
				d12=0;
				cout<<"Derived12 Default contructor \n ";
			}
			
			Derived12(int b,int d1, int d2, int d12):Derived1(b,d1), Derived2(b,d2) 
			{
				this->d12=d12;
				cout<<"Derived12 Parametric contructor \n ";
			}
			Derived12 (Derived12 &D12):Derived1(D12),Derived2(D12)
			{
				d12=D12.d12;
				cout<<"Derived12 copy contructor \n ";
			}
			void getderived12()
			{
				getderived1();
				getderived2();
				cout<<"Enter derived12";
				cin>>d12;
			}
			
			void show()
			{
				Derived1::show();
				Derived2::show();
				cout<<d12<<endl;
			}
					  
};







int main()
{
  	Derived12 D;
  	//D.show();
    return 0;
}

