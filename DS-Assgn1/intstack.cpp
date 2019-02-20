#include<stdio.h>
#include<iostream>
using namespace std;
struct stack1{
int top;
int *s;
int size;
};
class stack2
{
struct stack1 st;
public:
stack2()
{
st.top = -1;
st.s = NULL;
st.size = 0;
}
void get_size(int n)
{
st.size = n;
st.s = new int[st.size];
}
bool Isfull()
{
return (st.top==(st.size-1));
}
bool Isempty()
{
return (st.top==-1);
}
void push1(int ele)
{
if(!Isfull())
{
st.s[++st.top] = ele;
}
else
cout<<"Stack is full"<<endl;
}
int pop1()
{
int x = -999;
if(!Isempty())
x = st.s[st.top--];
else
cout<<"Stack is empty"<<endl;
return x;
}
int peek1()
{
int x = -999;
if(!Isempty())
x = st.s[st.top];
else
cout<<"Stack is empty"<<endl;
return x;
}
void display()
{
for(int i=0;i<=st.top;i++)
{
cout<<st.s[i]<<endl;
}
}
~stack2()
{
delete st.s;
}
};
int main()
{
stack2 s1;
int n,x;
cout<<"Enter the size"<<endl;
cin>>n;
s1.get_size(n);
s1.push1(1);
s1.push1(2);
s1.push1(3);
x = s1.peek1();
cout<<x<<endl;
s1.display();
return 0;
}


