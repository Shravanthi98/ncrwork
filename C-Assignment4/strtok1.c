#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char *str = "I-am-Shravanthi";
char *str1;
int len = strlen(str);
str1 = (char*)malloc(len+1);
int i,j,k=0,temp = 0,temp1=0;
for(i=0;i<=len;i++)
{
if(str[i]=='-')
{
k=i;
temp1 = temp;
for(j=0;j<i-temp;j++)
{
str1[j] = str[temp1];
temp1++;
}
for(j=0;j<i-temp;j++)
{
printf("%c",str1[j]);
}
printf("\n");
}
if(i!=0)
temp = k+1;
if(str[i]=='\0')
{
j=0;
while(str[temp]!='\0')
{
str1[j] = str[temp];
temp++;
j++;
}
puts(str1);
}
}
return 0;
}