#include<stdio.h>
int main()
{
FILE *fp,*sp;
char ch;
fopen_s(&fp,"trials.txt","r");
fopen_s(&sp,"trials.txt","r");
ch=fgetc(fp);
while(ch!=EOF)
{
ch=fgetc(sp);
printf("%c",ch);
}
fclose(fp);
fclose(sp);
return 0;
}
