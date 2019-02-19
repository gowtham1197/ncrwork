#include<iostream>
using namespace std;
class complex
{
	
	public:
		int real,img;
		complex()
		{
		}
		complex(int r,int i)
		{
			real=r;
			img=i;
		}
		complex(const complex &c)//copy constructor
		{
			real=c.real;
			img=c.img;
		}
		~complex()
		{
		}
		complex operator+(complex a)
		{
			complex res;
			res.real=a.real+real;
			res.img=a.img+img;
			return res;
		}
		complex operator-(complex a)
		{
			complex res;
			res.real=a.real-real;
			res.img=a.img-img;
			return res;
		}

		complex operator-()
		{
			return complex(-real,-img);
		}

		complex operator++(int x)
		{
			complex res;
			res.real=real;
			res.img=img;
			real++;
			img++;
			return res;
		}

		complex operator++()
		{
			complex res;
			res.real=++real;
			res.img=++img;
			return res;
		}

		complex& operator[](int index)
		{
			return *this;
		}

		complex operator=(complex b)
		{
			real=b.real;
			img=b.img;
			return *this;
		}

		complex operator,(complex b)
		{
			return b;
		}

		complex operator->()
		{
			return *this;
		}

		friend ostream& operator<<(ostream& out,complex a);
		friend istream& operator>>(istream& cin,complex &a);

};



ostream& operator<<(ostream& out,complex a)
{
	out<<"Real = "<<a.real<<endl;
	out<<"Imaginary = "<<a.img<<endl;
	return out;
}
istream& operator>>(istream& cin,complex &a)
{
	cin>>a.real>>a.img;
	return cin;
}

int main()
{
	complex samp,arr[3],a1,a2,a3,a4,*ptr;
	for(int i=0;i<3;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<3;i++)
		cout<<arr[i];
	ptr=&arr[0];
	a1=arr[0]+arr[1];
	a2=-arr[1];
	a3=arr[0];
	a4=++arr[1];
	cout<<endl;
	cout<<a4<<endl;
	cout<<a3<<endl<<endl;
	samp=(a1,a2,a3);
	cout<<samp<<endl;
	for(int i=0;i<3;i++)
		cout<<arr[i];
	cout<<ptr->real<<endl;
	return 0;
}
