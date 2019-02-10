#include<stdio.h>
#include<stdlib.h>
void delete(char * , char);
int main()
{
char *s1 = NULL;
char c1;
printf("Enter the string");
gets(s1);
printf("\n");
printf("Enter the character");
getchar(c1);
printf("\n");
delete(s1,c1);
return 0;
}
void delete(char *s1 , char c1)
{
while(*s1!='\0')
{
if(*s1 == c1)
{
while(*s1!='\0')
{
*s1 = *(++s1);
}
}
else
s1++;
}
printf("%s",s1);
}


