#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num=-1,rem;
	cout<<"Enter number:"<<endl;
	cin>>num;
	vector <int> n;
	while(num!=0)
	{
		rem=num&1;
		n.push_back(rem);
		num=num>>1;
	}
	//cout<<n.size();
    for(int i=n.size()-1;i>=0;i--)
      {
        cout<<n[i];
      }
}
