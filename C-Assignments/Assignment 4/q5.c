#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[20];
	int num,i;
	printf("Enter the string\n");
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>=65&&s[i]<=90)
		{
			s[i]+=32;
		}
		else if(s[i]>=97&&s[i]<=122)
		{
			s[i]-=32;
		}
	}
	printf("Result is %s\n",s);
	return 0;
}
