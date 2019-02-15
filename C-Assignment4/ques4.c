#include<stdio.h>
int main()
{
int n;
char *cat="the cat sat";
n=replace(cat);
printf("%s",cat);
printf("\n");
printf("%d",n);
return 0;
}
int replace(char *p)
{
int c=0;
while(*p!='\0')
{
if(*p==' ')
{
*p='-';
c++;
}
p++;
}
return c;
}

