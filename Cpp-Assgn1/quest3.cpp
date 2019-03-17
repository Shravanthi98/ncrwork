#include<iostream>
using namespace std;
class complex
{
//private
float real,imag;
public:
//default constructor
complex()
{
real=imag=0;
}
//parameterised constructor
complex(float x)
{
real=imag=x;
}
complex(float p,float q)
{
real=p;
imag=q;
}
//Display complex numbers
void display(complex c1)
{
cout<<"add="<<real<<"+j"<<imag<<endl;
cout<<"mul="<<c1.real<<"+j"<<c1.imag<<endl;

}
//friend functions to add and multiply
friend complex add(complex c1 ,complex c2);
friend complex multiply(complex z ,complex c);
};
//friend function definition
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
float num1, num2;
cout<<"Enter the numbers to add and multiply"<<endl;
cin>>num1>>num2;
if(((num1>=0)&&(num1<=9))||((num2>=0)&&(num2<=9)))
{
}
else
{
cout<<"Invalid input, Please enter numbers in the range of 0-9"<<endl;
exit(0);
}
complex c1(num1,num2),c2(num1),c3,c4;  // Constructors are invoked
c3=add(c1,c2);
c4=multiply(c1,c2);
c3.display(c4);
return 0;
}




