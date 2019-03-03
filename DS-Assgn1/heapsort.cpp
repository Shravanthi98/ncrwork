#include<iostream>
using namespace std;
class hsort1{
int size;
int *arr;
public:
hsort1()
{
size = 0;
arr = NULL;
}
void get_data()
{
int n;
cout<<"Enter the size"<<endl;
cin>>n;
size = n;
arr = new int[n];
cout<<"Enter the array elements";
for(int i=0;i<size;i++)
cin>>arr[i];
}
void heapsort1()
{
int i,j;
for(i=(size/2-1);i>=0;i--)
build_heap1(i,size);
for(j=1;j<=size-1;j++)
{
int temp;
temp = arr[0];
arr[0] = arr[size-j];
arr[size-j] = temp;
build_heap1(0,size-j);
}
}
void build_heap1(int i,int n)
{
int temp = arr[i];
int c;
for(;((2*i)+1)<n;i=c)
{
c = (2*i)+1;
if((c+1<n)&&(arr[c+1]>arr[c]))
c++;
if(arr[c]>temp)
arr[i] = arr[c];
else
break;
}
arr[i] = temp;
}
void display()
{
for(int i=0;i<size;i++)
cout<<arr[i]<<"\t";
}
};
int main()
{
hsort1 i1;
i1.get_data();
i1.heapsort1();
i1.display();
return 0;
}
