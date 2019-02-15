#include<stdio.h>
int main()
{
FILE *fp;
fp = fopen("sample.txt","r");
if(fp==NULL)
{
printf("Cannot open file\n");
exit(0);
}
char ch;
ch = fgetc(fp);
printf("%c",ch);
for(;ch!=EOF;)
{
ch = fgetc(fp);
printf("%c",ch);
}
fclose(fp);
return 0;
}