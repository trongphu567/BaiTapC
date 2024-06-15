#include <iostream>
#include <math.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *CreateNode (int value)
{
    Node *p=new Node;
    p->data=value;
    p->next=NULL;
    return p;
}
Node *AddHead (Node *l,int value)
{
    Node *p=new Node;
    p->data=value;
    p->next=l;
    l=p;
    return l;
}

Node *AddTail (Node *l,int value)
{
    Node *p=l;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    Node *temp=new Node;
    temp->data=value;
    temp->next=NULL;
    p->next=temp;
    return l;
}
Node *AddAt (Node *l,int value,int pos)
{
    Node *p=l;
    for (int i=0;i<pos-1;i++)
        p=p->next;
    Node *temp=new Node;
    temp->data=value;
    temp->next=p->next;
    p->next=temp;
    return l;
}
void printList (Node *l)
{
    Node *p=l;
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int SearchValue (Node *l,int x)
{
    int pos=0;
    for (Node *p=l;p!=NULL;p=p->next)
    {
        if (p->data==x)
            return pos;
        else pos++;
    }
    return -1;
}
float Average (Node *l)
{
    int sum=0;
    int n=0;
    for (Node *p = l; p!=NULL; p=p->next)
    {
        sum+=p->data;
        n++;
    }
    return (sum*1.0)/n;
    
}
bool isPrime (int n)
{
    if (n<2) return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0) return false;
    }
    return true;
}
int CountPrime (Node *l)
{
    int count=0;
    for (Node *p=l;p!=NULL;p=p->next)
    {
        if (isPrime(p->data)) count++;
    }
    return count;
}
void SortList (Node *l)
{
    for (Node *p1=l ; p1 != NULL; p1=p1->next)
    {
        for (Node *p2=p1->next;p2!=NULL;p2=p2->next)
            if (p1->data>p2->data)
            {
                int temp=p1->data;
                p1->data=p2->data;
                p2->data=temp;
            }
    }
    
}
Node *DelHead (Node *l)
{
    Node *p=l;
    p=p->next;
    delete(l);
    return p;
}
Node *DelTail (Node *l)
{
    Node *p=l;
    while (p->next->next!=NULL)
    {
        p=p->next;
    }
    delete(p->next);
    p->next=NULL;
    return l;
    
}
Node *DelAt (Node *l,int pos)
{
    Node *p=l;
    for (int i = 0; i < pos-1; i++)
    {
        p=p->next;
    }
    Node *temp=p->next;
    p->next=p->next->next;
    delete(temp);
    return l;
    
}
int main()
{
    int n,value;
    cout<<"Nhap n va gt dau =";
    cin>>n>>value;
    Node *l=CreateNode(value);
    for (int i=0;i<n;i++)
    {
        cin>>value;
        l=AddTail(l,value);
    }    
    printList(l);
    cout<<endl;
    /* int pos,x;
    cout<<"\nNhap gt them va vt:";
    cin>>x>>pos;
    l=AddAt(l,x,pos);
    printList(l); */
    /* int x;
    cout<<"\nNhap gt can tim:";
    cin>>x;
    cout<<"Vi tri ptu la:"<<SearchValue(l,x)<<endl; */
    cout<<Average(l)<<endl;
    cout<<"Co "<<CountPrime(l)<<" so ng to"<<endl;
    SortList(l);
    printList(l);
    int pos;
    cout<<"\nNhap vt xoa:";
    cin>>pos;
    DelAt(l,pos);
    printList(l);
    system("pause");

}