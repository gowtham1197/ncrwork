#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int num;
	printf("enter the no of strings: ");
	scanf("%d",&num);
	char *s[num];
	for(int i=0;i<num;i++)
	{
		s[i]=(char *)malloc(sizeof(char)*10);
		scanf("%s",s[i]);
	}
	for(int i=0;i<num;i++)
	{
		printf("%s\n",s[i] );
	}
	for(int i=0;i<num;i++)
	{
		free(s[i]);
	}
	free(s);
	return 0;
}