#include<stdio.h>
#include<math.h>
int main()
{
int temp,rem=0,sum=0,k,m,i=0,j,bin[8],n = 0,q=0,w;
char hex[5];
printf("enter a no\n");
for(m=0;m<4;m++)
scanf("%c",&hex[m]);

for(k=m-1;k>=0;k--)
{
int a=hex[k];
if((a>=48)&&(a<=57))
{
sum=sum+((a-48)*pow(16,n));
n++;
}
else
{
sum=sum+((a-55)*pow(16,n));
n++;
}
}
printf("%d\n",sum);

temp=sum;
while(temp!=0)
{
bin[i]=temp%2;
temp=temp/2;
i++;
}

for(w=i;w<=15;w++)
bin[w]=q;

for(j=15;j>=0;j--)
printf("%d",bin[j]);

i=0;
j=0;
for(i=0;i<16;i++)
{
if(bin[i]==1)
bin[i]=0;
else
bin[i]=1;
}
printf("\n");`
for(j=15;j>=0;j--)
printf("%d",bin[j]);
printf("\n");


return 0;
} 