#include<iostream>
using namespace std;
class isort{
int size;
int *arr;
public:
isort()
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
void perform()
{
int j,temp;
for(int i=1;i<=size-1;i++)
{
j = i-1;
temp = arr[i];
while((j>=0)&&(arr[j]>temp))
{
arr[j+1] = arr[j];
j--;
}
arr[j+1] = temp;
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
isort i1;
i1.get_data();
i1.perform();
i1.display();
return 0;
}

