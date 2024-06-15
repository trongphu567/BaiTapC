#include <stdio.h>
#include <math.h>
//ham kt songto
long ktsongto (long n)
{
    int dem=0,kq=0;
    for (int i=1;i<=n;i++)
        if (n%i==0) dem++;
    if (dem==2) kq=1;
    return kq;
}
//ham kt so chinh phuong
long soChinhPhuong(long n)
{
    int a=sqrt(n),kq=0;
    if (a*a==n) kq=1;
    else kq=0;
    return kq;    
}
//ham kt so hoan chinh
long soHoanChinh(int n)
{
    int sum=0,kq=0;
    for (int i=1;i<n;i++)
        if (n%i==0) sum+=i;
    if (sum==n) kq=1;
    return kq;
}
//ham kt so dao nguoc
long soDaoNguoc(long n)
{
    int dv,sdn=0;
    while (n>0)
        {
            dv=n%10;
            sdn=sdn*10+dv;
            n=n/10;
        }
    return sdn;
}
//ham kt so doi xung
long soDoiXung(long n)
{
    if (soDaoNguoc(n)==n) return 1;
    return 0;
}
int inso(int n)
{
    for (int i=1;i<=n;i++)
        if ((ktsongto(i)==1) &&(soDoiXung(i)==1)) printf("%d ",i);
}
int main()
{
    long n;
    //long dem1=0,dem2=0,dem3=0;
    printf("Nhap n:");
    scanf("%d",&n);
    inso(n);
    
    /*
        if (ktsongto(i)==1) dem1++;
    for (int i=0;i<=n;i++)
        if (soChinhPhuong(i)==1) dem2++;
        
    for (int i=1;i<n;i++)
        if (soHoanChinh(i)==1) dem3++;
    */    
    //printf("\nCo %d so ngto",dem1);
    //printf("\nCo %d so chinh phuong",dem2);
    //printf("\nCo %d so hoan chinh",dem3);

}