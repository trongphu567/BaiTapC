#include <stdio.h>
void NhapMang(int a[],int &n)
{
    printf("Nhap n:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void XuatMang(int a[],int n)
{
    for (int i=0;i<n;i++)
        printf("%5d",a[i]);
}
void HoanVi(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void SapXep(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i]<a[j]) HoanVi(a[i],a[j]);
}
int maxthu2 (int a[],int n)
{
    SapXep(a,n);
    return a[1];
}
void Xoaphantu (int a[],int &n,int k)
{
    for (int i=k;i<n;i++)
        a[i]=a[i+1];
    n--;
}
int main()
{
    int n,a[100],k;
    NhapMang(a,n);
   // printf("Nhap vi tri muon xoa:");
    //scanf("%d",&k);
    //Xoaphantu(a,n,k);
    //XuatMang(a,n);
    printf("\n%d",maxthu2(a,n));
}