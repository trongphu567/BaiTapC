#include <iostream>
using namespace std;
void nhapMang (int a[],int &n)
{
    cout<<"Nhap n = ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    
}
void xuatMang (int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
void Swap (int &a,int &b)
{
    int tmp=a;
    a=b;
    b=tmp;
}
int Partition (int a[],int low,int high)
{
    int pivot=a[high];
    int left=low;
    int right=high-1;
    while (true)
    {
        while (left<=right && a[left]>pivot)
            left++;
        while (left<=right && a[right]<pivot)
            right--;
        if (left>=right) break;
        Swap(a[left],a[right]);
        left++;
        right--;
    }
    Swap(a[left],a[high]);
    return left;
    
}
void QuickSort (int a[],int left,int right)
{
    if (left<right)
    {
        int pivot=Partition(a,left,right);
        QuickSort(a,left,pivot-1);
        QuickSort(a,pivot+1,right);
    }
}

int main()
{
    int a[100],n;
    nhapMang(a,n);
    xuatMang(a,n);
    QuickSort(a,0,n-1);
    xuatMang(a,n);
    system("pause");
}
