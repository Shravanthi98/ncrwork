#include<stdio.h>
int main()
{
	int n,temp,rem,res;
	printf("Enter a number");
	scanf("%d",&n);
	temp = n;
	while(temp!=0)
	{
		rem = temp%10;
		res = (res*10)+rem;
		temp = temp/10;
	}
	if(n == res)
		printf("Yes");
	else
		printf("No");
	return 0;
}
