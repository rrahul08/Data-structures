#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
    
}*head=NULL;
void insertbeg(int d){
    node* ptr=new node();
    ptr->data=d;
    ptr->next=head;
    head=ptr;
}    
void insertend(int d)
{
    node* ptr=new node();
    ptr->data=d;
    ptr->next=NULL;
    if(head==NULL)
    {
        head=ptr;
    }else{
        node*p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=ptr;
    }
}

void deleteatpos(int index){
if(index==1){
    node*p =head;
    head=head->next;
    free(p);
}    
else
{
    node*p=head;
    node*q=NULL;
    for(int i=0;i<index-1;i++)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    free(p);
}}
void showmid(){
    node* p=head;
    node* q=head;
    while(q!=NULL && q->next!=NULL){
        p=p->next;
        q=q->next->next;
    }
    cout<<p->data;
}
void detectloop(){
    node*p=head;
    node*q=head;
    while(q!=NULL && q->next!=NULL){
        q=q->next->next;
        p=p->next;    }
        if(q==p){
            cout<<"LOOP";
        }else{
            cout<<"NO LOOP";
        }
}
void reverse(){
    node*p=NULL;
    node*q=head;
    node*n;
    while(q!=NULL){
        n=q->next;
        q->next=p;
        p=q;
        q=n;

    }
    head=p;
}
void sort()
{
    node*p,*q;
    int temp;
    for(p=head;p!=NULL;p=p->next){
        for(q=p->next;q!=NULL;q=q->next){
            temp=p->data;
            p->data=q->data;
            q->data=temp;

        }


    }
}
void display()
{
    node*p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    insertbeg(9);
    insertbeg(10);
    insertend(8);
    insertend(5);
    insertend(6);
    //reverse();
    sort();
    display();
    //deleteatpos(5);
    //showmid();
    //detectloop();
    return 0;
}
