#include<iostream>
#include<math.h>
using namespace std;
struct node
{
    int info;
    node *next;
};
struct list
{
    node *head,*tail;
};
void list_insert_tail(list &l, int n);
void list_process(list l);
void tachlist(list l, list &l1, list &l2, int n);
list l;
int main()
{
    int n;
    list l1,l2;
    cout<<"Nhap vao so n = ";cin>>n;
    list_insert_tail(l,n);
    list_process(l);
    tachlist(l,l1,l2,n);
    list_process(l1);
    list_process(l2);
}
node* getnode(int x)
{
    node *p=new node;
    if(p==NULL)
    exit(1);
    p->info=x;
    p->next=NULL;
    return p;
}
void insert_tail(list &l, node *p)
{
    if(l.head==NULL)
    {
        l.head=p;
        l.tail=p;
    }
    else
    {
        l.tail->next=p;
        l.tail=p;
    }
}
void list_insert_tail(list &l, int n)
{
    int x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        insert_tail(l,getnode(x));
    }
}
void list_process(list l)
{
    node *p=l.head;
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<endl;
}
int list_search(list l, int x)
{
    for(node *p=l.head;p!=NULL;p=p->next)
    if(p->info==x) return 1;
    return 0;
}
void khoitao(list &l)
{
    l.head=l.tail=NULL;
}
void tachlist(list l, list &l1, list &l2, int n)
{
    khoitao(l1);
    khoitao(l2);
    int tmp=n;
    for(node*p=l.head;p!=NULL;p=p->next)
    {
        if(tmp>n/2)
        insert_tail(l1,getnode(p->info));
        if(tmp<=n/2)
        insert_tail(l2,getnode(p->info));
        tmp--;
    }
}