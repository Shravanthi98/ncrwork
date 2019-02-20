#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
int data;
struct node* next;
};
class stllist{
struct node *start;
public:
stllist()
{
start = NULL;
}
void push1(int ele)
{
struct node*temp;
temp = new node;
temp->data = ele;
temp->next = start;
start = temp;
}
int pop1()
{
int x=-999;
if(start!=NULL)
{
struct node *temp;
temp = new node;
temp = start;
start = start->next;
x = temp->data;
delete temp;
}
else
cout<<"List is empty"<<endl;
return x;
}
int peek1()
{
int x=-999;
if(start!=NULL)
{
x = start->data;
}
else
cout<<"List is empty"<<endl;
return x;
}
void display()
{
struct node *curr;
curr = new node;
curr = start;
while(curr!=NULL)
{
cout<<curr->data<<"\t";
curr = curr->next;
}
}
};
int main()
{
stllist s1;
int n,n1;
s1.push1(4);
s1.push1(3);
s1.push1(2);
s1.push1(1);
s1.display();
cout<<endl;
n = s1.pop1();
s1.display();
cout<<endl;
n1 = s1.peek1();
cout<<n1;
cout<<endl;
return 0;
}

