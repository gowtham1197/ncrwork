#include <bits/stdc++.h>

using namespace std;
int fact(int);
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<fact(num);
    return 0;
}

int fact(int num)
{
    if(num==1)
        return 1;
    else
        return num*fact(num-1);
}
