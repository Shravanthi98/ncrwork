#include<stdio.h>
int main()
{
int a,b,i,sum = 0;
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
printf("Enter the indices");
scanf("%d %d",&a,&b);
for(i = a;i<=b;i++)
{
sum = sum+arr[i];
}
printf("%d",sum);
return 0;
}
