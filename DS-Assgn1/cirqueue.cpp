#include<iostream>
#include<stdio.h>
using namespace std;
struct queue1{
int rear;
int front;
int *s;
int size;
};
class queue2{
struct queue1 q;
public:
queue2()
{
q.rear = -1;
q.front= -1;
q.s = NULL;
q.size = 0;
}
void get_size(int n)
{
q.size = n;
q.s = new int[n];
}
bool overflow()
{
return((q.rear==(q.size-1))||(q.front == q.rear+1));
}
bool underflow()
{
return((q.rear==-1)&&(q.front=-1));
}
void insert_queue(int ele)
{
if(q.rear==(q.size-1))
q.rear=0;
if(!overflow())
{
q.s[++q.rear]=ele;
if(q.rear==0)
q.front++;
}
else
cout<<"Queue is full"<<endl;
}
int delete_queue()
{
int x = -999;
if(!underflow())
x= q.s[q.front++];
else
cout<<"Queue is empty"<<endl;
return x;
}
void display()
{
for(int i = q.front;i<=q.rear;i++)
cout<<q.s[i]<<"\t";
}
~queue2()
{
delete q.s;
}
};
int main()
{
queue2 s1;
int n,n1;
cout<<"Enter the size"<<endl;
cin>>n;
s1.get_size(n);
s1.insert_queue(1);
s1.insert_queue(2);
s1.insert_queue(3);
s1.insert_queue(4);
s1.insert_queue(5);
s1.display();
cout<<endl;
n1 = s1.delete_queue();
cout<<n1<<" has been deleted"<<endl;
s1.display();
cout<<endl;
n1 = s1.delete_queue();
cout<<n1<<" has been deleted"<<endl;
s1.display();
cout<<endl;
s1.insert_queue(2);
s1.display();
cout<<endl;
return 0;
}


