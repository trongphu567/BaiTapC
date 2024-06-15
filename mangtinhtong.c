#include <stdio.h>
int main() {
    int a[10];
    int sum=0;
    printf("Nhap 10 ptu cua day:");
    for (int i=0;i<10;i++)
        scanf("%d",&a[i]);
    for (int i=0;i<10;i++)
        sum+=a[i];
    printf("%d",sum);
    return 0;
}