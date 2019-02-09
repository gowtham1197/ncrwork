#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num,rem=0,ch;
    vector <int> n;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>1)
    {
        rem=num%16;
        num=num/16;
        n.push_back(rem);
    }
    for(int i=n.size()-1;i>=0;i--)
    {
        if(n[i]>9)
        {
            ch=n[i];
            switch(ch)
            {
                case 10:cout<<"A";
                break;
                case 11:cout<<"B";
                break;
                case 12:cout<<"C";
                break;
                case 13:cout<<"D";
                break;
                case 14:cout<<"E";
                break;
                case 15:cout<<"F";
                break;
            }
        }
        else
        cout<<n[i];
    }
    return 0;
}