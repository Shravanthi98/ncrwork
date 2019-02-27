#include<iostream>
using namespace std;
class bsearch1{
int size;
int *arr;
public:
bsearch1()
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
void binary_search(int ele)
{
int low = 0,mid;
int high = size-1;
while(low<=high)
{
mid = (low+high)/2;
if(ele<arr[mid])
high = mid-1;
else if(ele>arr[mid])
low = mid+1;
else
{
cout<<"Element found at "<<mid<<" location"<<endl;
break;
}
}
if(low>high)
cout<<"Element not found"<<endl;
}
~bsearch1()
{
delete arr;
}
};
int main()
{
int ele;
bsearch1 b1;
b1.get_data();
cout<<"Enter the element to search"<<endl;
cin>>ele;
b1.binary_search(ele);
return 0;
}



