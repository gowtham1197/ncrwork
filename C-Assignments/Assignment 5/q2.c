#include<stdio.h>
struct str
{
	int x;
	char y;
};
union uni
{
	int x;
	char y;
};
int main()
{
	struct str str1;
	union uni uni1;
	printf("The size of structure is %d\n",sizeof(str1));
	printf("The size of union is %d\n",sizeof(uni1));
	return 0;
}