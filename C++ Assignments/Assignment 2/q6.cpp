#include<iostream>
using namespace std;
class CopySituation
{
	int a,b;
	public:
		CopySituation()
		{
			a=b=0;
		}
		CopySituation(int x,int y)
		{
			a=x;
			b=y;
		}
		CopySituation(const CopySituation &x)//copy constructor
		{
			cout<<"copy constructor invoked\n";
			a=x.a;
			b=x.b;
		}

		void display()
		{
			cout<<"a= "<<a<<"\nb= "<<b<<endl;
		}
		~CopySituation()
		{}
};

int main()
{
	CopySituation a(2,5);
	CopySituation b=a,c(a);
	a.display();
	b.display();
	c.display();
	return 0;
}
