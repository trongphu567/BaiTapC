#include <stdio.h>
struct phanso
{
    int tu;
    int mau;
};
void nhapps(phanso &x)
{
    printf("Nhap tu so:");
    scanf("%d",&x.tu);
    printf("\nNhap mau so:");
    scanf("%d",&x.mau);
}
void xuatps(phanso x)
{
    printf("%d/%d",x.tu,x.mau);
}
phanso cong2ps (phanso x,phanso y)
{
    phanso t;
    t.tu=x.tu*y.mau+y.tu*x.mau;
    t.mau=x.mau*y.mau;
    return t;
}
int USCLN(int a,int b)
{
    while (a!=b)
    {
        if (a>b) a=a-b;
        else b=b-a;
    }
    return a;
}
phanso toiGianps(phanso x)
{
    int t=USCLN(x.tu,x.mau);
    x.tu=x.tu/t;
    x.mau=x.mau/t;
    return x;
}
void nhapMangps(phanso a[],int &n)
{
    printf("\nNhap n:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        nhapps(a[i]);
}
void xuatMangps(phanso a[],int n)
{
    for (int i=0;i<n;i++)
        xuatps(a[i]);
}
int main()
{
    /*
    phanso x,y;
    nhapps(x);
    nhapps(y);
    phanso z=cong2ps(x,y);
    xuatps(z);
    printf("\n");
    phanso k=toiGianps(x);
    xuatps(k);
    */
    int n;
    phanso a[10];
    nhapMangps(phanso,n);
    xuatMangps(phanso,n);
}
