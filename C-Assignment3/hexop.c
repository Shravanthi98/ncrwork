#include<stdio.h>
#include<math.h>
int main()
{
int dec,temp,j,i=0,rem=0,sum=0,k;
char hex[5];
printf("enter a no\n");
scanf("%d",&dec);
temp=dec;
while(temp!=0)
{
rem=temp%16;
if(rem<=9)
hex[i]=rem+'0';
else
hex[i]=rem+55;
i++;
temp=temp/16;
}
for(j=i-1;j>=0;j--)
printf("%c",hex[j]);

printf("\n");

for(k=0;k<i;k++)
{
int a=hex[k];
if((a>=48)&&(a<=57))
sum=sum+((a-48)*pow(16,k));
else
sum=sum+((a-55)*pow(16,k));

}
printf("%d\n",sum);

temp=sum;
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
printf("%d",rem);

return 0;
} 
