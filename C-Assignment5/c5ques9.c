#include<stdio.h>
#include<string.h>
int main()
{
FILE *fp;
int n,ch;
char ch1,ch2;
char name[20],name1[20];
fp = fopen("sample1.txt","w+");
printf("Enter the characters\n");
scanf("%s",name);
n = strlen(name);
for(int i=0;i<n;i++)
{
ch = name[i];
if((ch>=97)&&(ch<=122))
{
ch = ch-32;
}
else
{
ch = ch+32;
}
ch1 = ch;
name1[i] = ch1;
}
fprintf(fp,"%s",name1);
rewind(fp);
ch2 = fgetc(fp);
printf("%c",ch2);
while(ch2!=EOF)
{
ch2 = fgetc(fp);
printf("%c",ch2);
}
fclose(fp);
return 0;
}