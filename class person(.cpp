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


class student : person
{
	private : int rollno;
			  float percent;
			  
			  
	public : 
		
			student()
			{
				rollno=0;
				percent=0;
			}
			
			student(char name[20], int age, char address[20], int rollno, int percent):person(name, age, address)
			{
				this->rollno=rollno;
				this->percent=percent;
			}
			student(student &S):person(S)
			{
				rollno=S.rollno;
				percent=S.percent;
			}
			void getstudent()
			{
				cout<<"Enter rollno and percent : ";
				cin>>rollno;
				cin>>percent;
				getperson();
			}
			
			void showstudent()
			{
				cout<<"Rollno is : "<<rollno<<endl;
				cout<<"Percentage is : "<<percent<<endl;
				showperson();
			}
					  
};



class faculty : person
{
	private : char fac_id;
			  float salary;
			  
			  
	public : 
		
			faculty()
			{
				fac_id='\0';
				salary=0;
			}
			
			faculty(char name[20], int age, char address[20], char fac_id, int salary):person(name, age, address)
			{
				this->strcpy(fac_id,fac_id);
				this->salary=salary;
			}
			faculty(faculty &F):person(F)
			{
				strcpy(fac_id,F.fac_id);
				salary=F,salary;
			}
			void getfaculty()
			{
				cout<<"Enter Fac_ID and percent : ";
				cin>>fac_id;
				cin>>salary;
				getperson();
			}
			
			void showfaculty()
			{
				cout<<"Fac_id : "<<fac_id<<endl;
				cout<<"salary is : "<<salary<<endl;
				showperson();
			}
					  
};




int main()
{
  	
  	student S1;
  	S1.getstudent();
  	S1.showstudent();
  	
  	student S2("anil", 18, "jnv", 1, 80);
  	S2.showstudent();
  	
  	student S3(S1);
  	S3.showstudent();
  	
  	faculty F1;
  	F1.getfaculty();
  	F1.showfaculty();
  	
  	faculty F2("ramesh", 31, "karninagar", "Ramesh_31", 40000);
  	F2.showfaculty();
  	
  	faculty F3(F1);
  	F3.showfaculty();
  	
    return 0;
}

