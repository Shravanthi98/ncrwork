#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Common result for all operations
float res = -1;
char *s1, *s2;
//function prototypes, definitions in other files
float div1(int, int);
float mul(int, int);
float add(int, int);
float sub(int, int);
void arrange(int, float);
int main()
{

	int op1, op2,i;
	s1 = (char*)malloc(sizeof(char) * 20);
	s2 = (char*)malloc(sizeof(char) * 20);
	// expression to be evaluated
	printf("Enter an expression \n");
	gets(s1);
	printf("s1 is ");
	puts(s1);
	int n = strlen(s1);
	for (i = 0;i < n;i++)
	{
		if (((s1[i] >= '0') && (s1[i] <= '9')) || (s1[i] == '/') || (s1[i] == '*') || (s1[i] == '+') || (s1[i] == '-'))
		{
		}
		else
		{
			printf("Invalid Input\n");
			exit(1);
		}
	}
			// Check for division first
			for (int i = 0; s1[i] != '\0'; i++)
			{
				if (s1[i] == '/')
				{
					op1 = s1[i - 1];
					op2 = s1[i + 1];
					op1 = op1 - 48;
					op2 = op2 - 48;
					res = div1(op1, op2);
					arrange(i, res);
				}
			}
			// Check for multiplication second
			for (int i = 0; s1[i] != '\0'; i++)
			{
				if (s1[i] == '*')
				{
					op1 = s1[i - 1];
					op2 = s1[i + 1];
					op1 = op1 - 48;
					op2 = op2 - 48;
					res = mul(op1, op2);
					arrange(i, res);
				}
			}
			// Check for addition third
			for (int i = 0; s1[i] != '\0'; i++)
			{
				if (s1[i] == '+')
				{
					op1 = s1[i - 1];
					op2 = s1[i + 1];
					op1 = op1 - 48;
					op2 = op2 - 48;
					res = add(op1, op2);
					arrange(i, res);
				}
			}
			// Check for subtraction last
			for (int i = 0; s1[i] != '\0'; i++)
			{
				if (s1[i] == '-')
				{
					op1 = s1[i - 1];
					op2 = s1[i + 1];
					op1 = op1 - 48;
					op2 = op2 - 48;
					res = sub(op1, op2);
					arrange(i, res);
				}
			}
	// Final result
	printf("the result is :%c",s1[0]);
	free(s1);
	free(s2);
	getchar();
	return 0;
}	
// function to re-arrange after 1 evaluation
void arrange(int pos, float result)
{
	int j = 0;
	// pushing the before part of operator
	if ((pos - 2) >= 0)
	{
		for (j = 0; j <= pos - 2; j++)
			s2[j] = s1[j];
	}
	// pushing the result of 1 operation

	s2[j] = result + '0';
		int y = j + 1;
		for (int k = pos + 2; s1[k] != '\0'; k++)
		{
			s2[y] = s1[k];
			y++;
		}
		// pushing the after part of operator
		int g;
		for (g = 0; s2[g] != '\0'; g++)
			s1[g] = s2[g];
}

