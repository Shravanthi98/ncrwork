#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
int data;
struct node* next;
};
class qllist{
struct node*start;
public:
qllist()
{
start = NULL;
}
void insert_queue(int ele)
{
struct node*temp;
temp = new node;
temp->data = ele;
temp->next = start;
start = temp;
}
int delete_queue()
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
void display()
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
};
int main()
{
qllist l1;
int n,n1,n2;
l1.insert_queue(3);
l1.insert_queue(2);
l1.insert_queue(1);
l1.insert_queue(4);
l1.display();
cout<<endl;
n = l1.delete_queue();
cout<<n<<endl;
return 0;
}