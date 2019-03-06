#include<stdio.h>
int main()
{
int n,temp,rem,c=0;
printf("Enter the number");
scanf("%d",&n);
temp =n;
while(temp!=0)
{
rem = temp%10;
if(rem==1)
c++;
temp = temp/10;
}
printf("%d",c);
return 0;
} 