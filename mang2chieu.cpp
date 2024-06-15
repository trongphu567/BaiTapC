#include <stdio.h>
#include <math.h>
void nhapMatran (int a[5][5],int &m,int &n)
{
    printf("Nhap so dong:");
    scanf("%d",&m);
    printf("Nhap so cot:");
    scanf("%d",&n);
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            {
                printf("a[%d][%d]=",i,j);
                scanf("%d",&a[i][j]);
            }
}
void xuatMatran (int a[5][5],int m,int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
            printf("%d ",a[i][j]);
    printf("\n");
    }
}
int tongChanMT(int a[][5],int m,int n)
{
    int tong=0;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            if (a[i][j]%2==0) tong+=a[i][j];
    return tong;
}
int ktsongto(int n)
{
    int dem=0,kq=0;
    for (int i=1;i<=n;i++)
        if (n%i==0) dem++;
    if (dem==2) kq=1;
    return kq;
}
int demNTMT (int a[][5],int m,int n)
{
    int dem=0;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            if (ktsongto(a[i][j])) dem++;
    return dem;
}
int maxNTMT (int a[][5],int m,int n)
{
    int max=0;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            if (ktsongto(a[i][j])==1 && a[i][j]>max) max=a[i][j];
    return max;
}
int maxChinhphuong (int a[][5],int m,int n)
{
    int max=0;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
            if ((sqrt(a[i][j])==int(sqrt(a[i][j]))) && (a[i][j]>max))
                max=a[i][j];
    }
    return max;
}
int ktDongTang(int a[][5],int m,int n)
{
    int flag;
    for (int i=0;i<m;i++)
    {
        flag=0;
        for (int j=0;j<n-1;j++)
            if (a[i][j]<a[i][j+1]) flag=1;
        if (flag==1) return 1;
    }
    return 0;
}
int ktDongGiam(int a[][5],int m,int n)
{
    int flag;
    for (int i=0;i<m;i++)
    {
        flag=1;
        for (int j=0;j<n-1;j++)
            if (a[i][j]>a[i][j+1]) flag=0;
        if (flag==1) return 1;
    }
    return 0;
}
void ktDongkTangkGiam (int a[][5],int m,int n)
{
    for (int i=0;i<m;i++)
        for (int j=0;j<n-1;j++)
            if (ktDongTang(a,m,n)==1 && ktDongGiam(a,m,n)==1) printf("Chua dong tang va giam");
            else if (ktDongTang(a,m,n)==1) printf("Chua dong tang k chua dong giam");
            else if (ktDongGiam(a,m,n)==1) printf("Chua dong giam k chua dong tang");
            else printf("k chua dong tang va giam");
}
void HoanVi(int &a,int &b)
{
    int tam=a;
    a=b;
    b=tam;
}
void sapXepDong (int a[][5],int m,int n)
{
    for (int i=0;i<m;i++)
        for (int j=0;j<n-1;j++)
            for (int k=j+1;k<n;k++)
                if (a[i][j]>a[i][k]) HoanVi(a[i][j],a[i][k]);
}
void sapXepCot (int a[][5],int m,int n)
{
    for (int i=0;i<m;i++)
        for (int j=0;j<n-1;j++)
            for (int k=j+1;k<n;k++)
                if (a[j][i]>a[k][i]) HoanVi(a[j][i],a[k][i]);
}
void HoanVi2Dong (int a[][5],int m,int n,int k,int l)
{
    for (int i=0;i<n;i++)
        HoanVi(a[k][i],a[l][i]);
}
int ktDoiXung (int a[][5],int m,int n)
{
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            if (a[i][j]!=a[j][i]) return 0;
    return 1;
}
void MaxDong(int a[][5],int m,int n)
{
    for (int i=0;i<m;i++)
    {
        int max=a[i][0];
        for (int j=0;j<n;j++)
            if (a[i][j]>max) max=a[i][j];
        printf("\nMax dong %d la %d",i,max);
    }
}
void SwapRowMatrix(int a[5][5],int m,int n)
{
    for (int i=m-1;i>=0;i--)
    {
        for (int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
 
}
int main()
{
    int a[5][5],n,m,k,l,tong,so,max,kt,kt2;
    /*
    nhapMatran(a,m,n);
    xuatMatran(a,m,n);
    printf("\n");
    //sapXepDong(a,m,n);
    sapXepCot(a,m,n);
    xuatMatran(a,m,n);
    */
    /*
    tong=tongChanMT(a,m,n);
    printf("Tong chan la:%d",tong);
    so=demNTMT(a,m,n);
    printf("\nCo %d so ngto",so);
    max=maxNTMT(a,m,n);
    printf("\nSo ngto lon nhat la:%d",max);
    */
    /*
    kt=ktDongTang(a,m,n);
    kt2=ktDongGiam(a,m,n);
    if (kt==1) printf("\nCo dong tang");
    else printf("\nk co dong tang");
    if (kt==1) printf("\nCo dong giam");
    else printf("\nk co dong giam");
    */
    /*
    nhapMatran(a,m,n);
    xuatMatran(a,m,n);
    printf("Muon hoan vi 2 dong nao:");
    scanf("%d%d",&k,&l);
    HoanVi2Dong(a,m,n,k,l);
    xuatMatran(a,m,n);
    */
    /*
    nhapMatran(a,m,n);
    xuatMatran(a,m,n);
    if (ktDoiXung(a,m,n)==1) printf("Ma tran doi xung");
    else printf("Ma tran k doi xung");
    */
    nhapMatran(a,m,n);
    xuatMatran(a,m,n);
    SwapRowMatrix(a,m,n);
    
    
}