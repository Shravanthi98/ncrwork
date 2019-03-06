#include<stdio.h>
int main()
{
int rows=5,n,i,s;
for(i=1;i<=rows;i++)
{
for(s=1;s<=rows-i;s++)
printf(" ");
for(n=i;n>1;n--)
printf("%d",n);
for(n=1;n<=i;n++)
printf("%d",n);
printf("\n");
}
return 0;
}