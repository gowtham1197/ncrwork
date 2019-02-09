#include <bits/stdc++.h>

using namespace std;
int rev(int);
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<rev(num);
    return 0;
}

int rev(int num)
{
    int res=0,val;
    while(num>0)
    {
    	val=num%10;
    	num=num/10;
    	res=res*10+val;
    }
    return res;
}
