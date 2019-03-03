#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
int data;
struct node *prev;
struct node *next;
};
class dllist{
struct node *start;
public:
dllist()
{
start = NULL;
}
void insert_first(int ele)
{
struct node *temp;
temp = new node;
temp->data = ele;
temp->prev = NULL;
temp->next = start;
if(start!=NULL)
{
start->prev = temp;
start = temp;
}
else
start = temp;
}
void insert_last(int ele)
{
struct node *temp,*curr;
temp = new node;
curr = new node;
temp->data = ele;
temp->next = NULL;
if(start==NULL)
{
temp->prev = NULL;
start = temp;
}
else
{
curr = start;
while((curr->next)!=NULL)
curr = curr->next;
temp->prev = curr;
curr->next = temp;
}
}
void insert_after(int se,int ele)
{
struct node *curr;
curr = new node;
if(start!=NULL)
{
curr = start;
while((curr!=NULL)&&(curr->data!=se))
curr = curr->next;
if(curr!=NULL)
{
struct node *temp;
temp = new node;
temp->data = ele;
temp->prev = curr;
temp->next = curr->next;
curr->next->prev = temp;
curr->next = temp;
}
else
cout<<"Element not found"<<endl;
}
else
cout<<"List is empty"<<endl;
}
void insert_before(int se,int ele)
{
struct node *curr;
curr = new node;
curr = start;
if(start->data==se)
{
struct node *temp;
temp = new node;
temp->data = ele;
temp->prev = NULL;
temp->next = start;
start = temp;
}
else
{
while((curr->next!=NULL)&&(curr->next->data!=se))
{
curr = curr->next;
}
if(curr->next!=NULL)
{
struct node *temp;
temp = new node;
temp->data = ele;
temp->prev = curr;
temp->next = curr->next;
curr->next->prev = temp;
curr->next = temp;
}
else
cout<<"Element not found"<<endl;
}
}
int delete_first()
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
int delete_last()
{
int x=-1;
if(start!=NULL)
{
if(start->next==NULL)
{
x = start->data;
delete start;
start = NULL;
}
else
{
struct node *curr;
curr = new node;
curr = start;
while(curr->next->next!=NULL)
curr = curr->next;
x = curr->next->data;
delete curr->next;
curr->next = NULL;
}
}
else
cout<<"List is empty"<<endl;
return x;
}
void travel_forward()
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
void travel_backward()
{
struct node *curr;
curr = new node;
curr = start;
while(curr->next!=NULL)
curr = curr->next;
while(curr!=NULL)
{
cout<<curr->data<<"\t";
curr = curr->prev;
}
}
~dllist()
{
struct node *temp;
temp = new node;
while(start!=NULL)
{
temp = start;
start = temp->next;
delete temp;
}
}
};
int main()
{
dllist d1;
int n,n1,n2;
d1.insert_first(4);
d1.insert_first(3);
d1.insert_first(2);
d1.insert_first(1);
d1.travel_forward();
cout<<endl;
d1.travel_backward();
cout<<endl;
n = d1.delete_first();
cout<<n<<" has been deleted"<<endl;
d1.travel_forward();
cout<<endl;
}



