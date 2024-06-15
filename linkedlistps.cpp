#include <iostream>
using namespace std;
struct Node
{
    int tu;
    int mau;
    Node *next;
};
struct LIST
{
    Node *pHead;
    Node *pTail;
};
struct phanso
{
    unsigned int tu;
    unsigned int mau;
};
void KhoiTao (LIST &l)
{
    l.pHead=NULL;
    l.pTail=NULL;
}
Node *CreateNode (phanso x)
{
    Node *p=new Node;
    p->tu=x.tu;
    p->mau=x.mau;
    p->next=NULL;
    return p;
}
void nhapps (phanso &x)
{
    cout<<"Nhap tu:";
    cin>>x.tu;
    cout<<"Nhap mau:";
    cin>>x.mau;
}
void AddTail (LIST &l,Node *p)
{
    if (l.pHead==NULL)
    {
        l.pHead=p;
        l.pTail=p;
    }
    else
    {
        l.pTail->next=p;
        l.pTail=p;
    }
}
void printList (LIST l)
{
   Node *p=l.pHead;
   while (p!=NULL)
   {
       cout<<p->tu<<"/"<<p->mau<<" ";
        p=p->next;
   }
   cout<<endl;
}
int sum (LIST l)
{
    int sum=0;
    phanso t;
    Node *p=l.pHead;
    while (p!=NULL)
    {
        t.tu=p->tu*p->next->mau+p->mau*p->next->tu;
        t.mau=p->mau*p->next->mau;
        p=p->next;
        sum=t.tu/t.mau;
    }
    
    return sum;
    
}
int main()
{
    LIST l;
    phanso x;
    KhoiTao(l);
    int n;
    cout<<"Nhap so ptu:";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        nhapps(x);
        Node *p=CreateNode(x);
        AddTail(l,p);

    }
    printList(l);
    cout<<sum(l)<<endl;
    
    
    system("pause");
    
}