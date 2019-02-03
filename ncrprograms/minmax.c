#include<stdio.h>
int main()
{
	int i[10],j=0,num=0,sum=0,temp,k=0;
	float av;
	printf("Please enter a number\n");
	while(1)
	{
		scanf("%i",&i[j]);
		if(i[j]<=0) 
			break;
		else
		{
			num++;
			sum = sum+i[j];
		}
		j++;
	}
	av = (float)sum/num;
	printf("Number = %d\n",num);
	printf("Average = %f\n",av);
	while(k<num-1)
	{
		for(j=0;j<num-1;j++)
		{
			if(i[j]>i[j+1])
			{
				temp = i[j+1];
				i[j+1] = i[j];
				i[j] = temp;
			}
		}
		k++;
	}
	printf("Minimum = %d\n",i[0]);
	printf("Maximum = %d\n",i[num-1]);
	return 0;
}
