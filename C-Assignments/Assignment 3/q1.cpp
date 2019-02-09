#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the values: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum;
	cout<<"Enter the Sum: ";
	cin>>sum;

	int j=0,k=-1;
	int res=arr[j];

	for(int i=j+1;i<n+1;i++)
	{
	    //cout<<endl<<"hi ";
		if(res<sum){
			res=res+arr[i];
		}
		else if(res==sum){
            if(i==n)
                k=i-1;
            break;
		}
		else{
			while(res>sum)
			{
				res=res-arr[j];
				j++;
			}
			i--;
		}
        k=i;
	}
	cout<<j<<" "<<k;
	return 0;
}
