#include <iostream>
#include<fstream>

using namespace std;

int main() 
{
	
	ifstream fin("switch case.cpp");
	if(!fin)
	{
		cerr<<"file not exist \n";
		exit(-1);
	}
	
	char ch;
	while(!fin.eof())
	{
		ch=fin.get();
		cout<<ch;
	}
	
	fin.close();
	
	return 0;	
}



