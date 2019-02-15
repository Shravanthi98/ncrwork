#include<stdio.h>
#include<string.h>
int main(){
char *s[]={"jheuejh","iydfoeree","hdoeuig","uggseyexbejk"};
int c=0,m,i,j;
for(i=0;i<4;i++)
{
for(j=0;*(*(s+i)+j)!='\0';j++)
{
if('e'==*(*(s+i)+j))
c++;
}
}
printf("%d",c);
return 0;
}