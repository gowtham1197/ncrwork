#include<stdio.h>
#include<string.h>
int main()
{
	char *s[]= {"we will teach you how to ","Move a mountain " ,"Level a building " ,"Erase the past ","Make a million " };
	int count=0,i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<strlen(s[i]);j++)
			if(s[i][j]=='e')
				count++;
	}
	printf("Number of e(s) is/are %d",count);
	return 0;
}