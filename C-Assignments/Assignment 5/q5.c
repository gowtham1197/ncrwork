#include<stdio.h>

struct Date
{
	int day,month,year;
};
int month_days[]={31,28,31,30,31,30,31,31,30,31,30,31};
int leap_years(struct Date z)
{
	int year =z.year;
	if(z.month<=2)
	{
		year--;
	}
	return (year/4-year/100+year/400);
}
long int diff_years(struct Date a,struct Date b)
{
	int i;
	long int x=a.year*365+a.day;
	for(i=0;i<a.month-1;i++)
		x+=month_days[i];
	x+=(leap_years(a));
	long int y=b.year*365+b.day;
	for(i=0;i<b.month-1;i++)
		y+=month_days[i];
	y+=(leap_years(b));
	return abs(x-y);
}
int main()
{
	struct Date a,b;
	printf("Enter the dates in the day month year format\n");
	printf("Enter the first date\n");
	scanf("%d %d %d",&a.day,&a.month,&a.year);
	printf("Enter the second date\n");
	scanf("%d %d %d",&b.day,&b.month,&b.year);
	long int ans=diff_years(a,b);
	printf("The difference of dates is %d days\n",ans);
	return 0;
}