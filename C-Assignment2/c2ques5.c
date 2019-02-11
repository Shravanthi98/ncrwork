#include<stdio.h>

int main()

{
	
int n,temp,rem,res=0;
	
printf("Enter a number");
	
scanf("%d",&n);
	
temp = n;
	
while(temp!=0)
	
{
		
rem = temp%10;
		
res = (res*10)+rem;
		
temp = temp/10;

}

printf("%d",res);
	
return 0;

}
