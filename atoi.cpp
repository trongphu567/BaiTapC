#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int countNum (int n)
{
    int c=0;
    while (n>0)
    {
        n/=10;
        c++;
    }
    return c;
}
// 1 ki tu so ma muon chuyen sang 1 so nguyen
//=>ki tu so-48
// 1 chu so nguyen ma muon chuyen sang ki tu so
//=>ki tu so+48
char* itoa (int num)
{
    int n=countNum(num);
    char *st;
    st=new char[n+1];
    if (!st)
    {
        cout<<"Not enough memory";
        return NULL;
    }
    for (int i = n-1; i >=0; i--)
    {
        st[i]=(char)(num%10+'0');
        num/=10;
    }
    st[n]='\0';
    return st;
}
char *itoa2(int num)
{
    int n=countNum(num);
    char *st;
    if (!st)
    {
        cout<<"Not enough memory";
        return NULL;
    }
    int start=0;
    st=new char[n+1+start];
    for (int i = n-1+start; i >=start; i--)
    {
        st[0]='-';
        start=1;
        st[i]=(char)(num%10+'0');
        num/=10;
    }

    st[n]='\0';
    return st;
}
int atoi (char *st)
{
    int flag=0;
    if (st[0]=='-') flag=1;
    int n=0;
    for (int i = flag; i < strlen(st); i++)
    {
        if (st[i]<'0' || st[i]>'9') return 0;
        else n=n*10+(int)(st[i]-'0');
    }
    if (flag==1) return -n;
    return n;
}

/* "123" chuyen thanh 123
vd: 321=3*10^2+2*10^1+1*10^0

"123"=('1'-48)*10^2+('2'-48)*10^1+('3'-48)*10^0
    =1*10^2+2*10^1+3*10^0=123 */
//ham chuyen chuoi so thanh so nguyen
int Convert (char s[])
{
    int sum=0;      //chua kq cua so nguyen sau khi chuyen
    int mu=0;       //bien mu tinh so luong ptu
    //duyet tu cuoi chuoi ve dau chuoi
    for (int i = strlen(s)-1; i >= 0; i--)
    {
        sum+=(s[i]-48)*pow(10,mu);
        mu++;
    }
    return sum;
    
}
/* int atoi (char *s)
{
    int res=0;
    int l=strlen(s);
    for (int i=l-1;i>=0;i--)
        res+=(int)(s[i]-'0')*pow(10,l-1-i);
    return res;
} */
int main()
{
    char *st;
    st=new char[100];
    cout<<"Nhap chuoi:";
    cin>>st;
    cout<<"Chuoi sau khi chuyen thanh so:"<<Convert(st)<<endl;
    cout<<"Kiem tra so (phep cong)="<<Convert(st)+5<<endl;
    /*
    cout<<"So la:";
    int value=atoi(st);
    cout<<value<<endl;
    delete st;
    */
    /* int num;
    cout<<"Nhap so:";
    cin>>num;
    cout<<"Chuoi sau khi chuyen:";
    st=itoa2(num);
    cout<<st;
    delete st; */
    system("pause");

}
