#include<iostream>
using namespace std;
struct node 
{
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
int NonLN(struct node *curr)
{
if(curr==NULL)
return 0;
else if((curr->left==NULL