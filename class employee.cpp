#include <iostream>
#include<string>
#include<cstring>

using namespace std;

class employee
{
	private:
			char emp_id[20];
			char name[20];
			int salary;
			char grade;
			
			char calculate()
			{
				if(salary>0 && salary<=5000)
				return 'D';
				else
					if(salary>5000 && salary<=10000)
					return 'C';
					else
						if(salary>10000 && salary<=15000)
						return 'B';
						else
							if(salary>15000)
							return 'A';	
			}
			
	public:
			void getemployee()
			{
				cout<<"Enter Emp_id Name Salary"<<endl;
				cin>>emp_id;
				cin>>name;
				cin>>salary;
				grade=calculate();
			
			}
			
			void showemployee()
			{
				cout<<"employee id is : "<<emp_id<<endl;
				cout<<"employee name is : "<<name<<endl;
				cout<<"employee salary is : "<<salary<<endl;
				cout<<"garde is : "<<grade<<endl;
			}
			
			
			
			employee()
			{
				emp_id[0]='\0';
				name[0]='\0';
				salary=0;
				grade='\0';
			}
			
			employee(char emp_id[], char name[], int salary)
			{
				strcpy(this->emp_id, emp_id);
				strcpy(this->name, name);
				this->salary=salary;
				this->grade=calculate();
			}
			
			employee (employee &E)
			{
				strcpy(emp_id,E.emp_id);
				strcpy(name,E.name);
				salary=E.salary;
				grade=E.grade;
			}
					
};


int main()
{
	employee E1;
	
	E1.getemployee();
	E1.showemployee();
	
	//employee E2("ritik426", "ritik", 1000);
  	//E2.showemployee();
  	
  	employee E3(E1);
  	E3.showemployee();
  
    return 0;
}

