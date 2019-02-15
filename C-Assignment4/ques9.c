#include<stdio.h>
void any(char * , char *);
int main()
{
char *s1 = "hello";
char *s2 = "byl";
any(s1,s2);
return 0;
}
void any(char *str1 , char *str2)
{
char *p1 = str1,*p2 = str2;
int c = 0;
while(*p1!='\0')
{
p2 = str2;
while(*p2!='\0')
{
if(*p1 == *p2){
printf("%d", (p1-str1));
c++;
}
p2++;
}
if(c==0)
p1++;
else
break;
}
}