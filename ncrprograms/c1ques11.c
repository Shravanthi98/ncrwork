#include<stdio.h>
#include<math.h>
int main()
{
int n,b,res;
printf("Enter the integer\n");
scanf("%d",&n);
printf("Enter the number of bits to shift\n");
scanf("%d",&b);
rotate_right(n,b);
return 0;
}
int rotate_right(int n, int b)
{
int rem,temp,a,c=0;
a = n;
temp = n;
while(a!=0)
{
c++;
a = a/10;
}
while(b!=0)
{
rem = temp%10;
temp = temp/10;
rem = (rem*pow(10,c-1))+temp;
temp = rem;
b--;
}
printf("%d",rem);
return 0;
}
