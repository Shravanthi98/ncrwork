#include<iostream>
using namespace std;
class lsearch1{
int size;
int *arr;
public:
lsearch1()
{
size = 0;
arr = NULL;
}
void get_data()
{
cout<<"Enter the size"<<endl;
cin>>size;
arr = new int[size];
cout<<"Enter the array elements"<<endl;
for(int i=0;i<size;i++)
cin>>arr[i];
}
void linear_search(int ele)
{
int i;
for(i=0;i<size;i++)
{
if(ele==arr[i])
{
cout<<"Element found at "<<i<<" location"<<endl;
break;
}
}
if(i==size)
cout<<"Element not found"<<endl;
}
~lsearch1()
{
delete arr;
}
};
int main()
{
int ele;
lsearch1 b1;
b1.get_data();
cout<<"Enter the element to search"<<endl;
cin>>ele;
b1.linear_search(ele);
return 0;
}

