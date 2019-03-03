/* Program to expand the string in s1 to s2*/
#include<stdio.h>
#include<stdlib.h>
void expand1(char * , char *);
int main()
{
char *s1;
char *s2;
// Allocating memory dynamically
s1 = (char*)malloc(200);
s2 = (char*)malloc(200);
//Taking the string as input
printf("Enter the string\n");
gets(s1);
//function call
expand1(s1,s2);
return 0;
}
void expand1(char *s1,char *s2)
{
int len = strlen(s1);
int diff,i,j=0,g,h,k=0;
char ch;
for(i=0;i<len;i++)
{
if(s1[i]=='-')
{
g = s1[i+1];
h = s1[i-1];
// diff = number of elements in between
diff = g-h;
diff = diff+i;
ch = s1[i-1];
for(k=i;k<diff;k++)
{
//moving inbetween values to s2 at appropriate location
s2[j] = ++ch;
j++;
}
i++;
}
else
{
// copy of s1 to s2
s2[j]= s1[i];
j++;
}
}
// printing the string s2
for(i = 0;i<j;i++)
printf("%c",s2[i]);
}

