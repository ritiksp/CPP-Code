#include <iostream>
using namespace std;

struct student
{
    int roll;
    char name[50];
    float marks;
};

int main() 
{
    student s1;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> s1.name;
    cout << "Enter roll number: ";
    cin >> s1.roll;
    cout << "Enter marks: ";
    cin >> s1.marks;
    
    student s2;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> s2.name;
    cout << "Enter roll number: ";
    cin >> s2.roll;
    cout << "Enter marks: ";
    cin >> s2.marks;


    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "Marks: " << s1.marks << endl;
    
	cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Roll: " << s2.roll << endl;
    cout << "Marks: " << s2.marks << endl;
    
	if(s1.marks>s2.marks)
	cout<<s1.name<<"is topper";
	
	else
	cout<<s2.name<<"is topper";
	
	return 0;
}

