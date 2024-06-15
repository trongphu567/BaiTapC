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
    {
        xuatps(a[i]);printf(" ");
    }
}
phanso maxps(phanso a[],int n)
{
	phanso psmax;
	psmax = a[0];
	for(int i = 1;i<n;i++){
		if(a[i].tu*psmax.mau > a[i].mau*psmax.tu)
			psmax = a[i];
		}
	return psmax;	
}
void HoanVi(phanso &x,phanso &y)
{
    phanso tam=x;
    x=y;
    y=tam;
}
void sapxepMangps (phanso a[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i].tu*a[j].mau<a[i].mau*a[j].tu) HoanVi(a[i],a[j]);
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
    phanso a[100];
    nhapMangps(a,n);
    xuatMangps(a,n);
    //phanso k=maxps(a,n);
    //xuatps(k);
    printf("\n");
    sapxepMangps(a,n);
    printf("Mang giam dan la: ");
    xuatMangps(a,n);
}