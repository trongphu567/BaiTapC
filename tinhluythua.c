#include<stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int mu=1;
    while (b>0)
    {
        mu*=a;
        b--;
    }
    printf("%d",mu);
    return 0;
}