#include<stdio.h>
int main()
{
int c,a,b,i;
printf("Enter the range");
scanf("%d %d",&a,&b);
while(a<b)
{
c=0;
for(i=2;i<a;i++)
{
if((a%i)==0)
{
c++;
}
}
if(c==0)
{
printf("%d\t",a);
}
a++;
}
return 0;
}

