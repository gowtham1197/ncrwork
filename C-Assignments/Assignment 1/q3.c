#include <stdio.h>

int main(void) {
	// your code goes here
	int val=0xCAFE,a=(val&1)/1,b=(val&2)/2,c=(val&4)/4,d= (val&8)/8;
	int count=(val&1)/1 + (val&2)/2 + (val&4)/4 + (val&8)/8;
	//printf("%d",count);
	if(count>=3){
		printf("Atleast three of last four bits are set!\n");
	}
	else{
		printf("three of last four bits are not set!\n");
	}
	int var2=0,bit,num=val;
	for(int i=0;i<32;i++){
		bit=num&1;
		var2+=pow(2,(i+8)%16)*bit;
		num=num>>1;
		
	}
	printf("%X\n",var2);
//	printf("%d",val);
	val=val>>4;
	val=val+pow(2,12)*a+pow(2,13)*b+pow(2,14)*c+pow(2,15)*d;
	printf("%X\n",val);
	return 0;
}
