#include<iostream>
using namespace std;
class Time {
	int hr,min,sec;
public:
	Time()
	{
		hr=0;min=0;sec=0;
	}
	Time(int hour,int minutes,int seconds)
	{
		hr=hour;
		min=minutes;
		sec=seconds;
	}

	void print()
	{
		cout<<hr<<":"<<min<<":"<<sec<<endl;
	}

	Time add(Time t)
	{
		Time temp;
		temp.hr=hr+t.hr;
		temp.min=min+t.min;
		temp.sec=sec+t.sec;
		if(temp.hr>=24)
		{
			temp.hr=temp.hr%24;
		}
		if(temp.min>=60)
		{
			temp.hr++;
			temp.min=temp.min%60;
		}
		if(temp.sec>=60)
		{
			temp.min++;
			temp.sec=temp.sec%60;
		}
		return(temp);
	}

};
int main()
{
	Time t,t1(5,10,15),t2(23,70,10),t3=t1.add(t2);
	t.print();
	t1.print();
	t2.print();
	t3.print();

}
