#include<iostream>
using namespace std;
class base{
protected:
int a;
int b;
public:
void get_data()
{
a = 5;
b = 2;
}
void display()
{
cout<<"a = "<<a<<"b = "<<b<<endl;
}
};
class derived : protected base
{
public:
void show()
{
get_data();
display();
cout<<a<<endl;
cout<<"This is the derived class"<<endl;
}
};
int main()
{
derived d1;
//d1.get_data();
//d1.display();
d1.show();
return 0;
} 