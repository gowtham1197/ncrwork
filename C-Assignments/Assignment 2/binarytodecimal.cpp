#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
 
int main()
{
	string s;
	cin>>s;
	//cout<<s<<endl;
	int j=0,sum=0;
	for(int i=s.length()-1;i>=0;i--)
	{
		//cout<<"Index: "<<s[i]<<endl;
		if(s[i]=='0')
		{
			j++;
			continue;
		}
		else
		{
			sum=sum+pow(2,j);
			//cout<<"sum:"<<sum<<endl;
			j++;
		}
		
	}
	cout<<sum;
	return 0;
}