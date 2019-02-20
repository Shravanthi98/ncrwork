#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
int data;
struct node* next;
};
class llist{
struct node*start;
public:
llist()
{
start = NULL;
}
void insert_first(int ele)
{
struct node*temp;
temp = new node;
temp->data = ele;
temp->next = start;
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
start = temp;
else
{
curr = start;
while((curr->next)!=NULL)
curr = curr->next;
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
temp->next = curr->next;
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
if(start->data==se)
{
struct node *temp;
temp = new node;
temp->data = ele;
temp->next = start;
start = temp;
}
else
{
while((curr->next!=NULL)&&(curr->next->data!=se))
{
curr = curr->next;
}
if(curr->next=NULL)
{
struct node *temp;
temp = new node;
temp->data = ele;
temp->next = curr->next;
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
void delete_spec(int ele)
{
struct node *curr;
curr= new node;
if(start!=NULL)
{
if(start->data==ele)
{
struct node *temp;
temp = new node;
start = temp->next;
delete temp;
}
else
{
struct node *temp;
temp = new node;
curr = start;
while((curr->next!=NULL)&&(curr->next->data!=ele))
curr = curr->next;
if(curr->next!=NULL)
{
temp = curr->next;
curr->next = temp->next;
delete temp;
}
else
cout<<"Element not found"<<endl;
}
}
else
cout<<"List is empty"<<endl;
}
void travel_forward()
{
struct node *curr;
curr = new node;
curr = start;
while(curr!=NULL)
{
cout<<curr->data;
curr = curr->next;
}
}
void travel_backward()
{
if(start!=NULL)
print(start);
}
friend void print(struct node *curr);
~llist()
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
void print(struct node *curr)
{
if(curr!=NULL)
{
print(curr->next);

cout<<curr->data;
}
}
int main()
{
llist l1;
int n,n1,n2;
l1.insert_first(3);
l1.insert_first(2);
l1.insert_first(1);
l1.insert_last(4);
l1.travel_forward();
cout<<endl;
l1.travel_backward();
cout<<endl;
l1.insert_after(2,5);
l1.travel_forward();
cout<<endl;
n = l1.delete_first();
cout<<n<<"is deleted"<<endl;
l1.travel_forward();
cout<<endl;
n1 = l1.delete_last();
cout<<n1<<"is deleted"<<endl;
l1.travel_forward();
cout<<endl;
l1.delete_spec(5);
l1.travel_forward();
cout<<endl;
return 0;
}


