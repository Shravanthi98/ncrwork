#include<iostream>
#include<stdio.h>
#include<string.h>
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
int x;
if(!Isempty())
x = st.s[st.top--];
else
cout<<"Stack is empty"<<endl;
return x;
}
int peek1()
{
int x;
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
a = pop1();
c = a*b;
push1(c);
}
void div()
{
int a,b,c;
b = pop1();
a = pop1();
c = a/b;
push1(c);
}
void add()
{
int a,b,c;
b = pop1();
a = pop1();
c = a+b;
push1(c);
}
void sub()
{
int a,b,c;
b = pop1();
a = pop1();
c = a-b;
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
char y[20] = "12@30@-";
int len = strlen(y);
int n,b,a=0;
cout<<"Enter the size"<<endl;
cin>>n;
s1.get_size(n);
for(int i=0;i<len;i++)
{
while((i<len)&&(y[i]!='@'))
{
switch(y[i])
{
case '0':
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
b = y[i];
b = b-48;
a = (a*10)+b;
break;
}
case '*': s1.mul();break;
case '/': s1.div();break;
case '+': s1.add();break;
case '-': s1.sub();break;
default: break;
}
i++;
}
if(y[i]=='@')
{
s1.push1(a);
a=0;
}
}
int res = s1.peek1();
cout<<res;
return 0;
}

