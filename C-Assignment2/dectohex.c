#include<stdio.h>

int main()
{
int n,j=0,i;
printf("enter a no");
scanf("%d",&n);
while(n!=0)
{
i=n%16;
j=j+i;
j=j*10;
}


int k=j;
int m,p=0;
while(k!=0)
{
m=k%10;

k=k/10;
if(k!=0)
p=p+(10*m);
else
p=p+m;
}
printf("hex value is %d",p);
return 0;
}




