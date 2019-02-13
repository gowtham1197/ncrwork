#include<stdio.h>
#include<stdlib.h>

int main()
{
	//char arr[20];
	FILE * fp;
	fp=fopen("file.txt","r");
	while(!feof(fp))
	{
		printf("%c",fgetc(fp));
	}
    int var=fseek(fp,0,SEEK_SET);
    if(var==0){
        printf("\n");
        while(!feof(fp))
        {
            printf("%c",~(fgetc(fp)));
        }
    }
    else
        printf("Offset is wrong");

	return 0;
}
