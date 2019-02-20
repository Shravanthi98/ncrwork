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
int peek1()
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
void calc()
{
char ch,ch1;
if(!Isempty())
	 {
	  ch = peek1();
          if(ch=='(')
	  ch1 = pop1(); 
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
char y[20] = "[a+b*(c+d)";
int n;
char x,ch,ch1;
cout<<"Enter the size"<<endl;
cin>>n;
s1.get_size(n);
int len = strlen(y);
for(int j=0;j<len;j++)
{
switch(y[j])
{
case '{': s1.push1(y[j]);break;
case '[': s1.push1(y[j]);break;
case '(': s1.push1(y[j]);break;
case ')': s1.calc();break;
case ']': {
	  if(!(s1.Isempty()))
	 {
	  ch = s1.peek1();
          if(ch=='[')
	  ch1 = s1.pop1();
	 } break;
	 }
case '}': {
	  if(!(s1.Isempty()))
	 {
	  ch = s1.peek1();
          if(ch=='{')
	  ch1 = s1.pop1(); 
	 }break;
	 }
default : break;
}
}
s1.display();
if(s1.Isempty())
cout<<"Balanced"<<endl;
else
cout<<"Unbalanced"<<endl;
return 0;
}

