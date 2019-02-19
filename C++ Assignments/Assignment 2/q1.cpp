#include<iostream>
using namespace std;
class polar
{
	float angle,rad;
public:
	static int count;
	polar()
	{
		count++;
		angle=rad=0.0;
	}
	polar(float a,float r)
	{
		count++;
		angle=a;
		rad=r;
	}
	~polar()
	{
		//decrementing count when scope of object is lost
		count--;
	}
};
int polar::count;//declaration for static data member
int main()
{
	polar a,b,c,d,e,f(1.0,2.5),g(2.3,5.4);
	cout<<"number of active objects are : ";
	cout<<polar::count<<endl;
	return 0;
}