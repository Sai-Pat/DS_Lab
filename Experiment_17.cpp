/*Write C++ program for storing binary number using doubly linked lists. 
Write functions- 
a) To compute 2‘s complement 
b) Add two binary numbers */
#include<iostream>
using namespace std;
class  node{
    public:
    int data,n,r;
    node*prev =NULL;
    node*nxt=NULL;
    node* head =NULL;
    node *nn =NULL;
    node *tail= NULL;
    void create(int n){
        nn =new node;
        nn->nxt= NULL;
        nn->prev=NULL;
        nn->data=n;

        if(head==NULL){
            head=nn;
                    }
        else{
            node *temp;
            temp=head;
            while(temp->nxt!=NULL){
                temp=temp->nxt;
            }
            temp->nxt=nn;
            nn->prev=tail;
            tail=nn;
        }
    }
    void bin(){
        cout<<"Enter a Decimal Number : ";
        cin>>n;
        while(n>0){
            r=n%2;
            create(r);
            n=n/2;
        }
    }
    void ones(){
        cout<<"Ones Compliment ! :";
        node *temp =head;
        while(temp!=NULL){
            if(temp->data==0){
                temp->data=1;
            }
            else{
                temp->data=0;
            }
            temp=temp->nxt;
        }
        
        temp=head;
        bool c= true;
        while(temp!=NULL){
            if(temp->data==0){
                temp->data=1;
                c=false;
            }
            else{
                temp->data=0;
                temp=temp->nxt;
            }
        } 

        
    }
    void display(){
        node *temp =tail;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
        cout<<head->data;
    }
    void twos(){
        ones();
        node *temp;
        temp=head;
        bool c= true;
        while(temp!=NULL){
            if(temp->data==0){
                temp->data=1;
                c=false;
            }
            else{
                temp->data=0;
                temp=temp->nxt;
            }
        } 

        }
        
    
    
};
int main(){
    node N;
    N.bin();
    N.display();
    cout<<endl;
    N.ones();
    N.display();
      cout<<endl;
    //N.twos();
    N.display();
    return 0;
}