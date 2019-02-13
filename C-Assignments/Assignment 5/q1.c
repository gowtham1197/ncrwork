#include <stdio.h>
struct time{
	int hr,min,sec;
};
int main()
{
	struct time x;
	printf("Enter the time in hrs mins and seconds : ");
	scanf("%d %d %d",&x.hr,&x.min,&x.sec);
	printf("Time is : %d:%d:%d\n",x.hr,x.min,x.sec );
}