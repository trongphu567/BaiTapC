#include <iostream>
#include <math.h>
using namespace std;
void nhapMang (int a[],int &n)
{
    cout<<"Nhap n=";
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
int Sum (int a[],int n)
{
    if (n<=0) return 0;
    if (n==1) return a[0];
    else return a[n-1]+Sum(a,n-1);
}
int MaxValue (int a[],int n)
{
    if (n<=0) return 0;
    if (n==1) return a[0];
    else
    {
        int temp=MaxValue(a,n-1);
        if (temp>a[n-1])
            return temp;
        else return a[n-1];
    }
}
int CountEven (int a[],int n)
{
    if (n<=0) return 0;
    if (a[n-1]%2==0) return 1+CountEven(a,n-1);
    return CountEven(a,n-1);
}
bool isPrime (int n)
{
    if (n<2) return false;
    for (int i = 2; i <= sqrt(n); i++)   
    {
        if (n%i==0) return false;
         
    }
    return true;
}
int CountPrime (int a[],int n)
{
    if (n<=0) return 0;
    if (isPrime(a[n-1]))
        return 1+CountPrime(a,n-1);
    return CountPrime(a,n-1);
}
int SumEven (int a[],int n)
{
    if (n<=0) return 0;
    if (a[n-1]%2==0) return a[n-1]+SumEven(a,n-1);
    return SumEven(a,n-1);
}
int SumFront (int a[],int n)
{
    if (n<=0) return 0;
    if (a[n-1]>a[n])
        return a[n-1]+SumFront(a,n-1);
    return SumFront(a,n-1);
}
void Sort (int a[],int n)
{
    if (n<=1) return;

    for (int i = 0; i < n; i++)
    {
        if (a[i]>a[n-1])
        {
            int temp=a[i];
            a[i]=a[n-1];
            a[n-1]=temp;
        }
    }
    Sort(a,n-1);
    
}
long Recur (int n)
{
    if (n==1 || n==2)
        return 1;
    return Recur(n-1)+(n-1)*Recur(n-2);
}
int A(int n) 
{
    int sum=0;
    if (n==1) return 1;
    else 
    {
        for (int i=1;i<=n-1;i++)
            {
                sum+=A(i);
            }
        return n*sum;
    }
}
int A1(int n)
{
    int temp=0,sum;
    for (int i=1;i<=n-1;i++)
    {
        temp+=i*sum;
        sum=temp;
    }
    return n*temp;

}
int main()
{
    // int n,a[100];
    // nhapMang(a,n);
    // xuatMang(a,n);
    // cout<<"Tong mang="<<Sum(a,n)<<endl;
    // cout<<"Max="<<MaxValue(a,n)<<endl;
    // cout<<"So ptu chan="<<CountEven(a,n)<<endl;
    // cout<<"So ptu ngto="<<CountPrime(a,n)<<endl;
    // cout<<"Tong chan="<<SumEven(a,n)<<endl;
    // cout<<"Tong dung truoc="<<SumFront(a,n)<<endl;
    // Sort(a,n);
    // xuatMang(a,n);
    // system("pause");
    int n;
    cout<<"Nhap n:";
    cin>>n;
    cout<<A(n)<<endl;
    cout<<A1(n)<<endl;
}
