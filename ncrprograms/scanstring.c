#include<stdio.h>
int main()
{
	char text[80];
	int i =0,b=0,l=0,t=0,d=0;
	printf("Enter characters");
	scanf("%[^\n]s",text);
	while(i<81)
	{
		if((text[i]>='a')&&(text[i]<='z'))
			l++;
		else if(text[i] =='\t')
			t++;
		else if(text[i] ==' ')
			b++;
		else if((text[i]>='0'&&(text[i]<='9')
			d++;

		i++;
		}
	printf("Alphabets = %d",l);
	printf("Tabs = %d",t);
	printf("Spaces = %d",b);
	printf("digits = %d",d);
	return 0;
	}
