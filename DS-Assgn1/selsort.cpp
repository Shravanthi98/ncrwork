#include<iostream>
using namespace std;
class sesort{
int size;
int *arr;
public:
sesort()
{
size = 0;
arr  = NULL;
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
int i,temp;
for(i=0;i<size-1;i++)
{
int loc = i;
int j = i+1;
while(j<=size-1)
{
if(arr[j]<arr[loc])
loc = j;
j++;
}
temp = arr[i];
arr[i] = arr[loc];
arr[loc] = temp;
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
sesort i1;
i1.get_data();
i1.perform();
i1.display();
return 0;
}
