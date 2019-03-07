#include <iostream>
#include<fstream>

using namespace std;

int main() 
{
	
	ifstream fin("resume.txt");
	if(!fin)
	{
		cerr<<"file not exist ";
		exit(-1);
		
	}
	
	/*fin.seekg(0, ios::end);
	cout<<"file lenght is : "<<fin.tellg();
	*/

	char ch;
	fin.seekg(10, ios::beg);
	cout<<fin.tellg()<<endl;
	fin.get(ch);
	cout<<ch;
	
	return 0;	
}



