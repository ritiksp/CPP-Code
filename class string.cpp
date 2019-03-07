#include <iostream>
#include<cstring>
#define n 20


using namespace std;

class String
{
	private:
		char str[n];
		
	public:
		void getstring()
		{
			cout<<"Enter String elements  : "<<endl;
			cin>>str;
		}	
		
		void showstring(){
			cout<<"String is : "<<str<<endl;
			
		}
		
		String()
		{
			str[0]='\0';
		}
		String(char str[n])
		{
			strcpy(this->str, str);
		}
		
		String (String &S)
		{
			strcpy(str, S.str);
			
		}
		
		void sconcat(String X, String Y)
		{
			strcpy(this->str, X.str);
			strcat(this->str, Y.str);
		}
		
		void sconcat(String X)
		{
			strcat(str,X.str);
		}
		
		void sconcat(char str1[])
		{
			strcat(str,str1);
		}
		
		void sconcat(String X, char str1[])
		{
			strcpy(str, X.str);
			strcat(str, str1);
		}
		
		void sconcat(char str1[],String X)
		{
			strcpy(str, str1);
			strcat(str, X.str);
		}
		
		String operator+(String X)
		{
			String T;
			
			strcpy(T.str,str);
			strcat(T.str,X.str);
			return T;
		}
		String operator+(char str1[])
		{
			String T;
			strcpy(T.str, str)
			strcat(T.str, str1)
			return T;
			
		}
		void operator+=(String X)
		{
		
			str+=X.str;
		
		}
		
		void operator+=(char str1[])
		{
			str+=str1;
		}
		
		
		int operator==(String S)
		{
			int ans=strcmp(str,S.str);
			if(ans==0)
			return 1;
			else
			return 0;			
		}
		
		int operator>(String S)
		{
			int ans=strcmp(str,S.str);
			if(ans>0)
			return 1;
			else
			return 0;
		}
		
		int operator<(String S)
		{
			int ans=strcmp(str,S.str);
			if(ans<0)
			return 1;
			else
			return 0;
		}
		
		friend String operator+(char str1[],String X);
		
		
};

String operator+(char str1[],String X)
{
	String T;
	strcpy(T.str,str1);
	strcat(T.str,X.str);
	return T;
	
}



int main()
{
  	/* String S1;
	  
	  S1.getstring();
	  S1.showstring();
	  
	  
	  String S2(ritik);
	  S2.showstring();
	  
	  S1+=S2;
	  S1.showstring();
	  
	  String S3(S1);
	  S3.showstring(); 
	  
	  String S1, S2, S3;
	  
	  S1.getstring();
	  S2.getstring();
	  
	  S3.sconcat(S1, S2);
	  S3.showstring();
	  
	  S1.sconcat(S2);
	  S1.showstring();
	  
	  S1.sconcat("ABC");
	  S1.showstring();
	  
	  S3.sconcat(S2,"ABC");
	  S3.showstring();
	  
	  S3.sconcat("ABC", S2);
	  S3.showstring();
	  */
	 /* S1.getstring();
	  S2.getstring();
	  
	  S3=S1+S2;
	  S3.showstring();
	  
	  
	  S3=S1+"ritik";
	  S3.showstring();
	  
	  
	  
	  
	  String S1, S2, S3;
	  S1.getstring();
	  S2.getstring();
	  
	  if(S1==S2)
	  cout<<"Same String : ";
	  else
	  	if(S1>S2)
	  	cout<<"String 1 > String 2";
	  	else
	  	cout<<"String 2 > String 1";
	  */
	  
	  String S1,S3;
	  S1.getstring();
	  
	  S3="Mr. "+S1;	
	  S3.showstring();		
	  
    return 0;
}

