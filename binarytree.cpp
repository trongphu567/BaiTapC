#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *Insert (Node *t,int value)
{
    if (t==NULL)
    {
        Node *p=new Node;
        p->data=value;
        p->left=NULL;
        p->right=NULL;
        return p;
    }
    else
    {
        if (value<t->data)
            t->left=Insert(t->left,value);
        else 
            t->right=Insert(t->right,value);
    }
    return t;
}
void NLR (Node *t)
{
    if (t!=NULL)
    {
        cout<<t->data<<" ";
        NLR(t->left);
        NLR(t->right);
    }
}
void NRL (Node *t)
{
    if (t!=NULL)
    {
        cout<<t->data<<" ";
        NRL(t->right);
        NRL(t->left);
    }
}

int CountLeaf (Node *t)
{
    if (t==NULL) return 0;
    else
    {
        if (t->left==NULL && t->right==NULL) return 1;
        else return CountLeaf(t->left)+CountLeaf(t->right);
    }
}
    
int MaxValue (Node *t)
{
    // max luon nam o ben phai cay
    if (t->right==NULL)
        return t->data;
    return MaxValue(t->right);
}
int SumNode (Node *t)
{
    if (t!=NULL)
    {
        int a=SumNode(t->left);
        int b=SumNode(t->right);
        return t->data+a+b;
    }
    return 0;
}
int CountOddNode(Node *t)
{
    if (t!=NULL)
    {
        int a = CountOddNode(t->left);
        int b = CountOddNode(t->right);
        if (t->data%2==1)
            return 1 + a + b;
        return a + b;
    }
    return 0;
}
void print (Node *t,int y,int x)
{
    if (t!=NULL)
    {
        if (t->data>y && t->data<x)
            cout<<t->data<<" ";
        print(t->left,y,x);
        print(t->right,y,x);
    }
    
}
int OneNode (Node *t)
{
    if (t==NULL) return 0;
    else
    {
        if (t->left==NULL && t->right!=NULL)
            return 1+OneNode(t->right);
        else if (t->left!=NULL && t->right==NULL)
            return 1+OneNode(t->left);
        else
            return OneNode(t->left)+OneNode(t->right);
    }

}
int main()
{
    int n,value;
    cout<<"Nhap so ptu:";
    cin>>n;
    Node *t=NULL;
    for (int i = 0; i < n; i++)
    {
        cin>>value;
        t=Insert(t,value);
    }
    NLR(t);
    cout<<"\nSo nut la la:"<<CountLeaf(t)<<endl;
    cout<<"Max cay la:"<<MaxValue(t)<<endl;
    cout<<"Tong cac nut la:"<<SumNode(t)<<endl;
    cout<<"So nut co gt le la:"<<CountOddNode(t)<<endl;
    int x,y;
    do
    {
        cout<<"Nhap y,x (y<x):";
        cin>>y>>x;
    }
    while (y>x);
    print(t,y,x);
    cout<<"\nSo nut 1 con la:"<<OneNode(t)<<endl;
    system("pause");
    
}