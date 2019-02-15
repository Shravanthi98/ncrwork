#include<iostream>
using namespace std;
class swap1{
int a,b;
public:
swap1()
{
a=0;
b=0;
}
void swap_value(int x, int y)
{
int t;
a = x;
b = y;
cout<<"Before swapping"<<endl;
cout<<"a= "<<a<<"\t"<<"b = "<<b<<endl;
t = a;
a = b;
b = t;
cout<<"After swapping"<<endl;
cout<<"a= "<<a<<"\t"<<"b = "<<b<<endl;
}
void swap_reference(int &x, int &y)
{
int t;
t = x;
x = y;
y = t;
cout<<"Before swapping"<<endl;
cout<<"a= "<<a<<"\t"<<"b = "<<b<<endl;
cout<<"After swapping"<<endl;
cout<<"a= "<<x<<"\t"<<"b = "<<y<<endl;
}
};
int main()
{
int n;
int a,b;
cout<<"Enter the numbers"<<endl;
cin>>a>>b;
cout<<"Option 1: Swap by value"<<endl<<"Option 2: Swap by reference"<<endl<<"Enter your option"<<endl;
cin>>n;
swap1 s1,s2,s3;
switch(n)
{
case 1 : s2.swap_value(a,b); break;
case 2 : s3.swap_reference(a,b); break;
default: break;
}
return 0;
}



