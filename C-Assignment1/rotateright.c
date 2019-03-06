#include<stdio.h>
int rotate_right(int,int);
int count = 0;
int main()
{
  int n,rem,temp,b,x;
printf("Enter a number");
scanf("%d",&n);
temp=n;
printf("enter number of right shifts");
scanf("%d",&b);
if(temp%2)
{
rem=0;
for(i=0;i<b;i++)
{
x=(temp%2);
temp=temp/2;
rem=rem*10+x;
}
}
else
{
rem =1;
for(i=0;i<b;i++)
{
x=(temp%2);
temp=temp/2;
rem=rem*10+x;
}
}
printf("%d",rem);


results=rotate_right(n,b);
printf("result is :%d",results);
return 0;
}

int rotate_right(int x,int y)
{
int t1,t2,t3;
t1=n>>b;
t2=x>>y;
t3=t1+t2;
printf("%d",t1);
printf("%d",t2);
return t3;
}


