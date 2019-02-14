#include<iostream>
#include<string.h>
using namespace std;

class student{
	string studentName;
	int marks1,marks2,marks3;
public:
	void set_Data(string name,int m1,int m2,int m3)
	{
        studentName=name;
		marks1=m1;
		marks2=m2;
		marks3=m3;
	}

	void calculate_avg()
	{
		cout<<"Average Marks is: "<<(float)(marks1+marks2+marks3)/3<<endl;
	}

	void compute_grade()
	{
		float avg=(float)(marks1+marks2+marks3)/3;
		if(avg>=60)
			cout<<"First Class\n";
		else if(avg>=50&&avg<60)
			cout<<"Second Class\n";
		else if(avg>=40&&avg<50)
			cout<<"Third Class\n";
		else
			cout<<"Fail\n";
	}

	void print()
	{
		cout<<studentName<<"\t"<<marks1<<"\t"<<marks2<<"\t"<<marks3<<endl;
	}

};

int main()
{
    student s1,s2,s3;
    s1.set_Data("Chandan",27,88,40);
    s2.set_Data("Krishna",97,87,78);
    s3.set_Data("Rathode",67,87,90);
    s1.print();
    s2.print();
    s3.print();
    s1.calculate_avg();
    s2.calculate_avg();
    s3.calculate_avg();
    s1.compute_grade();
    s2.compute_grade();
    s3.compute_grade();
    return 0;
}
