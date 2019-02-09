#include<stdio.h>

int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the values: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int high=n,low=0;
	while(low<high)
	{
		while(arr[low]<0)
			low++;
		while(arr[high]>=0)
			high--;
			if(low<high)
			{
				int temp=arr[low];
				arr[low]=arr[high];
				arr[high]=temp;
			}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}
