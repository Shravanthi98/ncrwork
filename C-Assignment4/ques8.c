#include<stdio.h>
#include<string.h>
int main()
{
char*s[5];
int i,j=0;
char name[12];
int m,n;
printf("enter no ");
scanf("%d",&m);
for(i=0;i<m;i++)
{
printf("enter name");
scanf("%s",name);
n=strlen(name);
s[i]=(char*)malloc(n*sizeof(char));
strcpy(s[i],name);
}

for(i=0;i<m;i++)
{
j=0;
while(*(*(s+i)+j)!='\0')
{
printf("%c",*(*(s+i)+j));
j++;
}
printf("\t");
}
return 0;
}