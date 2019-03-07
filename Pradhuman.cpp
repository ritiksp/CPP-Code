#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int i=1;
	ifstream file;
	file.open("questions.txt");
	cout<<"Reading from file"<<endl;
	string line;
	while(i<20)
	
{	getline(file,line);
	cout<<line<<endl;
	i++; }
	return 0;
}
