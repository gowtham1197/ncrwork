#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int replace(char s[50])
{
	int i,count=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		{
			s[i]='-';
			count++;
		}
	}
	return count;
}
int main()
{
	char s[50];
	printf("Enter the string\n");
	scanf("%[^\n]s",s);
	int ans=replace(s);
	printf("%s\n",s);
	printf("%d\n",ans);
	return 0;
}