#include<iostream>
using namespace std;
class matrix{
int r1,c1,r2,c2;
int m1[5][5];
int m2[5][5];
public:
matrix()
{
r1=c1=r2=c2=0;
cout<<"Enter the number of rows and cols"<<endl;
cin>>r1>>c1>>r2>>c2;
cout<<"Enter the 1st matrix elements"<<endl;
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
cin>>m1[i][j];
}
}
cout<<"Enter the 1st matrix elements"<<endl;
for(int i=0;i<r2;i++)
{
for(int j=0;j<c2;j++)
{
cin>>m2[i][j];
}
}
}
friend void mul(matrix m1);
};
void mul(matrix m1)
{
int c[5][5];
int i,j,k,s=0;
int r1 = m1.r1;
int c1 = m1.c1;
int r2 = m1.r2;
int c2 = m1.c2;
for(i=0;i<r1;i++)
{
for(k=0;k<c2;k++)
{
s=0;
for(j=0;j<r2;j++)
{
s = s+((m1.m1[i][j])*(m1.m2[j][k]));
}
c[i][k] = s;
}
}
for(int x=0;x<r1;x++)
{
for(int y=0;y<c2;y++)
{
cout<<c[x][y]<<" ";
}
cout<<endl;
}
}
int main()
{
matrix m1;
mul(m1);
return 0;
}