#include<bits/stdc++.h>
using namespace std;
class point
{
	float x,y;
public:
	point()
	{
		x=y=0;
	}
	point(float xc,float yc)
	{
		x=xc;
		y=yc;
	}

	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
	friend float distanceee(point &p1,point &p2);
};
float distanceee(point &p1,point &p2)
{
	float res;
	res=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
	return res;
}


int main()
{
	point p1,p2(4,5),p3(2,8);
	p1.display();
	p2.display();
	p3.display();
	float res=distanceee(p2,p3);
	cout<<res;
	return 0;
}
