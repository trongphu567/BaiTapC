#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void swap(int &a,int &b)
{
    int tmp=a;
    a=b;
    b=tmp;
}
void SelectionSort(int a[],int n)
{
    int i,j,min_idx;
    for (int i=0;i<n-1;i++)
    {
        min_idx=i;
        for (int j=i+1;j<n;j++)
            if (a[j]<a[min_idx])
                min_idx=j;
        swap(a[i],a[min_idx]);
    }
}
void CreateArray(int a[],int n)
{
    srand(time(0));
    for (int i=0;i<n;i++)
        a[i]=(rand()%100)+1;
}
void printArray(int a[],int n)
{
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int BinarySearch (int a[],int n,int x,int countcmp)
{
    int first=0,mid;
    int last=n-1;
    while (first<=last)
    {
        countcmp++;
        mid=(first+last)/2;
        if (a[mid]==x) return mid;
        else
        {
            countcmp++;
            if (a[mid]>x) last=mid-1;
            else first=mid+1;
        }
    }
    return -1;
}

int LinearSearch (int a[],int n,int x)
{
    for (int i=0;i<n;i++)
        if (a[i]==x) return i;
    return -1;
}
int main()
{
    const int n=1000;
    int a[n],x;
    cout<<"Nhap x=";
    cin>>x;
    CreateArray(a,n);
    SelectionSort(a,n);
    int countcmp=0;
    int index=BinarySearch(a,n,x,countcmp);
    if (index==-1)
    {
        cout<<"Phan tu k co trong mang"<<endl;
        cout<<"So lan so sanh = "<<countcmp;
    }
    else
    {
        cout<<"Phan tu o vi tri ="<<index;
        cout<<"So lan so sanh ="<<countcmp;
    }
    
    
}