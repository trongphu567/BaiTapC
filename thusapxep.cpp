#include <stdio.h>
void nhapMatran (int a[][100],int &m,int &n)
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
void xuatMatran (int a[][100],int m,int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
            printf("%d ",a[i][j]);
    printf("\n");
    }
}
void sapXepTang(int a[][100],int soHang,int soCot)
{
    int i,j;
    float tam;
    float mangtg[soHang*soCot];
    for(i=0; i<soHang*soCot; i++)///trước tiên cần gán các phần tử
    ///của mảng 2 chiều cho mảng 1 chiều
        mangtg[i]=a[i/soCot][i%soCot];
  ///Sau đó tiến hành sắp xếp mảng 1 chiều
    for(i=0; i<soHang*soCot-1; i++)
        for(j=soHang*soCot-1; j>i; j--)
            if(mangtg[i]>mangtg[j])
            {
                tam=mangtg[i];
                mangtg[i]=mangtg[j];
                mangtg[j]=tam;
            }
  ///Cuối cùng gán ngược lại mảng 1 chiều cho mảng 2 chiều
    for(i=0; i<soHang*soCot; i++)
        a[i/soCot][i%soCot]=mangtg[i];
}
int main()
{
    int m,n,a[100][100];
    nhapMatran(a,m,n);
    sapXepTang(a,m,n);
    xuatMatran(a,m,n);
}