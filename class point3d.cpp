#include <iostream>

using namespace std;

class point_3d
{
	private:
		float z;
		
	public:
		void getpoint3(){
			cout<<"Enter Z coordinate : ";
			cin>>z;
			
			
		}	
		
		void showpoint3(){
			cout<<"Z coordinate is : "<<z<<")"<<endl;
			
			
		}
		
		point_3d()
		{
			z=0;
		}
		
		point_3d(float z)
			{
				this->z=z;
			}
		point_3d (point_3d &P)
		{
			z=P.z;
		}
		
};




class point_2d : point_3d
{
	private:
		float x, y;
		
	public:
		void getpoint2(){
			cout<<"Enter X coordinate : ";
			cin>>x;
			cout<<"Enter X coordinate : ";
			cin>>y;
			getpoint3();
			
		}	
		
		void showpoint2(){
			cout<<"(X,Y) coordinate is : "<<"("<<x<<","<<y<<","<<endl;
			showpoint3();
			
			
		}
		
		point_2d()
		{
			x=0;
			y=0;
		}
		
		point_2d(float x, float y):point_3d(float z)
			{
				this->x=x;;
				this->y=y;
			}
		point_2d (point_2d &P):point_3d(P)
		{
			x=P.x;
			y=P.y;
		}
		
};

int main()
{
  	/*point_2d P1;
	  
	  P1.getpoint();
	  P1.showpoint();
	  
	  
	  point_2d P1(5.5, 6.6);
	  
	  P1.showpoint();
	  
	  
	  point_2d P3(P1);
	  P3.showpoint();*/
	  
	  point_2d P1
	  P1.getpoint2();
	  
	  point_2d P2(1,1,1);
	  P2.showpoint2();
	  
	  point_2d P3(P1);
	  P1.getpoint2();
	  
	  
	  
	  
	  
	  
    return 0;
}

