#include<stdio.h>
#include<string.h>
#include<ctype.h>
void reverse(char *s,int low,int high)
{
	if(low>=high)
	{
		return;
	}
	char ch=s[low];
	s[low]=s[high];
	s[high]=ch;
	reverse(s,low+1,high-1);
	return ;
}
int main()
{
	char s[50];
	printf("Enter the string\n");
	scanf("%[^\n]s",s);
	reverse(s,0,strlen(s)-1);
	printf("Reversed string is %s\n",s);
	return 0;
}