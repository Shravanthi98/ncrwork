#include<iostream>
using namespace std;
class polar1{
float angle1;
float radius1;
static int count;
public:
polar1(float angle1, float radius1)
{
angle1 = angle1;
radius1 = radius1;
count++;
}
void display()
{
cout<<"Number of objects = "<<polar1 :: count<<endl;
}
};
int polar1 :: count = 0;
int main()
{
polar1 p1(30,5);
polar1 p2(40,2.4);
polar1 p3(24.98, 1.54);
p1.display();
return 0;
}