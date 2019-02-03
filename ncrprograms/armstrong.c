#include<stdio.h>
int main()
{
	int number,temp,rem,result;
	printf("Enter a number");
	scanf("%d",&number);
	temp = number;
	while(temp!=0)
	{
		rem = temp%10;
		result = result+(rem*rem*rem);
		temp = temp/10;
	}
	if(result== number)
		printf("Yes");
	else
		printf("No");
	return 0;
}
