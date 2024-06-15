/*
#include <stdio.h>
int main()
{
    char str[100];      //khai bao xau
    scanf("%s",str);    //dung dinh dang %s va k co toan tu & trong scanf
    printf("%s",str);
}
*/
/*
#include <stdio.h>
int main()
{
    char name[100],address[100];
    //scanf("%s%s",name,address);   scanf k doc duoc khoang trang
    gets(name);     //lenh nhap du lieu co khoang trang
    gets(address);
    printf("Name: %s\nAddress: %s",name,address);
}
*/
/*
//nhap xau,nhap k,in ra ptu thu k cua xau
#include<stdio.h>
int main() {
	char s[100];
	int k;
	scanf("%s",s);
	scanf("%d",&k);
	printf("%c",s[k-1]);
	return 0;
}
*/
/*
//tim do dai xau
#include<stdio.h>
#include<string.h> //khai bao thu vien de dung ham strlen

int main() {
	char s[100];
	scanf("%s",s);
	printf("%d",strlen(s));
	return 0;
}
*/
//cach tim do dai xau khac
/*
#include<stdio.h>

int main() {
	char str[100];
	int len = 0;
	scanf("%s", str);
	while (str[len] != '\0') {
		len++;
	}
	printf("%d", len);
	return 0;
}
*/
/*
//dem so lan xuat hien cua 1 ki tu nhap vao trong xau
#include<stdio.h>
#include<string.h>
int main() {
    char c;
    char s[100];
    int dem=0;
    scanf("%c", &c);
    scanf("%s",s);
    for (int i=0;i<strlen(s);i++)
        if (s[i]==c) dem++;
    printf("%d",dem);
    return 0;
}
*/
//doi ki tu 3 thanh e trong xau
/*
#include<stdio.h>
#include<string.h>
int main() {
    char s[100];
    scanf("%s",s);
    for (int i=0;i<strlen(s);i++)
        if (s[i]=='3') s[i]='e';
    printf("%s",s);
    return 0;
}
*/
