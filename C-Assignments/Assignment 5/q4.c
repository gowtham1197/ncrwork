#include<stdio.h>

int main()
{
	unsigned int num=1;
	char *s=(char *)&num;
	if(*s)
		printf("The processor is little endian\n");
	else
		printf("The processor is Big endian\n");
	return 0;
}