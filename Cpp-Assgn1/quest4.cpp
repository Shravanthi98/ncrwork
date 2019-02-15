#include<iostream>
using namespace std;
class arithop{
int a,b;
public:
void add1(int x, int y)
{
a = x;
b  =y;
cout<<"add = "<<a+b<<endl;
}
void sub1(int x, int y)
{
a = x;
b = y;
cout<<"sub = "<<a-b<<endl;
}
void mul1(int x, int y)
{
a = x;
b = y;
cout<<"Mul = "<<a*b<<endl;
}
void div1(int x, int y)
{
a = x;
b = y;
cout<<"Div = "<<a/b<<endl;
}
void mod1(int x, int y)
{
a = x;
b = y;
cout<<"mod = "<<a%b<<endl;
}
};
int main()
{
arithop a1;
a1.add1(2,3);
a1.sub1(4,2);
a1.mul1(2,4);
a1.div1(6,3);
a1.mod1(8,3);
return 0;
}