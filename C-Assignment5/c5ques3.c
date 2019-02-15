#include<stdio.h>
int main()
{
enum menu {add,sub,mul,div};
enum menu option;
float r1 = 2,m,n,s;
float r2 = 4, i1 = 5,i2 = 3;
printf("Enter the option");
scanf("%d",&option);
m= ((r1*r2)-(i1*i2));
n= ((r1*i2)+(i1*r2));
s = (r2*r2)+(i2*i2);
switch(option)
{
case 0: printf("%f + i%f", r1+r2, i1+i2); break;
case 1: printf("%f + i%f", r1-r2, i1-i2); break; 
case 2: printf("%f + i%f",m,n ); break;
case 3: printf("%f + i%f", m/s, n/s); break;
default:break;
}
return 0;
}

