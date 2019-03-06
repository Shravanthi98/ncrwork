#include<stdio.h>
int main()
{
  int n,rem,temp,x;
printf("Enter a number");
scanf("%d",&n);
temp=n;
if(temp%2)
{
rem=0;
while(temp)
{
x=(temp%2);
temp=temp/2;
rem=rem*10+x;
}
}
else
{
rem =1;
while(temp!=1)
{
x=(temp%2);
temp=temp/2;
rem=rem*10+x;
}
}
printf("%d",rem);
return 0;
}
