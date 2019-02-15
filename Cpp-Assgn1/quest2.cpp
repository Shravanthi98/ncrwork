#include<iostream>
#include<string.h>
using namespace std;
class student
{
char name[10];
char grade;
int m1,m2,m3;
public:
int avg;
void set(char *s,char grad,int x,int y,int z)
{
strcpy(name,s);
grade=grad;
m1=x;
m2=y;
m3=z;
}
void average()
{
  
avg=(m1+m2+m3)/3;
}
void display()
{
cout<<name<<endl<<grade<<endl<<m1<<endl<<m2<<endl<<m3;
}

void gradcomp()
{
if(avg>=60)
grade='A';
else if(avg>50)
grade='B';
else if(avg>40)
grade='C';
else 
grade='F';
}
};
int main()
{
student s1;
s1.set("megh",'-',23,45,67);
s1.average();
s1.gradcomp();
s1.display();
return 0;
}




