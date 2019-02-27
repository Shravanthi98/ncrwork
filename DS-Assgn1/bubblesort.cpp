#include<iostream>
using namespace std;
class bsort{
int size;
int *arr;
public:
bsort()
{
size = 0;
arr = NULL;
}
void get_elements(int n)
{
size = n;
arr = new int[n];
cout<<"Enter the array elements"<<endl;
for(int i=0;i<size;i++)
cin>>arr[i];
}
void perform()
{
int i,j,temp;
for(i=0;i<size-1;i++)
{
for(j=0;j<size-i-1;j++)
{
if(arr[j]>arr[j+1])
{
temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
}
void display()
{
for(int i=0;i<size;i++)
cout<<arr[i]<<"\t";
}
};
int main()
{
bsort b1;
int n;
cout<<"Enter the size"<<endl;
cin>>n;
b1.get_elements(n);
b1.perform();
b1.display();
return 0;
}
