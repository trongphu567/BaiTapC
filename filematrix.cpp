#include <iostream>
using namespace std;
#define size 10
void Readfile (int a[size][size],int &m,int &n)
{
    FILE *fp;
    fp=fopen("C:\\Users\\Dell\\Documents\\matrix.inp","r");
    if (!fp)
    {
        cout<<"Cannot open file!";
        exit(0);
    }
    fscanf(fp,"%d%d",&m,&n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fscanf(fp,"%d",&a[i][j]);
        }
        
    }
    fclose(fp);
    
}
void SearchValue (int a[size][size],int m,int n)
{
    int max=a[0][0],max2=-INT_MAX;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j]>max)
            {
                max2=max;
                max=a[i][j];
            }
            else
            {
                if (a[i][j]>max2 && a[i][j]!=max)
                    max2=a[i][j];

            }
        }
        
    }
    cout<<"Max mang:"<<max<<"\t"<<"Max nhi:"<<max2<<endl;
    
}
void printMatrix (int a[size][size],int m,int n)
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
void Swap (int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void SortRow (int a[size][size],int m,int n)
{
    for (int i=0;i<m;i++)
        for (int j=0;j<n-1;j++)
            for (int k=j+1;k<n;k++)
                if (a[i][j]>a[i][k])
                    Swap(a[i][j],a[i][k]);
    /* for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }  */
    
}
void MaxRow (int a[size][size],int m,int n)
{
    
    for (int i = 0; i < m; i++)
    {
        int max=a[i][0];
        for (int j = 0; j < n; j++)
        {
            
            if (a[i][j]>max) 
            {
                max=a[i][j];
                
            }

            
        }
        cout<<"Max dong "<<i<<" la:"<<max<<endl;
        
    }
    
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
void printSumNum (int a[size][size],int m,int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<SumNum(a[i][j])<<" ";
        }
        cout<<endl;
        
    }
    
}
int main()
{
    int a[size][size],m,n;
    Readfile(a,m,n);
    SearchValue(a,m,n);
    //SortRow(a,m,n);
    printMatrix(a,m,n);
    MaxRow(a,m,n);
    printSumNum(a,m,n);
    system("pause");
}