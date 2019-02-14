#include<iostream>
using namespace std;

class complex
{
	int real,img;
	public:
	complex()
	{
		real=img=0;
	}
	complex(int val)
	{
		real=img=val;
	}
	complex(int r,int i)
	{
		real=r;
		img=i;
	}
    void display()
    {
        cout<<real<<" + "<<"("<<img<<")"<<"i"<<endl;

    }
	friend complex multiply(complex &c1,complex &c2);

	void add(complex &c1,complex &c2)
	{
		real=c1.real+c2.real;
		img=c1.img+c2.img;
	}
};

complex multiply(complex &c1,complex &c2)
{
	complex temp;
	temp.real=(c1.real*c2.real)-(c1.img*c2.img);
	temp.img=(c2.real*c1.img)+(c1.real*c2.img);
	return temp;
}

int main()
{
	complex c1,c2(6),c3(8,3),c4,c5;
	c4=multiply(c2,c3);
	c5.add(c2,c3);
	c1.display();
	c2.display();
	c3.display();
	c4.display();
	c5.display();
	return 0;
}
