#include <iostream>
using namespace std;
void Input (int a[5][5],int &n)
{
    cout<<"Nhap kich thuoc mt vuong: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"a["<<i<<"]"<<"["<<j<<"]=";
            cin>>a[i][j];
        }
        
    }
    
}
void Output (int a[5][5],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}
void MulMatrix (int a[5][5],int b[5][5],int c[5][5],int n,int p)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            c[i][j]=0;
            for (int k = 0; k < n; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
            
        }
        
    }
    
}
int main()
{
    int a[5][5],b[5][5],c[5][5],n,p;
    cout<<"Nhap mtran A:"<<endl;
    Input(a,n);
    cout<<"Nhap matran B:"<<endl;
    Input(b,p);
    MulMatrix(a,b,c,n,p);
    cout<<"Tich 2 mtran la:"<<endl;
    Output(c,n);
    system("pause");
}
