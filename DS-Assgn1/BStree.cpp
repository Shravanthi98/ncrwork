#include<iostream>
#include<conio.h>
using namespace std;
struct node{
int data;
struct node *left;
struct node *right;
};
class BST1{
struct node *start;
public:
BST1()
{
start = NULL;
}
void get_data()
{
start = new node;
}
int nofln(struct node *curr)
{
if(curr == NULL)
return 0;
else if((curr->left==NULL)&&(curr->right==NULL))
return 1;
return (nofln(curr->left)+nofln(curr->right));
}
int nofnonln(struct node *curr)
{
if(curr == NULL)
return 0;
else if((curr->left==NULL)&&(curr->right==NULL))
return 0;
return (nofnonln(curr->left)+nofnonln(curr->right)+1);
}
int findmin(struct node *curr)
{
if(curr!=NULL)
{
while(curr->left!=NULL)
curr = curr->left;
return (curr->data);
}
else
return -1;
}
int findmax(struct node *curr)
{
if(curr!=NULL)
{
while(curr->right!=NULL)
curr = curr->right;
return (curr->data);
}
else
return -1;
}
int height(struct node *curr)
{
if(curr==NULL)
return -1;
else
return(max(height(curr->left),height(curr->right))+1);
}
void inorder()
{
if(start!=NULL)
print(start);
}
friend void print(struct node *curr);
friend void delete_node(struct node *curr);
void delete_element(int ele,struct node *curr)
{
if(curr!=NULL)
{
if(ele>curr->data)
curr->right = delete_element(ele,curr->right);
else
curr->left = delete_element(ele,curr->left);
}
else
{
if((curr->left!=NULL)&&(curr->right!=NULL))
{
curr->data = findmax(curr->left);
curr->left = delete_element(curr->data,curr->left);
}
else
{
struct node *temp;
temp = new node;
temp = curr;
if(curr->left==NULL)
curr = curr->right;
else
curr = curr->left;
delete temp;
}
return curr;
}
}
~BST1()
{
if(start!=NULL)
delete_node(start);
}
struct node* insert_node(struct node *curr, int ele)
{
if(curr==NULL)
{
struct node *temp;
temp = new node;
temp->data = ele;
temp->left = NULL;
temp->right = NULL;
return temp;
}
else
{
if(ele<curr->data)
curr->left = insert_node(ele,curr->left);
else
curr->right = insert_node(ele,curr->right);
return curr;
}
}
};
void print(struct node *curr)
{
if(curr!=NULL)
{
print(curr->left);
cout<<curr->data<<"\t";
print(curr->right);
cout<<curr->data<<"\t";
}
}
void delete_node(struct node *curr)
{
if(curr!=NULL)
{
delete_node(curr->left);
delete_node(curr->right);
delete curr;
}
}
int main()
{
BST1 t1;
int n,n1,n2,n3,n4;
t1.get_data();
t1.insert_node(start,5);
t1.insert_node(start,1);
t1.insert_node(start,3);
t1.insert_node(start,4);
t1.insert_node(start,6);
t1.insert_node(start,8);
n = t1.nofln(start);
cout<<"Number of leaf nodes = "<<n<<endl;
n1 = t1.nofnonln(start);
cout<<"Number of non-leaf nodes = "<<n1<<endl;
n2 = t1.height(start);
cout<<"height = "<<2<<endl;
n3 = t1.findmin(start);
cout<<"Min value = "<<n3<<endl;
n4 = t1.findmax(start);
cout<<"Max value = "<<n4<<endl;
t1.inorder();
t1.delete_element(4,start);
t1.inorder();
return 0;
}
