#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE * fp;
	fp=fopen("file.txt","r");
	while(!feof(fp))
	{
		printf("%c",fgetc(fp));
	}
	return 0;
}
