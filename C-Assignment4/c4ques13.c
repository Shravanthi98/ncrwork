/* Program to expand the string in s1 to s2*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void expand1(char * , char *);
int main()
{
char *s1;
char *s2;
int i,n;
// Allocating memory dynamically
s1 = (char*)malloc(200);
s2 = (char*)malloc(200);
//Taking the string as input
printf("Enter the string\n");
gets(s1);
n = strlen(s1);
printf("%d\n", n);
for (i = 0;s1[i] != '\0';i++)
{
	if (((s1[i] >= '0') && (s1[i] <= '9')) || ((s1[i] >= 'a') && (s1[i] <= 'z')) || (s1[i] == '-'))
	{
		if ((s1[i] == '-') && (s1[i + 1] == '-'))
		{
			printf("Invalid input\n");
			break;
		}
	}
	else
	{
		printf("Invalid input\n");
		break;
	}
}
//function call
if(i==n) // if the input is valid
expand1(s1, s2);
free(s1);
free(s2);
return 0;
}
void expand1(char *s1,char *s2)
{
int len = strlen(s1);
int diff,i,j=0,g,h,k=0;
char ch;
for(i=0;i<len;i++)
{
	if (s1[i] == '-')
	{
		g = s1[i + 1];
		h = s1[i - 1];
		if ((((h >= 48) && (h <= 57)) && ((g >= 48) && (g <= 57))) || (((h >= 97) && (h <= 122)) && ((g >= 97) && (g <= 122))))
		{
			// diff = number of elements in between
			diff = g - h;
			diff = diff + i;
			ch = s1[i - 1];
			for (k = i;k < diff;k++)
			{
				//moving inbetween values to s2 at appropriate location
				s2[j] = ++ch;
				j++;
			}
			i++;
		}
		else
		{
			printf("Invalid Input, cannot expand the string between a number and a character\n");
			break;
		}
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

