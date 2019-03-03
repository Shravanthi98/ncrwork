#include<iostream>
using namespace std;
class student{
int rollno;
char *name;
int *marks;
float totalmarks;
char grade;
public:
void get_data()
{
name= new char[20];
marks = new int[10];
}
friend ostream &operator<<(ostream &result, student &s);
friend istream &operator>>(istream &result1, student &s1);
friend void generate_results(student *s, int n);
};
void generate_results(student *s, int n)
{
for(int i=0;i<n;i++)
{
s[i].totalmarks = s[i].marks[0]+s[i].marks[1]+s[i].marks[2];
if(s[i].totalmarks>=290)
s[i].grade = 'A';
else if(s[i].totalmarks>=280)
s[i].grade = 'B';
else if(s[i].totalmarks>=270)
s[i].grade = 'C';
else if(s[i].totalmarks>=260)
s[i].grade = 'D';
else if(s[i].totalmarks>=250)
s[i].grade = 'E';
else
s[i].grade = 'F';
}
}
ostream &operator<<(ostream &result, student &s)
{
result<<"Name :"<<s.name<<endl<<"Rollno :"<<s.rollno<<endl;
result<<"Marks of Subjects :";
for(int i=0;i<3;i++)
result<<s.marks[i]<<" ";
result<<"Total Marks :"<<s.totalmarks<<endl<<"Grade :"<<s.grade<<endl;
return result;
}
istream &operator>>(istream &result1, student &s1)
{
result1>>s1.name;
result1>>s1.rollno;
for(int i =0;i<3;i++)
result1>>s1.marks[i];
return result1;
}
int main()
{
int n,i;
cout<<"Enter the number of students"<<endl;
cin>>n;
student s[5];
for(i=0;i<n;i++)
s[i].get_data();
cout<<"Enter the student details"<<endl;
for(i=0;i<n;i++)
cin>>s[i];
generate_results(s,n);
for(i=0;i<n;i++)
cout<<"Student details: "<<s[i]<<endl;
return 0;
}