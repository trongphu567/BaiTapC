//bai 1
/*
#include <stdio.h>
int ktsongto (int n)
{
    int dem=0;
    for (int i=1;i<=n;i++)
        if (n%i==0) dem++;      //n chia het cho i thi no la 1 uoc
    if (dem==2) return 1;       //so ngto la so chi co 2 uoc la 1 va chinh no
    return 0;
}
int main()
{
    int n,dem=0;
    printf("Nhap n = ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        if (ktsongto(i)==1) dem++;
    printf("Co %d so nguyen to tu 1 den %d",dem,n);
}
*/
//bai 2
/*
#include <stdio.h>
void phantichSNT(int n)
{
	int i=2;        //muon phan tich ra so ngto thi so ngto nho nhat phai la 2
	while (n>1)
	{
		if (n%i==0)     //neu n chia het cho i
		{
			printf("%d",i);	        //in so i do ra
			n=n/i;      //tiep tuc lay phan thuong chia tiep cho so i
			if(n>=i) printf("*");
		}
		else i++;       //neu n ko chia het cho i thi tang i len de cho n chia tiep
	}
}
int main()
{
    int n;
    printf("Nhap n = ");
    scanf("%d",&n);
    phantichSNT(n);
}
*/
//bai 3
/*
#include <stdio.h>
int UCLN (int a,int b)
{
    while (a!=b)
    {
        if (a>b) a=a-b;     //pp tru cho toi khi 2 so nay bang nhau thi so do la UCLN
        else b=b-a;
    }
    return a;       //return a hoac b deu duoc vi luc nay a=b
}
int BCNN (int a,int b)
{
    int bcnn;
    bcnn=(a*b)/UCLN(a,b);
    return bcnn;
}
int main ()
{
    int a,b,ucln,bcnn;
    printf("Nhap a,b = ");
    scanf("%d%d",&a,&b);
    ucln=UCLN(a,b);
    bcnn=BCNN(a,b);
    printf("UCLN la: %d",ucln);
    printf("\nBCNN la: %d",bcnn);
}
*/
//bai 4
/*
#include <stdio.h>
int soDaoNguoc (int n)
{
    int sdn=0,dv;
    while (n!=0)
    {
        dv=n%10;            //chia lay phan du cua n de lay so dung o hang don vi
        sdn=sdn*10+dv;      //nhan len cho 10 de dao nguoc so
        n=n/10;             //lay phan nguyen de chia tiep cho 10
    }
    return sdn;
}
int main()
{
    int n,sdn;
    printf("Nhap n = ");
    scanf("%d",&n);
    sdn=soDaoNguoc(n);
    printf("So dao nguoc cua %d la %d",n,sdn);
}
*/
//bai 5
/*
#include <stdio.h>
long doiNhiPhan (int n)
{
    int sodu,daonguocbit=1,sonhiphan=0;
    while (n>0)
    {
        sodu=n%2;       //lay so du truoc
        sonhiphan=sonhiphan+sodu*daonguocbit;       //ket qua sodu se ra 0 hoac 1 tuy o tren
        n=n/2;          //tiep tuc lay n chia 2 lay phan nguyen chia du tiep
        daonguocbit=daonguocbit*10;     //dao nguoc so lai do tinh chat doi thap phan sang nhi phan
    }
    return sonhiphan;
}
int main()
{
    int n;
    long sonhiphan;
    printf("Nhap n = ");
    scanf("%d",&n);
    sonhiphan=doiNhiPhan(n);
    printf("Doi sang nhi phan la: %ld",sonhiphan);
}
*/
//bai 6
/*
#include <stdio.h>
int TheTichHHCN (int a,int b,int h)
{
    int V;
    V=a*b*h;
    return V;
}
int main()
{
    int a,b,h,V;
    do
    {
        printf("Nhap a (a>0):");
        scanf("%d",&a);
        printf("Nhap b (b>0):");
        scanf("%d",&b);
        printf("Nhap h (h>0):");
        scanf("%d",&h);
    } 
    while (a<=0 || b<=0 || h<=0);
    V=TheTichHHCN(a,b,h);
    printf("The tich la: %d",V);  
}
*/
//bai 7
/*
#include <iostream>
using namespace std;
int mytery (int a,int b)
{
    if (b==1) return a;
    else return a+mytery(a,b-1); //ham de quy tinh tich cua a*b (tong cua b lan a)
}
int main()
{
    int x,y;
    cout <<" Vao 2 so nguyen: ";
    cin>>x>>y;
    cout <<"Ket qua la "<<mytery(x,y);
}
*/
//bai 8
/*
#include <iostream>
using namespace std;
int sum (int n)
{
    if (n==0) return 0;         //dieu kien de ham de quy ket thuc
    else return n+sum(n-1);     //de quy goi lai chinh no voi 1 tham so khac
}
int main()
{
    int n;
    cout <<"Nhap n = ";
    cin>>n;
    cout <<"Tong la: "<<sum(n);
}
*/
//bai 9
/*
#include <stdio.h>
void nhapMang(int a[],int &n)
{
    printf("Nhap n = ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
int MinMang (int a[],int n)
{
    int min=a[0];
    for (int i=0;i<n;i++)
        if (a[i]<min) min=a[i];
    return min;
}
int main()
{
    int a[100],n,min;
    nhapMang(a,n);
    min=MinMang(a,n);
    printf("GTNN cua mang la: %d",min);
}
*/
//bai 10
/*
#include <stdio.h>
void nhapMang (int a[],int &n)
{
    printf("Nhap n = ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void demSoDuong (int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        int dem=0,temp=0;
        while (a[i]>0)
        {
            temp=a[i]%10;           //dung bien tam xet xem mỗi chu so do chia lay du co duong hay k
            a[i]=a[i]/10;           //chia nguyen cho 10 de duyet tung chu so cua so do
            if (temp>0) dem++;      //neu so du >0 thi no la so nguyen duong => bien dem tang len
                        //con neu so du mỗi chu so <=0 thi k dc tinh la nguyen duong =>bien dem k tang
        }
        printf("%d ",dem);
    }
}
int main()
{
    int a[100],n;
    nhapMang(a,n);
    demSoDuong(a,n);
}
*/
//bai 11
/*
#include <stdio.h>
#include <math.h>           //khai bao thu vien math de dung ham pow (luy thua)
void nhapMang (int a[],int &n)
{
    printf("Nhap n = ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
float TBNMang (int a[],int n)
{
    int tich=1,dem=0;       //trung binh nhan la can bac n cua tich n so
    for (int i=0;i<n;i++)
        if (a[i]>0)         //dieu kien so nguyen duong
        {
            tich=tich*a[i];     //lay tich lam cơ số 
            dem++;              //lay dem lam can bac n
        }
    return pow(tich,1.0/dem);           //tich^1/dem=can bac dem cua tich
}
int main()
{
    int a[100],n;
    float tbn;
    nhapMang(a,n);
    tbn=TBNMang(a,n);
    printf("TB nhan la: %f",tbn);
}
*/
//bai 12
/*
#include <stdio.h>
void nhapMang (int a[],int &n)
{
    printf("Nhap n = ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
int demso (int a[],int n,int x)     //dem xem so x xuat hien bao nhieu lan trong mang
{
    int dem=0;
    for (int i=0;i<n;i++)
        if (a[i]==x) dem++;         //neu ptu nao bang x thi bien dem tang len
    return dem;
}
int main()
{
    int a[100],n,x,dem;
    nhapMang(a,n);
    printf("Nhap x = ");
    scanf("%d",&x);
    dem=demso(a,n,x);
    printf("So %d xuat hien %d lan",x,dem);
}
*/
//bai 13
/*
#include <stdio.h>
int ktsongto (int n)
{
    int dem=0;
    for (int i=1;i<=n;i++)
        if (n%i==0) dem++;
    if (dem==2) return 1;
    return 0;
}
void mangsongto(int a[],int &m,int &n)
{
    m=0;
    printf("Nhap n = ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        if (ktsongto(i)==1)     
        {
            a[m]=i;         //neu so nao la so ngto thi dua vao mang
            m++;
        }
}
void timsongto (int a[],int m)
{
    int dem=0;
    for (int i=0;i<m-2;i++)
        for (int j=i+1;j<m-1;j++)
            for (int k=j+1;k<m;k++)
                if (a[i]*a[i]+a[j]*a[j]==a[k])
                {
                    printf("\n%d %d %d",a[i],a[j],a[k]);
                    dem++;
                }
    if (dem==0) printf("-1");
}
int main()
{
    int a[100],n,m;
    mangsongto(a,m,n);
    timsongto(a,m);
}
*/
//bai 14
/*
#include <stdio.h>
void nhapMang (int a[],int &n)
{
    printf("Nhap n = ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void xuatMang (int a[],int n)
{
    for (int i=0;i<n;i++)
        printf("%d ",a[i]);
}
void HoanVi (int &a,int &b)
{
    int tam=a;
    a=b;
    b=tam;
}
void SapXepTang (int a[],int n)
{
    for (int i=0;i<n-1;i++)         //thuat toan sap xep doi cho truc tiep
        for (int j=i+1;j<n;j++)
            if (a[i]>a[j]) HoanVi(a[i],a[j]);
}
int main()
{
    int a[100],n;
    nhapMang(a,n);
    xuatMang(a,n);
    SapXepTang(a,n);
    printf("\n");
    xuatMang(a,n);
}
*/
//bai 15
/*
#include <stdio.h>
//int a[-20] la sai do dai mang phai la so duong
// int a[5]=1,2,3,4,5 la sai do thieu dau {}
int main()
{
    int a[4],b[5]={1,2,3,4};        //b={1,2,3,4,0}
    //a=b; la sai do 2 mang k the gan cho nhau duoc
    a[0]=b[1];
    printf("%d ",a[0]);
    printf("%d",b[1]);
    //for (int i=0;i<5;i++)
        //printf("%d ",b[i]);
}
*/
//bai 16
/*
#include <stdio.h>
#include <cstdlib>      //thu vien chua ham srand va rand
#include <time.h>       //thu vien chua ham time
void random ()
{

    int a=0,b=0,c=0,d=0,e=0,f=0;
    srand(time(0));         //cung cấp seed cho bộ sinh số ngẫu nhiên được sử dụng bởi hàm rand
    //dung time tai 0 de cho ra thoi diem o hien tai
    for (int i=1;i<=6000000;i++)
    {
        int sonut=rand()%6+1;       // rand tao ra 1 so ngau nhien tu 0 den rand_max
        if (sonut==1) a++;
        if (sonut==2) b++;
        if (sonut==3) c++;
        if (sonut==4) d++;
        if (sonut==5) e++;
        if (sonut==6) f++;
    }
    printf("Nut 1 xuat hien %d lan",a);
    printf("\nNut 2 xuat hien %d lan",b);
    printf("\nNut 3 xuat hien %d lan",c);
    printf("\nNut 4 xuat hien %d lan",d);
    printf("\nNut 5 xuat hien %d lan",e);
    printf("\nNut 6 xuat hien %d lan",f);
}
int main()
{
    random();
}
*/
//bai 17
/*
#include <stdio.h>
void nhapMaTran (int a[5][5],int &m,int &n)
{
    printf("\nNhap so dong:");
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
void xuatMaTran (int a[5][5],int m,int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
            printf("%d ",a[i][j]);
    printf("\n");
    }
}
void tongMaTran (int a[5][5],int b[5][5],int c[5][5],int m,int n)
{
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            c[i][j]=a[i][j]+b[i][j];        //cong hang voi cot
}
int main()
{
    int a[5][5],b[5][5],c[5][5],m,n;
    printf("Nhap mtran A");
    nhapMaTran(a,m,n);
    printf("\nNhap mtran B");
    nhapMaTran(b,m,n);
    tongMaTran(a,b,c,m,n);
    printf("Tong 2 mtran la:\n");
    xuatMaTran(c,m,n);
}
*/
//bai 18
/*
#include <stdio.h>
void nhapMaTran (int a[5][5],int &m,int &n)
{
    printf("\nNhap so dong:");
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
void xuatMaTran (int a[5][5],int m,int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
            printf("%d ",a[i][j]);
    printf("\n");
    }
}
void tichMaTran (int a[5][5],int b[5][5],int c[5][5],int m,int n,int p)
{
    for (int i=0;i<m;i++)
        for (int j=0;j<p;j++)
        {
            c[i][j]=0;
            for (int k=0;k<n;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];      //hang nhan voi cot(so cot cua a=so dong cua b)
        }
}
int main()
{
    int a[5][5],b[5][5],c[5][5],m,n,p;
    printf("Nhap mtran A");
    nhapMaTran(a,m,n);
    printf("Nhap mtran B");
    nhapMaTran(b,n,p);
    tichMaTran(a,b,c,m,n,p);
    printf("Tich 2 mtran la:\n");
    xuatMaTran(c,m,p);
}
*/
//bai 19
/*
#include <stdio.h>
void nhapMaTran (int a[5][5],int &n)
{
    printf("\nNhap so dong:");
    scanf("%d",&n);
    printf("Nhap so cot:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
} 
int Tongdcheochinh (int a[5][5],int n)
{
    int tong=0;
    for (int i=0;i<n;i++)       //cac ptu nam tren dcheo chinh co chi so dong giong chi so cot
        tong=tong+a[i][i];          //a11+a22+a33
    return tong;
}
int main()
{
    int a[5][5],n,tong;
    printf("\nMa tran vuong");
    nhapMaTran(a,n);
    tong=Tongdcheochinh(a,n);
    printf("Tong tren dcheo chinh la: %d",tong);
}
*/
//bai 20
/*
#include <stdio.h>
void nhapMaTran (int a[5][5],int &n)
{
    printf("\nNhap so dong:");
    scanf("%d",&n);
    printf("Nhap so cot:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
} 
int Tongdcheophu (int a[5][5],int n)
{
    int tong=0;
    for (int i=0;i<n;i++)           //xet tu goc tren ben phai xuong:i tang, j giam
        tong=tong+a[i][n-i-1];      //dcheo phu: i+j=n+1 =>j=n-i-1 (a02,a11,a20...)
    return tong;
}
int main()
{
    int a[5][5],n,tong;
    printf("Ma tran vuong");
    nhapMaTran(a,n);
    tong=Tongdcheophu(a,n);
    printf("Tong tren dcheo phu la: %d",tong);
}
*/
//bai 21
/*
#include <stdio.h>
void nhapMaTran (int a[5][5],int &m,int &n)
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
void xuatMaTran (int a[5][5],int m,int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
            printf("%d ",a[i][j]);
    printf("\n");
    }
}
void HoanVi (int &a,int &b)
{
    int tam=a;
    a=b;
    b=tam;
}
void HoanVi2Cot (int a[5][5],int m,int n,int k,int l)
{
    for (int i=0;i<n;i++)
        HoanVi(a[i][k],a[i][l]);        //hoan doi cot,hang giu nguyen
}
int main()
{
    int a[5][5],m,n,k,l;
    nhapMaTran(a,m,n);
    xuatMaTran(a,m,n);
    printf("Muon hoan vi 2 cot nao: ");
    scanf("%d%d",&k,&l);
    HoanVi2Cot(a,m,n,k,l);
    xuatMaTran(a,m,n);
}
*/
//bai 22
/*
#include <stdio.h>
void nhapMaTran (int a[5][5],int &m,int &n)
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
void xuatMaTran (int a[5][5],int m,int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
            printf("%d ",a[i][j]);
    printf("\n");
    }
}
void HoanVi (int &a,int &b)
{
    int tam=a;
    a=b;
    b=tam;
}
void SapXepCot (int a[5][5],int m,int n)
{
    for (int i=0;i<m;i++)
        for (int j=0;j<n-1;j++)
            for (int k=j+1;k<n;k++)
                if (a[j][i]>a[k][i]) HoanVi(a[j][i],a[k][i]);       //hoan doi hang,cot giu nguyen
}
int main()
{
    int a[5][5],m,n;
    nhapMaTran(a,m,n);
    printf("Ma tran ban dau:\n");
    xuatMaTran(a,m,n);
    SapXepCot(a,m,n);
    printf("Ma tran tang theo cot:\n");
    xuatMaTran(a,m,n);
}
*/
//bai 23
/*
#include <stdio.h>
void nhapMaTran (int a[5][5],int &m,int &n)
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
void xuatMaTran (int a[5][5],int m,int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
            printf("%d ",a[i][j]);
    printf("\n");
    }
}
void MinDong (int a[5][5],int m,int n)
{
    for (int i=0;i<m;i++)           //xet theo tung hang truoc
    {
        int min=a[i][0];            //o moi hang deu gia su min=ptu dau tien cua hang
        for (int j=0;j<n;j++)
            if (a[i][j]<min) min=a[i][j];       //neu ptu cung 1 hang nho hon min
        printf("\nMin dong %d la %d",i,min);
    }
}
void MaxCot (int a[5][5],int m,int n)
{
    for (int j=0;j<n;j++)           //xet theo tung cot truoc
    {
        int max=a[0][j];            //o moi cot deu gia su max=ptu dau tien cua cot
        for (int i=0;i<m;i++)
            if (a[i][j]>max) max=a[i][j];        //neu ptu cung 1 cot lon hon max
        printf("\nMax cot %d la %d",j,max);
    }
}
int main()
{
    int a[5][5],m,n;
    nhapMaTran(a,m,n);
    xuatMaTran(a,m,n);
    MinDong(a,m,n);
    printf("\n");
    MaxCot(a,m,n);
}
*/
//bai 24
/*
#include <stdio.h>
#include <math.h>
struct sophuc
{
    float thuc;
    float ao;
};
void nhapSoPhuc (sophuc &x)
{
    printf("Nhap phan thuc:");
    scanf("%f",&x.thuc);
    printf("Nhap phan ao:");
    scanf("%f",&x.ao);
}
void xuatSoPhuc (sophuc x)
{
    printf("\n%.2f + %.2fi",x.thuc,x.ao);
}
sophuc cong2sphuc (sophuc x,sophuc y)
{
    sophuc tong;
    tong.thuc=x.thuc+y.thuc;
    tong.ao=x.ao+y.ao;
    return tong;
}
sophuc hieu2sphuc (sophuc x,sophuc y)
{
    sophuc hieu;
    hieu.thuc=x.thuc-y.thuc;
    hieu.ao=x.ao-y.ao;
    return hieu;
}
float modunsphuc (sophuc x)
{
    float modun=sqrt(x.thuc*x.thuc+x.ao*x.ao);
    return modun;
}
int main()
{
    sophuc x,y,tong,hieu;
    float modun1,modun2;
    nhapSoPhuc(x);
    nhapSoPhuc(y);
    printf("\nHai so phuc la:");
    xuatSoPhuc(x);
    xuatSoPhuc(y);
    tong=cong2sphuc(x,y);
    printf("\nTong 2 so phuc la:");
    xuatSoPhuc(tong);
    hieu=hieu2sphuc(x,y);
    printf("\nHieu 2 so phuc la:");
    xuatSoPhuc(hieu);
    modun1=modunsphuc(x);
    printf("\nModun x la %f",modun1);
    modun2=modunsphuc(y);
    printf("\nModun y la %f",modun2);
}
*/
//bai 25
/*
#include <stdio.h>
struct diem
{
    int x;
    int y;
};
void nhapToaDo (diem a[],int &n)        //mang chua cac toa do cua cac diem
{
    printf("Nhap n = ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("Nhap x = ");
        scanf("%d",&a[i].x);
        printf("Nhap y = ");
        scanf("%d",&a[i].y);
    }
}
void xetDiem (diem a[],int n)
{
    int namtren=0,namduoi=0,thuocdt=0,dt;
    for (int i=0;i<n;i++)
    {
        dt=3*a[i].x+4*a[i].y+1;
        if (dt>0) namtren++;
        if (dt<0) namduoi++;
        if (dt==0) thuocdt++;
    }
    printf("So diem nam tren la: %d",namtren);
    printf("\nSo diem nam duoi la: %d",namduoi);
    printf("\nSo diem thuoc la: %d",thuocdt); 
}
int main()
{
    int n;
    diem a[100];
    nhapToaDo(a,n);
    xetDiem(a,n);
}
*/
