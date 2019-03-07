#include <iostream>

using namespace std;

class time
{
	private:
		int hh, mm, ss;
		
	public:
		void gettime(){
			cout<<"Enter Hour Minute Second : ";
			cin>>hh;
			cin>>mm;
			cin>>ss;
			
		}	
		
		void showtime(){
			cout<<"Time is : "<<hh<<"/"<<mm<<"/"<<ss<<endl;
			
			
		}
		
		time()
		{
			hh=0;
			mm=0;
			ss=0;
		}
		time(int hh, int mm, int ss)
		{
			this->hh=hh;
			this->mm=mm;
			this->ss=ss;
		}
		
		time (time &T)
		{
			hh=T.hh;
			mm=T.mm;
			ss=T.ss;
			
		}
		
		
};

int main()
{
  	time T1;
	  
	  T1.gettime();
	  T1.showtime();
	  
	  
	  /*time T1(07, 26, 45 );
	  
	  T1.showtime();
	  */
	  
	  time T3(T1);
	  T3.showtime();
    return 0;
}

