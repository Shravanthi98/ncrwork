#include<stdio.h>
void delete(char * , char);
int main()
{
int n;
char *s1;
char c1;
printf("Enter the number");
scanf("%d",&n);
printf("Enter the string");
s1 = (char*)malloc(n*sizeof(char));
scanf("%s",s1);
printf("Enter the character");
scanf(" %c",&c1);
printf("\n");
delete(s1,c1);
return 0;
}
void delete(char *s1 , char c1)
{
char *s2;
s2 = s1;
int n,i,c=0;
n = strlen(s1);
while(*s2!='\0')
{
if(*s2 == c1)
{
for(i=0;i<n-c;i++)
{
*(s2+i) = *(s2+i+1);
}
}
s2++;
c++;
}
printf("%s",s1);
}


