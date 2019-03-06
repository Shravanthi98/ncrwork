#include<stdio.h>
int main()
{
int temp,dec,j,m,i=0,bin[8];
printf("enter a no\n");
scanf("%d",&dec);
temp=dec;
while(temp!=0)
{
bin[i]=temp%2;
temp=temp/2;
i++;
}
for(j=i-1;j>=0;j--)
printf("%d",bin[j]);
return 0;
}

