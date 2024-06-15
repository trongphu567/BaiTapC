//bai 1
/*
#include <iostream>
using namespace std;

void nhapMang(int a[],int &n)
{
    cout<<"Nhap n =";
    cin>>n;
    for (int i=0;i<n;i++)
        {
            cout<<"a["<<i<<"]=";
            cin>>a[i];
        }
}
void xuatMang(int a[],int n)
{
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void timCapPhanTu (int a[],int k,int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i]+a[j]==k) cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
}
int main()
{
    int n,a[100],k;

    nhapMang(a,n);
    cout<<"Nhap k = ";
    cin>>k;
    xuatMang(a,n);
    timCapPhanTu(a,n,k);
}
*/
//bai 2
/*
#include <iostream>
using namespace std;
void nhapMang(int a[],int &n)
{
    cout<<"Nhap n =";
    cin>>n;
    for (int i=0;i<n;i++)
        {
            cout<<"a["<<i<<"]=";
            cin>>a[i];
        }
}
void xuatMang(int a[],int n)
{
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int duongChayDaiNhat(int a[],int n)
{
    int dem=0,max=0;
    for (int i=0;i<n-1;i++)
        if (a[i]<=a[i+1]) dem++;
        else
        {
            if (dem>max) max=dem;
            dem=1;
        }
        if (dem>max) max=dem;
    return max;
}
int main()
{
    int n,a[100],max;
    nhapMang(a,n);
    xuatMang(a,n);
    max=duongChayDaiNhat(a,n);
    cout<<max;
}
*/
//bai 6
/*
#include<stdio.h>
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
void MaxCot (int a[5][5],int m,int n)
{
    for (int j=0;j<n;j++)
    {
        int max=a[0][j];
        for (int i=0;i<n;i++)
            if (a[i][j]>max) max=a[i][j];
        printf("\nMax cot %d la %d",j,max);
    }
}

int diemYenNgua (int a[5][5],int m,int n)
{
    for (int i=0;i<m;i++)
    {
        int min=a[i][0],idx_cot=0;
        for (int j=1;j<n;j++)
            if(a[i][j]<min)
            {
                min=a[i][j];
                idx_cot=j;
            }
        int k;
        for (int k=0;k<n;k++)
            if (min<a[k][idx_cot]) break;
        if (k==n)
        {
            printf("Diem yen ngua la:%d",min);
            return 1;
        }
        
    }
    return 0;
}

    

int main()
{
    int m,n,a[5][5];
    nhapMatran(a,m,n);
    xuatMatran(a,m,n);
    if (diemYenNgua(a,m,n)==0) printf("K co diem yen ngua");
}
*/
//bai 8
/*
#include <stdio.h>
void nhapMang (int a[5][5],int &n)
{
    printf("Nhap n =");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }

}
void xuatMang (int a[5][5],int n)
{
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
        {
             printf("%d ",a[i][j]);
        printf("\n");
        }
           
}
void chenPhepToan (int a[5][5],int n,int k)
{
    printf("Nhap k =");
    scanf("%d",&k);
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            {
                switch
            }
}
int main()
{
    int n,a[5][5];
    nhapMang(a,n);
    xuatMang(a,n);
}
*/
//bai 11
/*
#include <iostream>
using namespace std;
void CreateMatrix (int a[5][5],int &n)
{
    cout<<"Nhap n=";
    cin>>n;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
        {
        cout<<"a["<<i<<"]"<<"["<<j<<"]"<<"=";
        cin>>a[i][j];
        }
            
}
void PrintMaxtrix (int a[5][5],int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
}
bool SaddlePoint (int a[5][5],int n)
{
    for (int i=0;i<n;i++)
    {
        int min_row=a[i][0],col_idx=0;
        for (int j=1;j<n;j++)
        {
            if (min_row>a[i][j])
            {
                min_row=a[i][j];
                col_idx=j;
            }
        }
        int k;
        for (k=0;k<n;k++)
            if (min_row<a[k][col_idx])
                break;
        if (k==n)
        {
            cout<<"Saddle point = "<<min_row;
            return true;
        }
        
    }
    return false;
}
int main()
{
    int n,a[5][5];
    CreateMatrix(a,n);
    PrintMaxtrix(a,n);
    if (SaddlePoint(a,n)==false)
        cout<<"No saddle point";
}
*/
//bai 12
//y a
/*
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int cspace=0,cnum=0,cchar=0,c=0;
    string s;
    cout<<"Nhap chuoi ki tu:";
    getline(cin,s);
    for (int i=0;i<s.size();i++)
    {
        if (s[i]==' ') cspace++;
        if (s[i]>='0'&& s[i]<='9') cnum++;
        if ((s[i]>='A' && s[i]<='Z')|| (s[i]>='a' && s[i]<='z')) cchar++;
        else c++;
    }
    cout<<"So ki tu khoang trang="<<cspace<<endl;
    cout<<"So ki tu so="<<cnum<<endl;
    cout<<"So ki tu latin="<<cchar<<endl;
    cout<<"So ki tu khac="<<c;
       
}
*/
/*
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s;
    int count=1;
    cout<<"Nhap chuoi ki tu:";
    getline(cin,s);
    for (int i=0;i<s.size();i++)
        if (s[i]==' ' && s[i+1]!=' ') count++;
    cout<<"So tu trong chuoi="<<count;
}
*/
/*
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
char *chuanhoatu (char *s)
{
    tolower(s);
    for (int i=0;i<strlen(s);i++)
        if (s[i]==' ' && s[i+1]!=' ') s[i+1]=toupper(s[i+1]);
    if (s[0]==' ') toupper(s[0]);
    return s;
}
int main()
{
    char *s;
    s="thanh Pho ho chi Minh";
    cout<<chuanhoatu(s);
}
*/
/*
//ky thuat lap trinh con tro
//bai 1 va 2
#include <iostream>
using namespace std;
void nhapMang (int a[],int n);
void xuatMang(int a[],int n);
void chenphantu (int a[],int &n,int k,int x);
void xoaphantu (int a[],int &n,int k);
int main()
{
    int *a,n,k,x;
    cout<<"Nhap so ptu:"<<endl;
    cin>>n;
    a=new int[n];
    nhapMang(a,n);
    xuatMang(a,n);
    cout<<"\nNhap ptu can them va vi tri them:";
    cin>>x>>k;
    chenphantu(a,n,k,x);
    xuatMang(a,n);
    cout<<"\nNhap vi tri can xoa:";
    cin>>k;
    xoaphantu(a,n,k);
    xuatMang(a,n);
    system("pause");
}
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
void chenphantu (int a[],int &n,int k,int x)
{
    for (int i=n;i>k;i--)
        *(a+i)=*(a+i-1);
    *(a+k)=x;
    n++;
}
void xoaphantu (int a[],int &n,int k)
{
    for (int i=k;i<n;i++)
        *(a+i)=*(a+i+1);
    n--;
}
*/
//bai 3
/* #include <iostream>
using namespace std;
void nhapMang (int *&a,int &n)
{
    cout<<"Nhap so ptu:";
    cin>>n;
    a=new int [n];
    for (int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>*(a+i);
    }
}
void xuatMang (int *a,int n)
{
    for (int i=0;i<n;i++)
        cout<<*(a+i)<<" ";
}
void swap (int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b*=tmp;
}
void SelectionSort (int a[],int n)
{
    int i,j,min_idx;
    for (i=0;i<n-1;i++)
    {
        min_idx=i;
        for (j=i+1;j<n;j++)
            if (a[j]<a[min_idx])
                min_idx=j;
        swap(a[i],a[min_idx]);
    }
}
void tronMang (int *a,int *b,int *&c,int m,int n)
{
    c=new int [m+n];
    int k=0;
    for (int i=0;i<m;i++)
        c[k++]=a[i];
    for (int i=0;i<n;i++)
        c[k++]=b[i];
}
int main()
{
    int m,n,*a,*b,*c;
    nhapMang(a,m);
    nhapMang(b,n);
    tronMang(a,b,c,m,n);
    SelectionSort(c,m+n);
    xuatMang(c,m+n);
    delete a;
    delete b;
    delete c;
    system("pause");
}  */
//bai 4
/* #include <iostream>
#include <math.h>
using namespace std;   
void nhapMang (int *&a,int &n)
{
    a=new int [n];
    cout<<"Nhap so ptu:";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>*(a+i);
    }
}
void xuatMang (int *a,int n)
{
    for (int i=0;i<n;i++)
        cout<<*(a+i)<<" ";
}
void xoaphantu (int *a,int &n,int k)
{
    for (int i=k;i<n;i++)
        *(a+i)=*(a+i+1);
    n--;
}
bool ktSNT (int n)
{
    if (n<2) return false;
    for (int i=2;i<=sqrt(n);i++)
        if (n%i==0) return false;
    return true;
}
void xoaSNT (int *a,int &n)
{
    for (int i=0;i<n;i++)
        if (ktSNT(*(a+i)))
        {
            xoaphantu(a,n,i);
            i--;
        }
}
int main()
{
    int *a,n;
    nhapMang(a,n);
    xuatMang(a,n);
    cout<<endl;
    xoaSNT(a,n);
    xuatMang(a,n);
    delete a;
    system("pause");
} */
//bai 6
#include <iostream>
using namespace std;
void nhapMang (int *&a,int &n)
{
    cout<<"Nhap so ptu:";
    cin>>n;
    a=new int [n];
    for (int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>*(a+i);
    }
}
void xuatMang (int *a,int n)
{
    for (int i=0;i<n;i++)
        cout<<*(a+i)<<" ";
}
void swap (int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b*=tmp;
}
void tronMang (int *a,int *b,int *&c,int m,int n)
{
    c=new int [m+n];
    int k=0;
    for (int i=0;i<m;i++)
        c[k++]=a[i];
    for (int i=0;i<n;i++)
        c[k++]=b[i];
}
int main()
{
    int m,n,*a,*b,*c;
    nhapMang(a,m);
    nhapMang(b,n);
    tronMang(a,b,c,m,n);
    xuatMang(c,m+n);
    delete a;
    delete b;
    delete c;
    system("pause");
}





