#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rem=0,sum=0,ch;
    string s;
    //vector <int> n;
    cout<<"Enter a number: ";
    cin>>s;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]>47&&s[i]<58)
        {
            sum=sum+(pow(16,rem)*(s[i]-'0');
            rem++;
        }
        else{
            ch=s[i];
                switch(ch)
                {
                    case 'A':sum=sum+(pow(16,rem)*10);
                    rem++;
                    break;
                    case 'B':sum=sum+(pow(16,rem)*11);
                    rem++;
                    break;
                    case 'C':sum=sum+(pow(16,rem)*12);
                    rem++;
                    break;
                    case 'D':sum=sum+(pow(16,rem)*13);
                    rem++;
                    break;
                    case 'E':sum=sum+(pow(16,rem)*14);
                    rem++;
                    break;
                    case 'F':sum=sum+(pow(16,rem)*15);
                    rem++;
                    break;
                }
        }
    }
    cout<<sum;
    return 0;
}