#include<iostream>
using namespace std;
class qsort1
{
int size;
int *arr;
public:
qsort1()
{
size = 0;
arr = NULL;
}
void get_data(int n)
{
size = n;
arr = new int[n];
cout<<"Enter the array elements";
for(int i=0;i<size;i++)
cin>>arr[i];
}
void quicksort1(int low,int high)
{
int pivot = arr[low];
int i,j;
i = low+1;
j = high;
if(low<high)
{
while(1)
{
while((i<=high)&&(arr[i]<pivot))
i++;
while(arr[j]>pivot)
j--;
if(i<j)
{
int temp;
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
else
break;
}
int temp = arr[low];
arr[low] = arr[j];
arr[j] = temp;
quicksort1(low,j-1);
quicksort1(j+1,high);
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
qsort1 q1;
int n;
cout<<"Enter the size"<<endl;
cin>>n;
q1.get_data(n);
q1.quicksort1(0,n-1);
q1.display();
return 0;
}