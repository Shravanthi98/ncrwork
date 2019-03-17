#include<iostream>
using namespace std;
class complex1{
float real;
float imag;
public:
complex1()
{
real = 0;
imag = 0;
}
complex1(float real, float imag)
{
real = real;
imag = imag;
}
void show()
{
cout<<The number is "<<real<<" + "<<imag<<endl;
}
};
template <class T>
class Stack {
T* pointer;
int size;
public:
Stack()
{
pointer = NULL;
size = 0;
}
Stack(T* Array,int size)
{
size = size;
if(size>0)
{
pointer = new T[size];
for(int i=0;i<size;i++)
pointer[i] = Array[i];
}
else
{
cout<<"Please input a size greater than 0"<<endl;
exit(0);
}
}
void display()
{
for(int i=0;i<5;i++)
cout<<pointer[i]<<" ";
cout<<endl;
}
};
int main()
{
int Array1[5] = {1,2,3,4,5};
float Array2[5] = {1.1,2.2,3.3,4.4,5.5};
char Array3[5] = "abcd";

Stack<int> obj1(Array1,5);
obj1.display();
Stack<float> obj2(Array2, 5);
obj2.display();
Stack<char> obj3(Array3, 5);
obj3.display();
Stack<complex1> obj4(,5);
return 0;
}
