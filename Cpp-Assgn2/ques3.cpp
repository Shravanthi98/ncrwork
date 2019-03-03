#include<iostream>
using namespace std;
class employee{
int empno;
char *name;
float salary;
public:
employee()
{
empno = 0;
name = NULL;
salary = 0;
}
void get_data()
{
name = new char[20];
}
void display()
{
cout<<"Employee name : "<<name<<endl;
cout<<"Employee number : "<<empno<<endl;
cout<<"Employee salary : "<<salary<<endl;
}
friend istream &operator>>(istream &result, employee &e);
~employee()
{
delete name;
}
};
istream &operator>>(istream &result, employee &e)
{
result>>e.empno>>e.name>>e.salary;
return result;
}
int main()
{
employee e[5];
int i;
for(i=0;i<5;i++)
e[i].get_data();
cout<<"Enter employee details"<<endl;
for(i=0;i<5;i++)
cin>>e[i];
for(i=0;i<5;i++)
e[i].display();
return 0;
}