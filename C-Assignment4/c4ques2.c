#include<stdio.h>
int main()
{
char *color[6] = {"red","green","blue","white","black","yellow"};
printf("%d\n",color);
printf("%d\n",(color+2));
printf("%d\n",*(color+2));
return 0;
}
