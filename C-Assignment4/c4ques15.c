/*Program to perform string operations*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//function prototypes
void strreverse(char *s1);
int strcompare(char *s1, char *s2);
void stringcopy(char *s1, char *s2);
void strconcat(char *s1, char *s2);
int main()
{
int option,size;
char *s1, *s2;
printf("Enter the size of the string\n");
scanf("%d",&size);
//Dynamic memory allocation
s1 = (char*)malloc(size);
s2 = (char*)malloc(size);
printf("Enter your option\n");
printf("1. String Reverse\n2. String Compare\n3. String Copy\n4. String concatenate\n");
scanf("%d",&option);
switch(option)
{
case 1: strreverse(s1); break;
case 2: 
{
int result = strcompare(s1,s2);
if(result==0)
printf("Strings are equal");
else
printf("Strings are not equal");
break;
}
case 3: stringcopy(s1,s2); break;
case 4: strconcat(s1,s2); break;
default : break;
}
return 0;
}
//String reverse function
void strreverse(char *s1)
{
int i,j;
printf("Enter the string\n");
scanf("%s",s1);
j = strlen(s1)-1;//end of the string
for(i=0;i<(strlen(s1)-1),i<j;i++,j--)
{
int temp;
temp = s1[i];  // first and last values are swapped
s1[i] = s1[j];
s1[j] = temp;
}
//printing the string
for(i=0;i<(strlen(s1));i++)
printf("%c",s1[i]);
}
//String compare function
int strcompare(char *s1, char *s2)
{
int i=0;
printf("Enter string1\n");
scanf("%s",s1);
printf("Enter string2\n");
scanf("%s",s2);
while(s1[i]==s2[i])
{
i++;
if(s1[i]=='\0') // string1 has come to an end
return 0;
}
return(s1[i]-s2[i]); // difference of ascii value of leftout characters
}
//String copy function
void stringcopy(char *s1, char *s2)
{
int i=0;
printf("Enter string1\n");
scanf("%s",s1);
while((s2[i]=s1[i])!='\0') // moving character by character
i++;
//printing the string
for(i=0;i<(strlen(s2));i++)
printf("%c",s2[i]);
}
//String concatenate function
void strconcat(char *s1, char *s2)
{
int i=0,j=0;
printf("Enter string1\n");
scanf("%s",s1);
printf("Enter string2\n");
scanf("%s",s2);
while(s1[i]!='\0') // migrate to the end of first string
i++;
while((s1[i++]=s2[j++])!='\0'); // from the end, 2nd string is appended
//printing the string
for(i=0;i<(strlen(s1));i++)
printf("%c",s1[i]);
}

