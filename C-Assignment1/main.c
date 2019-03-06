#include<stdio.h>
int res =-1;
long int res1 =-1;
float res2 =-1;
long int mul(int , int);
float div(int , int);
int main()
{
int a=4,b=2;
res = add(a,b);
printf("%d",res);
res = sub(a,b);
printf("%d",res);
res1 = mul(a,b);
printf("%ld",res1);
res2 = div(a,b);
printf("%f",res2);
getch();
return 0;
}


