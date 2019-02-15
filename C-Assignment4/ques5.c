#include<stdio.h>
int main()
{
char *str1="hello",*str2="HELLO";
char* s1=str1;
char* s2=str2;
while(*s1!='\0')
{
int l,b=32,u;
l=*s1;
u=l-b;
*s1=u;
s1++;
}
printf("%s",str1);
printf("\n");
while(*s2!='\0')
{
int l1,b=32,u1;
u1=*s2;
l1=u1+b;
*s2=l1;
s2++;
}
printf("%s",str2);
return 0;
}


