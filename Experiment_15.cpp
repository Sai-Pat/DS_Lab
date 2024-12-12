/*Second year Computer Engineering class, set A of students like Vanilla Ice
cream and set B of students like butterscotch ice-cream. Write C++ program 
to store two sets using linked list. compute and display- 
a)Set of students who like either vanilla or butterscotch but not both 
b) Number of students who like neither vanilla nor butterscotch */
#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node *nxt,*nn=NULL,*head=NULL;
    void create(int n)
    {
        nn = new node;
        nn->data=n;
        nn->nxt=NULL;
    }    
    void insert(node *&head)
    {
        if(head==NULL)
        {
            head=nn;
        }
        else{
            node*temp;
            temp=head;
            while(temp->nxt!=NULL)
            {
                temp=temp->nxt;
            }
            temp->nxt=nn;
        }
    }
    void display(node *head)
    {
        node *temp=NULL;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->nxt;
        }
    }
    void not_both(node *bhead,node *vhead)
    {
        node*temp,*temp1;
        cout<<"students who like either vanilla or butterscotch but not both : ";
        temp=vhead;
        bool found;
        while(temp!=NULL){
            found=false;
            temp1=bhead;
            while(temp1!=NULL){
                if(temp->data==temp1->data){
                    found = true;
                    break;
                }
                temp1=temp1->nxt;
            }
            if(!found){
            cout<<temp->data<<" ";
        }
            temp=temp->nxt;
        }
        temp=bhead;
        bool found1;
        while(temp!=NULL){
            found1 = false;
            temp1=vhead;
            while(temp1!=NULL){
                if(temp->data==temp1->data){
                    found1=true;
                    break;
                }
                temp1=temp1->nxt;
            }
            if(!found1){
                cout<<temp->data<<" ";
            
            }
            temp=temp->nxt;
        }
    }
    void neither_nor(node* bhead, node* vhead ,node * xhead)
    {
        node* temp ,*temp1;
        cout<<"students who like neither vanilla nor butterscotch :";
        bool found;
        temp=bhead;
        while(temp!=NULL){
            temp1=xhead;
            found = false;
            while(temp1!=NULL)
            {
                if(temp->data==temp1->data){
                    found =true;
                }
                temp1=temp1->nxt;
            }
            if(found){
                cout<<temp->data<<" ";
        
            }
            temp=temp->nxt;


        }
    }
};

int main()
{
    node N;
    int v,b,x;
    node* vhead = NULL,*bhead=NULL,*xhead=NULL;
    cout<<"Vannila Wale how many? : ";
    cin>>v;
    for(int i=0;i<v;i++)
    {   int n;
        cout<<"Enter Roll : ";
        cin>>n;
        N.create(n);
        N.insert(vhead);
    }
    cout<<"Vannila Lovers : ";
    N.display(vhead);
    cout<<"Butterscotch Wale how many? : ";
    cin>>v;
    
    for(int i=0;i<v;i++)
    {   int n;
        cout<<"Enter Roll : ";
        cin>>n;
        N.create(n);
        N.insert(bhead);
    }
    cout<<"Butterscotch Lovers : ";
    N.display(bhead);
    cout<<endl;
        cout<<"Nothin LLovers how many? : ";
    cin>>x;
    for(int i=0;i<x;i++)
    {   int n;
        cout<<"Enter Roll : ";
        cin>>n;
        N.create(n);
        N.insert(xhead);
    }
    cout<<"NOthin Lovers : ";
    N.display(xhead);
    cout<<endl;
    N.not_both(bhead,vhead);
    N.neither_nor(bhead,vhead,xhead);
    return 0;
}