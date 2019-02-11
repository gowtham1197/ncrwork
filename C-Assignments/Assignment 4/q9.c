#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int any(char s[50],char a[10])
{
	int i,j;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==a[0])
		{
			int index=i;
			for(j=0;j<strlen(a)&&i<strlen(s);i++,j++)
			{
				if(s[i]!=a[j])break;
			}
			if(j==strlen(a))
				return index;
		}
	}
	return -1;
}
int main()
{
	printf("Enter the strings: ");
	char s[50],a[10];
	scanf("%[^\n]s",s);
	printf("Enter the string to match with: ");
	scanf("%s",a);
	int res=any(s,a);
	if(res==-1)
		printf("Not found\n");
	else
	printf("result is %d\n", res);
	return 0;
}