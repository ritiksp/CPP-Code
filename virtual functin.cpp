#include <iostream>

using namespace std;

class Base 
{
	public: void show()
	{
		cout<<"Base show\n";
	}
	void display()
	{
		cout<<"Base display\n";
	}
	
};

class Derived : public Base
{
	public:
		void show()
		{
			cout<<"Derived show\n";
		}
		void welcome()
		{
			cout<<"Derived welcome\n";
		}
		
		virtual void welcome()=0;   //pure virtual function
};

int main()
{
 	/*Base B;
	 B.show();
	 B.display();
	 B.welcome();*/
	
	Derived D;
	D.show();
	D.display();
	D.welcome();
	
	Base*Bp=&D;
	Bp->show();
	Bp->display();
	//Bp->welcome(); 
  
    return 0;
}


