#include <bits/stdc++.h>

using namespace std;
int prime(int);

int main()
{
    int a,b;
    cout<<"Enter intervals: ";
    cin>>a>>b;
    for(int i=a+1;i<b;i++)
    {
        if(prime(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}

int prime(int num)
{
    for(int j=2;j<=sqrt(num);j++)
    {
        if(num%j==0)
            return false;
    }
    return true;
}
