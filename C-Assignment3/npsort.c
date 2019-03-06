#include<stdio.h>
int main()
{
int temp,i=1,j,k;
int arr[10] = {-12,11,-13,-5,6,-7,5,-3,-6};
while(i<9)
{
for(j=0;j<9-i;j++)
{
if((arr[j]>0)&&(arr[j+1]<0))
{
temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
i++;
}
for(k=0;k<9;k++)
printf("%d  ",arr[k]);
return 0;
}
