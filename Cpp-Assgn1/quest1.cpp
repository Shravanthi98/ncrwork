#include<iostream>
using namespace std;
class time
{
int hrs,min,sec;
public:
time()
{
hrs=min=sec=0;
}
time(int a,int b,int c)
{
hrs=a;
min=b;
sec=c;
}
void display()
{
cout<<hrs<<":"<<min<<":"<<sec<<endl;
}
void add (time t1,time t2)
{
hrs=t2.hrs+t1.hrs;
min=t2.min+t1.min;
sec=t2.sec+t1.sec;
}
};
int main()
{
time T1(3,48,23),T2(5,23,12),T3;
T3.add(T1,T2);
T3.display();
T1.display();
T2.display();
return 0;
}



 