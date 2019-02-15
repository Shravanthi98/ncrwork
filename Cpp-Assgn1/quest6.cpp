#include<iostream>
#include<math.h>
using namespace std;
class point{
float x,y;
public:
point(float p, float q){
x = p;
y = q;
}
point(const point &a)
{
x = a.x;
y = a.y;
}
friend float distance(point p, point q);
};
float distance(point p, point q)
{
return (sqrt((((q.x)-(p.x))*((q.x)-(p.x)))+(((q.y)-(p.y))*((q.y)-(p.y)))));
}
int main()
{
point p1 (1,2);
point p2(p1);
point p3(3,4);
float res;
res = distance(p1,p2);
cout<<"distance = "<<res<<endl;
res = distance(p1,p3);
cout<<"distance = "<<res<<endl;
return 0;
}