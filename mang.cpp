#include <stdio.h>
#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
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
void nhapMangPtr (int a[],int &n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>*(a+i);
    }
}
void xuatMangPtr (int a[],int n)
{
    for (int i = 0; i < n; i++)
        cout<<*(a+i)<<" ";
    
}
void xuatMang(int a[],int n)
{
    for (int i=0;i<n;i++)
        printf("%5d",a[i]);
}
int tongMang(int a[],int n)
{
    int tong=0;
    for (int i=0;i<n;i++)
        tong=tong+a[i];
    return tong;
}
int maxMang(int a[],int n)
{
    int max=a[0];
    for (int i=0;i<n;i++)
        if (a[i]>max) max=a[i];
    return max;
}
int minMang(int a[],int n)
{
    int min=a[0];
    for (int i=0;i<n;i++)
        if (a[i]<min) min=a[i];
    return min;
}
int demSoChan(int a[],int n)
{
    int dem=0;
    for (int i=0;i<n;i++)
        if (a[i]%2==0) dem++;
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
int demSNT (int a[],int n)
{
    int dem=0;
    for (int i=0;i<n;i++)
        if (ktsongto(a[i])==1) dem++;
    return dem;
}
float tbcsnt(int a[],int n)
{
    int tongnt=0;
    float tbc;
    for (int i=0;i<n;i++)
        if (ktsongto(a[i])==1)
            tongnt=tongnt+a[i];
    tbc=(tongnt*1.0)/demSNT(a,n);
    return tbc;
}
int ngtoLonNhat(int a[],int n)
{
    int max=0;
    for (int i=0;i<n;i++)
        if (ktsongto(a[i])==1 && a[i]>max)
            max=a[i];
        return max;
    return 0;
}
void HoanVi(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void sapXep(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i]>a[j]) HoanVi(a[i],a[j]);
}
void inCacCap(int a[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
            printf("(%d,%d)",a[i],a[j]);
        printf("\n");
    }
}
void inSoChan(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if ((a[i]+a[j])%2==0) printf("\n(%d,%d)",a[i],a[j]);
}
int ktMangTang(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        if (a[i]>a[i+1])
            return 0;
        return 1;
}
int ktMangGiam(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        if (a[i]<a[i+1])
            return 0;
        return 1;
}
int ktMangkTangkGiam(int a[],int n)
{
        if (ktMangTang(a,n)==0 && ktMangGiam(a,n)==0) 
            return 1;
        return 0;
}
void sapXepSoChan(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i]>a[j] && a[i]%2==0 &&a[j]%2==0) HoanVi(a[i],a[j]);
}
void sapXepSoLe(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i]<a[j] && a[i]%2==1 &&a[j]%2==1) HoanVi(a[i],a[j]);
}
int soDuongLeMax(int a[],int n)
{
    int vitri=-1,max=0;
    for (int i=0;i<n;i++)
        if (a[i]%2!=0 && a[i]>max)
        {
            max=a[i];
            vitri=i;
        }
    return vitri;
}
void xoaptu(int a[],int &n,int k)
{
    for (int i=k;i<n;i++)
        a[i]=a[i+1];
    if(k<n) n--;
}
void tansoXuatHien(int a[],int n)
{
    int d[1000];
    for (int i=0;i<n-1;i++)
        d[i]=1;
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i]==a[j] &&d[i]>0)   //d[i]>0 nghia la a[j] chua duyet qua
            {
                d[i]=d[i]+1;
                d[j]=0;  //a[j] da dem roi
            }
    for (int i=0;i<n;i++)
        if (d[i]>0) printf("\n%d xuat hien %d",a[i],d[i]);
}
int USCLN(int a,int b)
{
    while (a!=b)
        if (a>b) a=a-b;
        else b=b-a;
    return a;
}
int BSCNN(int a,int b)
{
    int d=USCLN(a,b);
    return (a*b/d);
}
int USCLNmang(int a[],int n)
{
    int t;
    if (n==1) return a[0];
    else
    {
        t=a[0];
        for (int i=0;i<n;i++)
            t=USCLN(t,a[i]);
        return t;
    }
}
int BSCNNmang(int a[],int n)
{
    int t;
    if (n==1) return a[0];
    else
    {
        t=a[0];
        for (int i=0;i<n;i++)
            t=BSCNN(t,a[i]);
        return t;
    }
}
void sx(int a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(ktsongto(a[j])==1 &&ktsongto(a[i])==0) HoanVi(a[i],a[j]);
}
void SapXepSo(int a[],int n)
{
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
        {
            if (a[i]==0 && a[j]%2==0) HoanVi(a[i],a[j]);
            if (a[i]%2!=0 && a[j]==0) HoanVi(a[i],a[j]);
        }
} 
void incapSNTCungNhau(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (USCLN(a[i],a[j])==1)
                printf("\n (%d,%d)",a[i],a[j]);
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
void sntKep(int a[],int n)
{
    for (int i=0;i<n;i++)
        if(ktsongto(a[i])==1 &&soDaoNguoc(a[i]))
            printf("%d ",a[i]);
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
int demdoantang(int a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(a[i]>a[i+1]) dem++;
	return dem;
}
void SelectionSort (int a[],int n)
{
    int i,j,min_idx;
    for (int i=0;i<n-1;i++)
    {
        min_idx=i;      //gan ptu dau tien cua mang
        for (int j=i+1;j<n;j++)
            if (a[j]<a[min_idx])
                min_idx=j;     //co ptu j nao nho hon min_idx thi gan vao min_idx
        HoanVi(a[i],a[min_idx]);       //hoan ptu nho nhat voi ptu min_idx
    }  
}
void BubbleSort (int a[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=n-1;j>i;j--)
            if (a[j]<a[j-1]) HoanVi(a[j],a[j-1]);   //neu ptu duoi>ptu tren thi hoan doi
    }
}
void InsertionSort(int a[], int n)
{
	for (int i = 1,j; i < n; i++)
	{
		int tmp = a[i];		//luu lai gt thu 2 cua mang
		// thuc hien doi cho cac gt
// for (j = i; j > 0; j--)
// neu gt sau<gt truoc
// if(tmp < data[j-1])
// data[j] = data[j-1];
		for (j = i; j > 0 && tmp < a[j - 1]; j--)
			a[j] = a[j - 1];
		a[j] = tmp;	//thuc hien viec chen gia tri
	}
}
void ShellSort (int a[],int n)
{
    int i,j,hCnt,h;
    int increments[20],k;
    for (h=1,i=0;h<n;i++)
    {
        increments[i]=h;
        h=3*h+1;
    }
    for (i--;i>=0;i--)
    {
        h=increments[i];
        for (hCnt=h;hCnt<2*h;hCnt++)
        {
            for (j=hCnt;j<n;)
            {
                int tmp=a[j];
                k=j;
                while (k-h>=0 && tmp<a[k-h])
                {
                    a[k]=a[k-h];
                    k=k-h;
                }
                a[k]=tmp;
                j+=h;
            }
        }
    }
}
void ShellSort2 (int a[],int n)
{
    int i,j,tmp;
    int increment=pow (2,(int)(log(n)/log(2)))-1;
    for (increment;increment>0;increment/=2)
    {
        for (i=increment;i<n;i++)
        {
            tmp=a[i];
            for (j=i;j>=increment;j-=increment)
                if (tmp<a[j-increment]) a[j]=a[j-increment];
                else break;
            a[j]=tmp;
        }
    }
}
void Clock (int a[],int n)
{
    clock_t start,end;
    double time_use;
    start=clock();
    ShellSort(a,n);
    end=clock();
    time_use=(double)(end-start)/CLOCKS_PER_SEC;
    printf("Time = %f",time_use);
    
}
int main()
{
    int n,*a;
    cout<<"Nhap so ptu:";
    cin>>n;
    a=new int[n];
    int tong,max,min,demsnt,demsc,snt,vitri,k,ucln,bcnn;
    float tbc;
    nhapMangPtr(a,n);
    xuatMangPtr(a,n);
    ShellSort2(a,n);
    printf("\n");
    xuatMangPtr(a,n);
    system("pause");
    
    //tansoXuatHien(a,n);
    //sx(a,n);
    //sntKep(a,n);
    //SapXepSo(a,n);
    //printf("Nhap vi tri can xoa:");
    //scanf("%d",&k);
    //xoaptu(a,n,k);
    //sapXep(a,n);
    //inCacCap(a,n);
    //sapXepSoChan(a,n);
    //sapXepSoLe(a,n);
    //xuatMang(a,n);
    /*
    tong=tongMang(a,n);
    printf("\nTong la:%d",tong);
    max=maxMang(a,n);
    printf("\nMax la:%d",max);
    min=minMang(a,n);
    printf("\nMin la:%d",min);
    demsnt=demSNT(a,n);
    printf("\nSo cac so ngto la:%d",demsnt);
    demsc=demSoChan(a,n);
    printf("\nSo cac so chan la:%d",demsc);
    tbc=tbcsnt(a,n);
    printf("\nTBC la:%.2f",tbc);
    snt=ngtoLonNhat(a,n);
    printf("\nSo ngto lon nhat la:%d",snt);
    vitri=soDuongLeMax(a,n);
    printf("\nVi tri so nguyen le lon nhat la:%d",vitri);
    //incapSNTCungNhau(a,n);
    ucln=USCLNmang(a,n);
    printf("\nUSCLN la %d",ucln);
    bcnn=BSCNNmang(a,n);
    printf("\nBSCNN la %d",bcnn);
    //inSoChan(a,n);
    */
    /*
    if (ktMangTang(a,n)==1) printf("\nDay tang");
    else if(ktMangGiam(a,n)==1) printf("\nDay giam");
    else printf("\nDay k tang k giam");
    */
}
