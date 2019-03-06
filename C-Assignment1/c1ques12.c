#include<stdio.h>
int main()
{
int n,p,b
printf("Enter the integer");
scanf("%d",&n);
printf("Enter the number of bits");
scanf("%d",&b);
printf("Enter the position");
scanf("%d",&p);
invertponwards(n,p,b);
return 0;
}
int invertponwards(int n, int p, int b)
{
while(p!=0)
{
rem = temp%10;
