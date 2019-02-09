#include<stdio.h>
int main()
{
	int x,y=1;
	printf("Enter a number: ");
	scanf("%d",&x);
	while(y<=256)
	{
		if(x&y)
			count++;
		y=y<<1;
	}
	printf("%d",count);
	return 0;
}