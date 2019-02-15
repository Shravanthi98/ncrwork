#include<stdio.h>
#include<string.h>
int main()
{
char a[5][5],b[5],temp;
int i,j,n,m,k,p;
printf("Enter n");
scanf("%d",&n);
for(i = 0;i<n;i++)
{
printf("Enter string");
scanf("%s",a[i]);
}
for(p=0;p<n;p++)
{
strcpy(b,a[p]);
k=strlen(b);
for(m=0;m<k-1;m++)
{
for(j=0;j<k-m-1;j++)
{ 
if(b[j]>b[j+1])
{
temp = b[j];
b[j] = b[j+1];
b[j+1] = temp;
}
}
}
printf("%s",b);
printf("\t");
}

return 0;
}