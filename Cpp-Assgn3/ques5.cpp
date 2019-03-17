#include<iostream>
#include<string.h>
using namespace std;
class person{
char *name;
int age;
public:
void get_pdata()
{
name = new char[50];
cout<<"Enter the name"<<endl;
cin>>name;
cout<<"Enter age"<<endl;
cin>>age;
}
void put_pdata()
{
int size = strlen(name);
cout<<"Name = ";
for(int i=0; i<size;i++)
cout<<name[i];
cout<<endl;
cout<<"Age = "<<age<<endl;
}
};
class physique : virtual public person
{
float height;
float weight;
public:
void get_phdata()
{
cout<<"Enter the height"<<endl;
cin>>height;
cout<<"Enter the weight"<<endl;
cin>>weight;
}
void put_phdata()
{
cout<<"Height = "<<height<<endl;
cout<<"Weight = "<<weight<<endl;
}
};
class family : public virtual person
{
int numChildren;
char *religion;
public:
void get_fdata()
{
religion = new char[50];
cout<<"Enter the religion"<<endl;
cin>>religion;
cout<<"Enter the number of children"<<endl;
cin>>numChildren;
}
void put_fdata()
{
int size1 = strlen(religion);
cout<<"Religion = ";
for(int i=0;i<size1;i++)
cout<<religion[i];
cout<<endl;
cout<<"Num of Children = "<<numChildren<<endl;
}
};
class employee : public physique, public family
{
int empno;
float salary;
public:
void get_edata()
{
cout<<"Enter the employee number"<<endl;
cin>>empno;
cout<<"Enter the salary"<<endl;
cin>>salary;
}
void put_edata()
{
cout<<"Empno = "<<empno<<endl;
cout<<"Salary = "<<salary<<endl;
}
};
int main()
{
employee e1;
e1.get_pdata();
e1.get_phdata();
e1.get_fdata();
e1.get_edata();
e1.put_pdata();
e1.put_phdata();
e1.put_fdata();
e1.put_edata();
return 0;
}