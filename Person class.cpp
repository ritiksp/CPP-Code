#include <iostream>
#include<string>
#include<cstring>

using namespace std;

class person
{
	private:
		char name[20];
		int age;
		char address[20];
		
	public:
		void getperson(){
			cout<<"Enter name, age , address of person"<<endl;
			cin>>name;
			cin>>age;
			cin>>address;
			
		}	
		
		void showperson(){
			cout<<"person name is : "<<name<<endl;
			cout<<"Person age is : "<<age<<endl;
			cout<<"person address is : "<<address<<endl;
		}
		
		void showage(){
			if(age>30)
			cout<<"overaged";
		 	else 
		 		{
				 if(age<18)
				 cout<<"below aged";
				}
		}
		
		person()
			{
				name[0]='\0';
				age=0;
				address[0]='\0';
				
			}
			
			person(char name[], int age, char address[])
			{
				strcpy(this->name, name);
				this->age=age;
				strcpy(this->address, address);
			}
			
			person(person &P)
			{
				strcpy(name,P.name);
				age=P.age;;
				strcpy(address,P.address);
			}
};

int main()
{
  	person P1;
  	P1.getperson();
  	P1.showperson();	
	/*person P2("Ritik",18 , "Sardul colony");
	P2.showperson();
	*/	
	
	person P3(P1);
	P3.showperson();
	  	   
	   
    return 0;
}

