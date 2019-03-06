#include<stdio.h>
#include<math.h>
int main()
{
  int n,temp,x;
long int rem;
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
printf("%ld\n",rem);
long int bin;
bin=rem;
int j=0,k=0,i;
while(bin!=0)
{
  i = bin%10;;
  j=j+(i*pow(2,k));
 bin=bin/10;                 
k++;
}
printf("%d\n",j);
printf("%lX\n",j);
return 0;
}
