#include<stdio.h>
int main()
{
int p=500000,t=10,r=5,n;
double c,ci,si;
printf("enter the number of times to be compounded per year");
scanf("%d",&n);
si=(p*t*r)/100;
printf("the simple interest is:%lf",si);
c=p*(1+(r/n))^(n*t);
ci=c-p;
printf("the compound interest is:%lf",ci);

return 0;
}
