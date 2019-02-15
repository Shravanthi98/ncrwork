#include<stdio.h>
struct first{
int n;
char a;
} s;
union second{
int j;
char k;
} u;
int main()
{
printf("%d",sizeof(s));
printf("%d",sizeof(u));
return 0;
}