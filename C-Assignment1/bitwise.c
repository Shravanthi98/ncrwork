#include<stdio.h>
int main()
{
	int val = 0xCAFE;
	int t1,t2,t3,t4,t5,t6;
	t1 = val&0x000F;
	if((t1==3)||(t1==15))
		printf("Yes\n");
	else
		printf("No\n");
	t2 = val&0x00FE;
	t2 = t2<<8;
	t3 = val>>8;
	t4 = t2+t3;
	printf("Reverse byte = %x\n",t4);
	t5 = val&0xFFF0;
	t5 = t5>>4;
	t6 = 0xE000+t5;
	printf("Rotate = %x\n",t6);
	return 0;
}

