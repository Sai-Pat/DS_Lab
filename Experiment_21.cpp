/*Queues are frequently used in computer programming, and a typical 
example is the creation of a job queue by an operating system. If the 
operating system does not use priorities, then the jobs are processed in the 
order they enter the system. Write C++ program for simulating job queue 
using Linked list. Write functions to add job and delete job from queue.*/
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* nxt=NULL,*front=NULL,*nn=NULL,*rear=NULL;
    void create(int n){
        nn = new node;
        nn->data = n;
        nn->nxt = NULL;
    }
    void insert()
    {
        if(rear==NULL){
            front=rear=nn;
        }
        else{
            rear->nxt=nn;
            rear=nn;

        }

    }
    void delet(){
        node *temp;
        temp=front;
        front=temp->nxt;
        delete(temp);
    }

    void display()
    {
        node * temp;
        temp=front;
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->nxt;
        }
    }
    int f,r=-1;
    void enque(){
        int n;
        cout<<"Enter Job Id : ";
        cin>>n;
        create(n);
        insert();
        f==0;
        r++;
    }
    void deque(){
        delet();
    }

};

int main()
{
    node q;
    int j;
    int x;
    cout<<"How many Jobs : ";
    cin>>j;
    for(int i=0;i<j;i++)
    {
        q.enque();
    }
    cout<<"Want to delete ?(1:Yes)/(2:No) : ";
    cin>>x;
    if (x == 1)
    {
        q.deque();
        cout<<"Job Deleted!";
    }
    else{
        cout<<"Ok ja abhi!";
    }
    q.display();
    return 0;
}