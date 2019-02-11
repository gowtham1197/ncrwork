#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void delete(char s[50],char c)
{
	int a=0,i;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==c)
			continue;
		s[a++]=s[i];
	}
	s[a]='\0';
}
int main(int argc, char const *argv[])
{
	char s[50],c;
	printf("Enter the string and the character with space between: ");
	scanf("%s %c",s,&c);
	delete(s,c);
	printf("Resultant string is: ");
	printf("%s\n",s);
	return 0;
}