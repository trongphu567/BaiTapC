#include <stdio.h>
#include <stdlib.h>
void Readfile (int a[],int &n)
{
    FILE *fp;
    fp=fopen("C:\\Users\\Dell\\Documents\\ngaydautien.txt","r");
    if (!fp)
    {
        printf("cannot open file");
        exit(0);
    }
    fscanf(fp,"%d",&n);

    int tmp;
    for (int i=0;i<n;i++)
    {
        fscanf(fp,"%d",&tmp);
        a[i]=tmp;
    }
    fclose(fp);
        
}
void printArray(int a[],int n)
{
    for (int i=0;i<n;i++)
        printf("%d ",a[i]);
}
int main()
{
    int *a,n;
    a=new int [n];
    Readfile(a,n);
    printArray(a,n);
    delete []a;
}