#include<stdio.h>
#include<string.h>
char* reverse(char* , char* , char* );
int main()
{
char *s="abcdef",*res,*p1,*p2;
p1=s;
p2=s+(strlen(s)-1);
res=reverse(s,p1,p2);
printf("%s",res);
return 0;
}
char* reverse(char *str , char *ptr1 , char *ptr2)
{
if(ptr1<ptr2)
{
char temp;
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
}
if(ptr1<ptr2)
return reverse(str,++ptr1,--ptr2);
else
return str;
}



