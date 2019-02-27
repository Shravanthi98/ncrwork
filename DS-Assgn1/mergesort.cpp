#include<iostream>
using namespace std;
class msort{
int size;
int *arr;
public:
msort()
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
void mergesort(int low,int high)
{
if(low<high)
{
int mid;
mid = (low+high)/2;
mergesort(low,mid);
mergesort(mid+1,high);
merge(low,mid,high);
}
}
void merge(int l1s,int l1e,int l2e)
{
int l2s = l1e+1;
int *l3,i,j,k;
l3 = new int[l2e-l1s+1];
i = l1s;
j = l2s;
k=0;
while((i<=l1e)&&(j<=l2e))
{
if(arr[i]>arr[j])
l3[k++] = arr[j++];
else
l3[k++] = arr[i++];
}
while(i<=l1e)
l3[k++] = arr[i++];
while(j<=l2e)
l3[k++] = arr[j++];
while(l2e>=l1s)
arr[l2e--] = l3[--k];
delete l3;
}
void display()
{
for(int i=0;i<size;i++)
cout<<arr[i]<<"\t";
}
};
int main()
{
msort i1;
int n;
cout<<"Enter the size"<<endl;
cin>>n;
i1.get_data(n);
i1.mergesort(0,n-1);
i1.display();
return 0;
}