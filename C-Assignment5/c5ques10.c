#include<stdio.h>
#include<string.h>
int main()
{
FILE *fp;
char name[20],str[20];
char ch;
int i=0,r,c=0;
fp = fopen("cc.txt","w+");
if(fp==NULL)
{
printf("Cannot open file");
exit(0);
}
fprintf(fp,"%s %c %s %c%s %c %s %c%s %c %s %c%s %c %s %c%s %c %s","India",'-',"Delhi",'\n',"Bangladesh",'-',"Dhaka",'\n',"Pakistan",'-',"Islamabad",'\n',"Russia",'-',"Moscow",'\n',"Italy",'-',"Rome");
printf("Enter the country");
scanf("%s",name);
ch = fgetc(fp);
rewind(fp);
while(ch!=EOF)
{
fscanf(fp,"%s",str);
r=strcmp(str,name);
if(r==0)
{
fseek(fp,3,SEEK_CUR);
ch = fgetc(fp);
printf("%c",ch);
if(c==4)
{
while(ch!=EOF)
{
ch = fgetc(fp);
printf("%c",ch);
}
}
else
{
while(ch!='\n')
{
ch = fgetc(fp);
printf("%c",ch);
}
}
rewind(fp);
exit(0);
}
else
{
c++;
ch = fgetc(fp);
while(ch!='\n')
{
ch = fgetc(fp);
}
}
}
fclose(fp);
return 0;
}