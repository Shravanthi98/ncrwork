#include<iostream>
using namespace std;
class dist2;
class dist1
{
int met,cen;
public:
dist1()
{
met=cen=0;
}
dist1(int d1,int d2)
{
met=d1;cen=d2;
}
void display()
{
cout<<"add="<<met<<"-"<<cen<<endl;
}
friend dist1 add(dist1 x,dist2 y);
void conv1()
{
cen=cen+(100*met);
met=0;
}
};
class dist2
{
int feet,inch;
public:
dist2()
{
feet=inch=0;

}
dist2(int d1,int d2)
{
feet=d1;inch=d2;
}
void display()
{
cout<<"add="<<feet<<"-"<<inch<<endl;
}
void conv2()
{

inch=inch+(feet*12);
feet=0;
}

friend dist1 add(dist1 x,dist2 y);
};

dist1 add(dist1 x,dist2 y)
{
dist1 yr;
static int r;
r= (x.cen+(2.54*y.inch));
yr.met=r/100;
yr.cen=r%100;
return yr;
}

int main()
{
dist1 D1(28,64);
dist2 D2(2,60);
D1.conv1();
D2.conv2();
dist1 R1 =add(D1,D2);
R1.display();
return 0;
}
