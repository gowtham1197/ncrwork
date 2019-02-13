#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i;
	FILE *fp1,*fp;
	fp1=fopen("file.txt","w");
	char arr[50],c;
	scanf("%[^\n]s",arr);

	for(i=0;i<strlen(arr);i++)
	{
		c=arr[i];
		if(c>=65&&c<=90)
		{
			c+=32;
			fputc(c,fp1);
		}
		else if(c>=97&&c<=122)
		{
			c-=32;
			fputc(c,fp1);
		}
		else
			fputc(c,fp1);

	}
	printf("Current Postion through ftell(): %d\n",ftell(fp1));
    int var=fseek(fp1,-3,SEEK_CUR);
	if(var==0)
        printf("Current Postion through ftell() after changing the postion of pointer:%d\n",ftell(fp1));
    else
    printf("Wrong offset in fseek");

    return 0;
}
