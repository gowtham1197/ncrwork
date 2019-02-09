#include<stdio.h>
void masking(int num)
{
	int ch1,a;
			printf("1.And\n2.OR\n3.XOR\n");
			scanf("%d",&ch1);
			switch(ch1)
			{
				case 1:
				printf("Enter number to do AND with: ");
				scanf("%x",&a);
				printf("%x\n",num&a);
				break;
				case 2:
				printf("Enter number to do OR with: ");
				scanf("%x",&a);
				printf("%x\n",num|a);
				break;
				case 3:
				printf("Enter number to do XOR with: ");
				scanf("%x",&a);
				printf("%x\n",num^a);
				break;
			}
}

void shifting(int num)
{
	int ch2;int k;
				printf("How Many bits do you want to shift?: ");
				scanf("%d",&k);
				printf("1.Left Shift\n2.Right Shift\n");
				scanf("%d",&ch2);
				switch(ch2)
				{
					case 1:printf("%x\n",num<<k);
					break;
					case 2:printf("%x\n",num>>k);
					break;
				}
}

int main()
{
	int num;
	printf("Enter a hexa decimal Number: ");
	scanf("%x",&num);
	while(1){
		int ch;
		printf("1.Display the hexadecimal equivalent of the one’s complement\n2.Carry out a masking operation\n3.Carry out a bit shifting operation\n4.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("%x",~num);
			break;
			case 2:masking(num);
			break;
			case 3:shifting(num);
			break;
			case 4:  exit(0);

		}
	}
	return 0;
}
