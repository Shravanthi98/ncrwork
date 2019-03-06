#include<stdio.h>
#include<math.h>
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
printf("%d\n",rem);
int bin;
bin=rem;
int j=0,k=0,i;
while(bin!=0)
{
  i = bin&1;
  j=j+(i*pow(2,k));
 bin=bin>>1;                 
k++;
}
printf("%d",j);
return 0;
}
