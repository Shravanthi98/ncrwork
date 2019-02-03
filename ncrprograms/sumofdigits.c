#include<stdio.h>
int main()
{
	int sum=0,n,rem,temp;
	printf("Enter a number");
	scanf("%d",&n);
	temp = n;
	while(temp!=0)
	{
		rem = temp%10;
		sum = sum+rem;
		temp = temp/10;
	}
	printf("Sum = %d",sum);
	return 0;
}
