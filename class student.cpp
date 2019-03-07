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


class academic
{
	private:
		int rollno;
		float percent;
		
	public:
		void getacad(){
			cout<<"Enter Rollno and Percentage : "<<endl;
			cin>>rollno;
			cin>>percent;
			
		}	
		
		void showacad(){
			cout<<"rollno is : "<<rollno<<endl;
			cout<<"Percentage is : "<<percent<<endl;
			
		}
		
		
		academic()
			{
				rollno=0;
				percent=0;
			}
			
		academic(int rollno, float percent)
			{
				
				this->rollno=rollno;
				this->percent=percent;
			}
			
		academic(academic &A)
			{
				rollno=A.rollno;
				percent=A.percent;	
			}
};


class sport
{
	private:
		char sportname[20];
		char type[20];
		
	public:
		void getsport(){
			cout<<"Enter Sport name and Type : "<<endl;
			cin>>sportname;
			cin>>type;
			
		}	
		
		void showsport(){
			cout<<"Sport name is : "<<sportname<<endl;
			cout<<"Sport type is : "<<type<<endl;
		}
		
		
		sport()
			{
				sportname[0]='\0';
				type[0]='\0';
				
			}
			
			sport(char sportname[], char type[])
			{
				strcpy(this->sportname, sportname);
				strcpy(this->type, type);
			}
			
			sport(sport &S)
			{
				strcpy(sportname,S.sportname);
				strcpy(type,S.type);
			}
};





class student : person, academic, sport
{
	private : 
			  
	public : 
			student(){
			}
			
			student(char name[20], int age, char address[20], int rollno, int percent, char sportname[20], char type[20]):person(name, age, address), academic(rollno, percent), sport(sportname, type)
			{
			}
			student(student &S):person(S),academic(S),sport(S)
			{
			}
			void getstudent()
			{
				getperson();
				getacad();
				getsport();
			}
			
			void showstudent()
			{
				showperson();
				showacad();
				showsport();
			}
					  
};



int main()
{
  	
  	student S1;
  	S1.getstudent();
  	S1.showstudent();
  	
  	student S2("anil", 18, "jnv", 1, 80, "football", "athletics");
  	S2.showstudent();
  	
  	student S3(S1);
  	S3.showstudent();
  	
  
    return 0;
}

