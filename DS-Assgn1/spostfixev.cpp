#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
struct stack1{
int top;
char *s;
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
st.s = new char[st.size];
}
bool Isfull()
{
return (st.top==(st.size-1));
}
bool Isempty()
{
return (st.top==-1);
}
void push1(char ele)
{
if(!Isfull())
{
st.s[++st.top] = ele;
}
else
cout<<"Stack is full"<<endl;
}
char pop1()
{
char x;
if(!Isempty())
x = st.s[st.top--];
else
cout<<"Stack is empty"<<endl;
return x;
}
char peek1()
{
char x;
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
void mul()
{
int a,b,c;
b = pop1();
b = b-48;
a = pop1();
a = a-48;
c = a*b;
c = c+48;
push1(c);
}
void div()
{
int a,b,c;
b = pop1();
b = b-48;
a = pop1();
a = a-48;
c = a/b;
c= c+48;
push1(c);
}
void add()
{
int a,b,c;
b = pop1();
b = b-48;
cout<<b<<endl;
a = pop1();
a = a-48;
cout<<a<<endl;
c = a+b;
c = c+48;
push1(c);
}
void sub()
{
int a,b,c;
b = pop1();
b = b-48;
a = pop1();
a = a-48;
c = a-b;
c = c+48;
push1(c);
}
~stack2()
{
delete st.s;
}
};
int main()
{
stack2 s1;
char y[20] = "12*3-";
int len = strlen(y);
int n;
cout<<"Enter the size"<<endl;
cin>>n;
s1.get_size(n);
for(int i=0;i<len;i++)
{
switch(y[i])
{
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':
{
s1.push1(y[i]);
break;
}
case '*': s1.mul();break;
case '/': s1.div();break;
case '+': s1.add();break;
case '-': s1.sub();break;
default: break;
}
}
int res = s1.peek1();
res = res-48;
cout<<res;
return 0;
}

