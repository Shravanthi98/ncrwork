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
int prece(char ch)
{
if(ch=='*')
return 7;
else if(ch=='/')
return 7;
else if(ch=='+')
return 5;
else if(ch=='-')
return 5;
else if(ch=='(')
return 3;
else if(ch=='[')
return 2;
else if(ch=='{')
return 1;
else if(ch==')')
return 8;
else if(ch==']')
return 9;
else if(ch=='}')
return 10;
else
return -1;
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
char x,ch,ch1;
char y[20] = "{[(a+b*c)*e-(f/g)]}";
int len = strlen(y);
char *y1;
y1 = new char[20];
y1 = strrev(y);
strcpy(y,y1);
for(int h=0;h<len;h++)
{
if(y[h]==')')
y[h] = '(';
else if(y[h]=='(')
y[h] = ')';
else if(y[h]=='[')
y[h] = ']';
else if(y[h]==']')
y[h] = '[';
else if(y[h]=='{')
y[h] = '}';
else if(y[h]=='}')
y[h] = '{';
}
char res[20];
int n,i=0,b,b1,b2;
cout<<"Enter the size"<<endl;
cin>>n;
s1.get_size(n);
for(int j =0;j<len;j++)
{
b2 = s1.prece(y[j]);
switch(b2)
{
case -1:  {
	   res[i]=y[j];
	   i++;
	   break;
	  }
case 2:
case 9:
{
if(y[j]!=']')
s1.push1(y[j]);
else
{
ch1 = s1.pop1();
while(ch1!='[')
{
res[i] = ch1;
i++;
ch1 = s1.pop1();
}
}
break;
}
case 3:
case 8:
{
if(y[j]!=')')
s1.push1(y[j]);
else
{
ch1 = s1.pop1();
while(ch1!='(')
{
res[i] = ch1;
i++;
ch1 = s1.pop1();
}
}
break;
}
case 1:
case 10:
{
if(y[j]!='}')
s1.push1(y[j]);
else
{
ch1 = s1.pop1();
while(ch1!='{')
{
res[i] = ch1;
i++;
ch1 = s1.pop1();
}
}
break;
}
default: 
{
if(!(s1.Isempty()))
{
ch = s1.peek1();
if((ch!='[')&&(ch!='(')&&(ch!='{'))
{
b = s1.prece(ch);
b1 =s1.prece(y[j]);
if(b1<b)
{
x = s1.pop1();
res[i] = x;
i++;
s1.push1(y[j]);
}
else
s1.push1(y[j]);
}
else
s1.push1(y[j]);
}
else
s1.push1(y[j]);
break;
}
}
}
if(!(s1.Isempty()))
{
ch = s1.peek1();
if((ch!='[')&&(ch!='(')&&(ch!='{'))
res[i++] = s1.pop1();
}
for(int k =i-1;k>=0;k--)
cout<<res[k];
return 0;
}



