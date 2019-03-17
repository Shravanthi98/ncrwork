#include<iostream>
using namespace std;
class shape{
public: 
int length;
int breadth;
int height;
shape()
{
length = 0;
breadth = 0;
height = 0;
}
shape(int len, int bre, int hei)
{
length = len;
breadth = bre;
height = hei;
}
virtual void display_area()
{
 cout<<"Base class function is called"<<endl;
}
};
class triangle1 : public shape
{
public:
void display_area()
{
float area = 0.5*breadth*height;
cout<<"Area of the triangle = "<<area<<endl;
}
};
class rectangle1 : public shape
{
public:
void display_area()
{
int area = length*breadth;
cout<<"Area of the rectangle = "<<area<<endl;
}
};
class square1 : public shape
{
public:
void display_area()
{
int area = length*breadth;
cout<<"Area of the square = "<<area<<endl;
}
};
int main()
{
shape baseobject(1,2,3);
triangle1 triobject;
rectangle1 rectobject;
square1 squobject;
shape *baseptr;
baseptr = &baseobject;
baseptr->display_area();
baseptr = &triobject;
baseptr->display_area();
baseptr = &rectobject;
baseptr->display_area();
baseptr = &squobject;
baseptr->display_area();
return 0;
}