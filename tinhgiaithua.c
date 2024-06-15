#include<stdio.h>

int main() {
    int n,gt=1;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        gt*=i;
    printf("%d",gt);
    return 0;
}