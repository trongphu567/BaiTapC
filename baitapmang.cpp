#include <stdio.h>
void nhapMang(int a[],int &n)
{
    printf("Nhap n:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void xuatMang(int a[],int n)
{
    for (int i=0;i<n;i++)
        printf("%5d",a[i]);
}
int demdoantang(int a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(a[i]>a[i+1]) dem++;
	return dem;
}
int dayconDaiNhat(int a[],int n)
{
    int d=1,max=1;
    for (int i=0;i<n-1;i++)
        if (a[i]<=a[i+1]) d++;
        else
        {
            if (d>max) max=d;
            d=1;
        }
        if (d>max) max=d; //kiểm tra giá trị d cuối cùng với giá trị max
    return max;
}
int demchuso(int n)
{
    int dem=0;
    do
    {
        dem++;
        n=n/10;
    } 
    while (n!=0);
    return dem; 
}
int ktsongto(int n)
{
    int dem=0,kq=0;
    for (int i=1;i<=n;i++)
        if (n%i==0) dem++;
    if (dem==2) kq=1;
    return kq;
}
int ktSNT2chuso(int n)
{
    if (demchuso(n)==2 &&ktsongto(n)==1) return 1;
    return 0;
}
int demSNT2chuso (int a[],int n)
{
    int dem=0;
    for (int i=0;i<n;i++)
        if (ktSNT2chuso(a[i])==1) dem++;
    return dem;
}
/*
void SapXepSNT (int a[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (ktsongto(a[i])==1 &&ktsongto(a[j])==1 && a[i]>a[j]) HoanVi(a[i],a[j]);
}
*/
int soHoanChinh (int n)
{
    int sum=0;
    for (int i=1;i<n;i++)
        if (n%i==0) sum=sum+i;
    if (sum==n) return 1;
    return 0;
}
int demSoHoanChinhMang(int a[],int n)
{
    int dem=0;
    for (int i=0;i<n;i++)
        if (soHoanChinh(a[i])==1) dem++;
    return dem;
}
int MaxMang(int a[],int n)
{
    int max=a[0];
    for (int i=0;i<n;i++)
        if (a[i]>max) max=a[i];
    return max;
}
void HoanVi(int &a,int &b)
{
    int tam=a;
    a=b;
    b=tam;
}
void SapXep(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i]>a[j]) HoanVi(a[i],a[j]);
}
int maxthuk(int a[],int n,int k)
{
    SapXep(a,n);
    return a[k-1];
}
void SapXepChanLe(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
        {
            if(a[i]%2!=0 && a[j]%2==0) HoanVi(a[i],a[j]);
        }
}

int main()
{
    
    int n,a[10],dem,max,k;
    nhapMang(a,n);
    xuatMang(a,n);
    printf("\n");
    dayConSNT(a,n);
    //printf("Max mang la:%d",MaxMang(a,n));
    /*
    printf("\nNhap k:");
    scanf("%d",&k);
    max=maxthuk(a,n,k);
    printf("\nGia tri lon thu %d la:%d",k,max);
    */
    //printf("\n");
    //SapXepChanLe(a,n);
    //xuatMang(a,n);
    //dem=demdoantang(a,n);
    //printf("\nSo doan con lien tiep tang la:%d",dem);
    //max=dayconDaiNhat(a,n);
    //printf("\nChieu dai day con tang dai nhat la:%d",max);
    //dem=demSNT2chuso(a,n);
    //printf("\nCo %d so ngto co 2 chu so",dem);
    /*
    int n,a[10],dem;
    nhapMang(a,n);
    xuatMang(a,n);
    printf("\n");
    SapXepSNT(a,n);
    xuatMang(a,n);
    dem=demSoHoanChinhMang(a,n);
    printf("\nCo %d so hoan chinh",dem);
    */
}