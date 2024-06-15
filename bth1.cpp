#include <iostream>
#include <math.h>
using namespace std;
void nhapMang (int a[],int &n)
{
    cout<<"Nhap so ptu:";
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
    
}
bool ktSNT (int n)
{
    if (n<2) return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0) return false;
    }
    return true;
    
}
float TBMang (int a[],int n)
{
    int sum=0;
    float tbc;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    tbc=(sum*1.0)/n;
    return tbc;
}
int sum (int a[],int n)
{
    if (n<0) return 0;
    return a[n]+sum(a,n-1);
}
float Average (int a[],int n)
{
    return (sum(a,n-1)*1.0)/n;
}
int TimPhanTu (int a[],int n)
{
    int count=0;
    float tbc=TBMang(a,n);
    for (int i = 0; i < n; i++)
    {
        if (ktSNT(a[i]) && a[i]<=tbc)
            count++;
    }
    return count;
}

int TimPhanTuR (int a[],int n)
{
    float tbc=Average(a,n);
    int min=a[0];
    if (n<0) return 0;
    for (int i = 0; i < n; i++)
    {
        if (ktSNT(a[i]) && a[i]<=tbc && a[i]<min)
            min=a[i];
        else TimPhanTuR(a,n-1);
    }
    return min;
}
void findItem (int a[],int n,int &value,int &min,int ave)
{
    if (n<0) return;
    if (ktSNT(a[n]) && abs(a[n]-ave)<min)
    {
        value=a[n];
        min=abs(a[n]-ave);
    }
    findItem(a,n-1,value,min,ave);
}
int main()
{
    int a[100],n;
    float ave=Average(a,n);
    nhapMang(a,n);
    xuatMang(a,n);
    cout<<endl;
    cout<<ave<<endl;
    int i=n-1;
    int value=a[n-1];
    int min=abs(a[n-1]-ave);
    while (i>-1 && ktSNT(a[i]))
    {
        i--;
        if (i>-1)
        {
            value=a[i];
            min=abs(a[i]-ave);
            findItem(a,i-1,value,min,ave);
        }
        else cout<<"Don't have any prime num!";
    }
    
    system("pause");
}