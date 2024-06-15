#include <iostream>
using namespace std;
void Readfile (int a[5][5],int &m,int &n)
{
    FILE *fp;
    fp=fopen("C:\\Users\\Dell\\Documents\\bai3.inp","r");
    if (!fp)
    {
        cout<<"Cannot open file";
        exit(0);
    }
    fscanf(fp,"%d",&m);
    fscanf(fp,"%d",&n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fscanf(fp,"%d",&a[i][j]);
        }
    }
    fclose(fp);
}
void printMatrix (int a[5][5],int m,int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}
int MaxRow (int a[5][5],int m,int n)
{
    int i;
    int max=a[m][0];
    for (i = 1; i < n; i++)
    {
        if (a[m][i]>max) max=a[m][i];
    }
    return max;
    
}
int MinCol (int a[5][5],int m,int n)
{
    int j;
    int min=a[0][n];
    for (j = 1; j < m; j++)
    {
        if (a[j][n]<min) min=a[j][n];
    }
    return min;
}
void SaddlePoint (int a[5][5],int m,int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j]==MaxRow(a,i,n) && a[i][j]==MinCol(a,m,j))
                cout<<"Vi tri diem yen ngua: "<<i<<" "<<j<<endl;
        }
        
    }
}
int MaxMatrix (int a[5][5],int m,int n)
{
    int max=a[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j]>max) max=a[i][j];
        }
        
    }
    return max;
    
}
//trung binh cong cac ptu duoi dcheo chinh
float Average (int a[5][5],int m,int n)
{
    int sum=0,count=0;
    float avg;
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            sum+=a[i][j];
            count++;
        }
        
    }
    avg=(sum*1.0)/(count);
    return avg;
}
int SumNum (int n)
{
    int sum=0;
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main()
{
    int a[5][5],m,n;
    Readfile(a,m,n);
    printMatrix(a,m,n);
    SaddlePoint(a,m,n);
    cout<<"Max ma tran = "<<MaxMatrix(a,m,n)<<endl;
    cout<<"Average = "<<Average(a,m,n);
    system("pause");
}