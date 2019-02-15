#include<iostream>
using namespace std;
class complex
{
float real,imag;
public:
complex()
{
real=imag=0;
}
complex(float x)
{
real=imag=x;
}
complex(float p,float q)
{
real=p;
imag=q;
}
void display(complex c1)
{
cout<<"add="<<real<<"+j"<<imag<<endl;
cout<<"mul="<<c1.real<<"+j"<<c1.imag<<endl;

}
friend complex add(complex c1 ,complex c2);
friend complex multiply(complex z ,complex c);
};
complex add(complex x,complex y)
{
complex temp;
temp.real=x.real+y.real;
temp.imag=x.imag+y.imag;
return temp;
}
complex multiply(complex x,complex y)
{
complex temp;
temp.real=(x.real*y.real)-(x.imag*y.imag);
temp.imag=(x.imag*y.real)+(x.real*y.imag);
return temp;
}


int main()
{
complex c1(3,2),c2(8),c3,c4;
c3=add(c1,c2);
c4=multiply(c1,c2);
c3.display(c4);
return 0;
}




