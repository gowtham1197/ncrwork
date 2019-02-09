#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num=-1,numOfDigits=0,temp;
    printf("Enter the number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        temp=temp/10;
        numOfDigits++;
    }
    int sum=0;
    temp=num;
    while(temp>0){
            //printf("temp%10 :%d numofidg:%d \n",temp%10,numOfDigits);
        sum+=pow(temp%10,numOfDigits);
    //printf("sum :%d\n",sum);
        temp/=10;
    }
    if(sum==num)
        printf("%d is an amstromg number",num);
    else
        printf("%d is not an amstromg number",num);

        return 0;
}