#include<iostream>
using namespace std;
int count1=0;
class employee
{
int age;
char name[20];
public:
employee()
{
count1++;
age = 0;
name[20] = 0;
cout<<"Constructor"<<count1<<"has been invoked"<<endl;
}
employee(int a, char n[20])
{
count1++;
age = a;
for(int i=0;i<10;i++)
name[i] = n[i];
cout<<"Constructor"<<count1<<"has been invoked"<<endl;
}
employee(employee & e)
{
count1++;
age = e.age;
for(int i=0;i<10;i++)
name[i] = e.name[i];
cout<<"Constructor"<<count1<<"has been invoked"<<endl;
}
~employee()
{
cout<<"Destructor"<<count1<<"has been invoked"<<endl;
count1--;
}
};
int main()
{
employee e1;
{
employee e2;
employee e3(20,"Shravanthi");
employee e4(e3);
}
cout<<"Size of class"<<" "<<sizeof(employee)<<endl;
return 0;
}
