#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j,p;
char temp;
char *s,*s1; 
printf("Enter the number\n");
scanf("%d",&n);
printf("Enter the string\n");
s = (char*)malloc(n*sizeof(char));
s1 = (char*)malloc(n*sizeof(char));
scanf("%s",s);
printf("%s\t",s);
strcpy(s1,s);
p = n;
while(p!=1)
{
temp = *s1;
for(i=0;i<n-1;i++)
{
*(s1+i) = *(s+i+1);
}
*(s1+n-1) = temp;
for(j=0;j<n;j++)
printf("%c",*(s1+j));
printf("\t");
strcpy(s,s1);
p--;
}
return 0;
}