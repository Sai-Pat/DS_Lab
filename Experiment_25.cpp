/*Pizza parlor accepting maximum M orders. Orders are served in first come 
first served basis. Order once placed cannot be cancelled. Write C++ 
program to simulate the system using circular queue using linked list.*/
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * nxt=NULL,*nn=NULL,*front=NULL,*rear=NULL;
    void create(int n){
        nn = new node;
        nn->data=n;
        nn->nxt=NULL;
    }
    void insert(){
        if(front==NULL && rear == NULL){
            front=rear=nn;
        }
        else {
            rear->nxt=nn;
            rear=nn;
        }
        
    }
    void out(){
        node * temp;
        temp=front;
            cout<<endl;
            cout<<front->data<<" Deleted"<<endl;;
            front=front->nxt;

        delete(temp);
    }
    void display(){
        node *temp;
        temp=front;
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->nxt;
        }
    }
};
int main()
{
    node N;
    N.create(1);
    N.insert();
    N.create(2);
    N.insert();
    N.create(3);
    N.insert();
    N.create(4);
    N.insert();
    cout<<endl;
    N.display();
    N.out();
    N.display();
    cout<<endl;
    return 0;
}