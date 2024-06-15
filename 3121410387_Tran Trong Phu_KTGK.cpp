/*
KIEM TRA GIUA KI
Mon:Ki Thuat Lap Trinh
Ho ten: Tran Trong Phu
MSSV: 3121410387
Lop: DCT1217
*/
#include <iostream>
#include <math.h>
using namespace std;
void nhapMang (int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>*(a+i);
    }
}
void xuatMang (int a[],int n)
{
    for (int i=0;i<n;i++)
        cout<<*(a+i)<<" ";
}
bool ktSNT (int n)
{
    if (n<2) return false;
    else
    {
        for (int i=2;i<=sqrt(n);i++)
            if (n%i==0) return false;
        return true;
    }
}
int SumSNT (int a[],int n)
{
    int sum=0;
    for (int i=0;i<n;i++)
    {
        if (ktSNT(a[i])) continue;
        else sum+=a[i];
    }
    return sum;
}
int RSumSNT (int a[],int n)
{
    if (n<=0) return 0;
    if (ktSNT(a[n-1])==false) 
        return a[n-1]+RSumSNT(a,n-1);
    return RSumSNT(a,n-1);
}
int main()
{
    int *a,n;
    cout<<"Nhap so ptu:";
    cin>>n;
    a=new int[n];
    nhapMang(a,n);
    xuatMang(a,n);
    cout<<"\nTong cac so k la SNT ="<<SumSNT(a,n);
    cout<<"\nTong cac so k la SNT ="<<RSumSNT(a,n);
    delete []a;
    return 0;
}