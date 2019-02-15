#include<stdio.h>
struct time1
{
int sec1;
int min1;
int hours1;
} t1;
int main()
{
printf("Enter current time in hours, min, sec\n");
scanf("%d %d %d", &t1.hours1, &t1.min1, &t1.sec1);
printf("Current time = %d  %d  %d ", t1.hours1, t1.min1, t1.sec1);
return 0;
}