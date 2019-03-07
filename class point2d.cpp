#include <iostream>

using namespace std;

class point_2d
{
	private:
		float x, y;
		
	public:
		void getpoint2(){
			cout<<"Enter X coordinate : ";
			cin>>x;
			cout<<"Enter Y coordinate : ";
			cin>>y;
			
		}	
		
		void showpoint2(){
			cout<<"("<<x<<","<<y<<",";
			
			
		}
		
		point_2d()
		{
			x=0;
			y=0;
		}
		
		point_2d(float x, float y)
			{
				this->x=x;;
				this->y=y;
			}
		point_2d (point_2d &P)
		{
			x=P.x;
			y=P.y;
		}
		
};

class point_3d : point_2d
{
	private: 
		float z;
	public: 
		void getpoint3()
		{
			getpoint2();
			cout<<"Enter Z coordinate : ";
			cin>>z;
		}	 
		void showpoint3()
		{
			showpoint2();
			cout<<z<<")";
		}
		
		point_3d()
		{
			z=0;
		}
		
		point_3d(float x, float y, float z):point_2d(x,y)
			{
				this->z=z;
				
			}
		point_3d (point_3d &P):point_2d(P)
		{
			z=P.z;
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
	  P3.showpoint();
	  
	  */
	  
	  
	  point_3d P1;
	  P1.getpoint3();
	  P1.showpoint3();
	  
	  point_3d P2(2,3,4);
	  P2.showpoint3();
	  
	 
	  point_3d P3(P1);
	  P3.showpoint3();
	  
	  
    return 0;
}

