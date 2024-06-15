//ham cong 2 so nguyen dang 1
/*
#include <stdio.h>
int cong(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
//ham cong 2 so nguyen dang 2 (phai chay duoi cpp)
void cong2(int a,int b,int &c)
{
    c=a+b;
}
int main()
{
    int x,y,kq;
    printf("\nNhap 2 so nguyen:");
    scanf("%d%d",&x,&y);
    kq=cong(x,y);
    printf("%d + %d =%d ",x,y,kq);
    cong2(x,y,kq);
    printf("%d + %d =%d ",x,y,kq);

}
*/
//ham kt so ngto
/*
#include <stdio.h>
int ktsongto(int n)
{
    int dem=0,kq=0;
    for (int i=1;i<=n;i++)
        if (n%i==0) dem++;
    if (dem==2) kq=1;
    return kq;
}
int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    if (ktsongto(n)==1) printf("%d la so ngto",n);
    else printf("%d k la so ngto",n);
    //for (int i=1;i<=100;i++)
        //if (ktsongto(i)==1) printf("%d ",i);
}
*/
//kt 1 so ngto
//nhap n
//if (ktsongto(n)==1) printf("%d la so ngto",n)
//else ...
//songto nho nhat con lon hon n
/*
#include <stdio.h>
int ktsongto (int n)
{
    int dem=0,kq=0;
    for (int i=1;i<=n;i++)
        if (n%i==0) dem++;
    if (dem==2) kq=1;
    return kq;
}
int sntNhoHonN (int n)
{
    int i=n-1;
    while (ktsongto(i)==0) i--;
    return i;
        
}
int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("So ngto nho hon n la : %d",sntNhoHonN(n));
}
*/
/*
#include <stdio.h>
int ktsongto (int n)
{
    int dem=0,kq=0;
    for (int i=1;i<=n;i++)
        if (n%i==0) dem++;
    if (dem==2) kq=1;
    return kq;
}
int sntLonHonN (int n)
{
    int i=n+1;
    while (ktsongto(i)==0) i++;
    return i;
}
int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("so ngto nho nhat lon hon n la:%d",sntLonHonN(n));
}
*/
//kt so chinh phuong
/*
#include <stdio.h>
#include <math.h>
int sochinhphuong(int n)
{
    int a=sqrt(n);
    return (a*a==n);
}
int sochinhphuong2(int n)
{
    int a=sqrt(n),kq=0;
    if (a*a==n) kq=1;
    return kq;
}
int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    if (sochinhphuong(n)==1) printf("%d la so chinh phuong",n);
    else printf("%d k la so chinh phuong",n);
    //for (int i=1;i<=100;i++)
        //if (sochinhphuong(i)==1) printf("%d ",i);
}
*/
//kt so hoan chinh
/*
#include <stdio.h>
int soHoanChinh(int n)
{
    int sum=0,kq=0;
    for (int i=1;i<n;i++)
        if (n%i==0) sum+=i;
    if (sum==n) kq=1;
    return kq;
}
int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    if (soHoanChinh(n)==1) printf("%d la so hoan chinh",n);
    else printf("%d k la so hoan chinh",n);
}
*/
/*
#include <stdio.h>
//ham kt so dao nguoc
int soDaoNguoc(int n)
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
int soDoiXung(int n)
{
    if (soDaoNguoc(n)==n) return 1;
    return 0;
}
int main()
{
    
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    
    printf("So dao nguoc la: %d",soDaoNguoc(n));
    if (soDoiXung(n)==1) printf("\n%d la so doi xung",n);
    else printf("%d k la so doi xung",n);
}    
*/
/*
#include <stdio.h>
int UCLN(int a,int b)
{
    while (a!=b)
    {
        if (a>b) a=a-b;
        else b=b-a;
    }
    return a;//vi a va b bang nhau nen return a or b deu duoc(day la truong hop a=b)
    
}
int main()
{
    int a,b;
    printf("Nhap 2 so nguyen:");
    scanf("%d%d",&a,&b);
    printf("UCLN la:%d",UCLN(a,b));
}
*/
//tim BCNN tu UCLN
/*
#include <stdio.h>
int UCLN (int a,int b)
{
    while(a!=b)
    {
        if (a>b) a=a-b;
        else b=b-a;
    }
    return a;
}
int main()
{
    int a,b,BCNN;
    printf("Nhap a,b:");
    scanf("%d%d",&a,&b);
    BCNN=(a*b)/UCLN(a,b);
    printf("BCNN la:%d",BCNN);
}
*/
/*
#include <stdio.h>
int main()
{
    int n,mau=1,dau=1;
    float tu=1,x,tong=1;
    printf("Nhap n,x:");
    scanf("%d%f",&n,&x);
    for (int i=1;i<=n;i++)
    {
        tu=tu*x;
        mau=mau+2*i+1;
        dau=dau*(-1);
        tong=tong+(tu*dau)/(mau*1.0);
    }
    printf("Tong la:%.2f",tong);
}
*/
/*
#include <stdio.h>
int ktsongto(int n)
{
    int dem=0,kq=0;
    for (int i=1;i<=n;i++)
        if (n%i==0) dem++;
    if (dem==2) kq=1;
    return kq;
}
int sieunt(int n)
{
    int kq=1;
    while (n>0)
    {
        int dv=n%10;
        if (ktsongto(dv)==0) kq=0;
        n=n/10;
    }
    return kq;
}
int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    if (sieunt(n)==1) printf("%d la sieu nt",n);
    else printf("%d k la sieu nt",n);
}
*/
#include <stdio.h>
int ktsongto(int n)
{
    int dem=0,kq=0;
    for (int i=1;i<=n;i++)
        if (n%i==0) dem++;
    if (dem==2) kq=1;
    return kq;
}
int soDaoNguoc(int n)
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
int soDoiXung(int n)
{
    if (soDaoNguoc(n)==n) return 1;
    return 0;
}
int main()
{
    for (int i=10000;i<100000;i++)
        if (soDoiXung(i)==1 &&ktsongto(i)==1) printf(" %d",i);
}
