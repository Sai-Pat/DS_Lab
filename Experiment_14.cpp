/*"""Second year Computer Engineering class, set A of students like Vanilla Ice
cream and set B of students like butterscotch ice-cream. Write C++ program 
to store two sets using linked list. compute and display- 
a) Set of students who like both vanilla and butterscotch 
b) Number of students who like either vanilla or butterscotch """
*/
#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node *nxt;
        node *head=NULL,*nn=NULL;
        void create(int n)
        {
            nn=new node;
            nn->data=n;
            nn->nxt=NULL;
        }
        void insert(node*&head)
        {
            if(head == NULL)
            {
                head=nn;
            }
            else{
                node *temp;
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
        void both(node*bhead,node*vhead)
        {
            node *temp=NULL,*temp1=NULL;
            temp=bhead;
            cout<<"Like both Vannila nd Butterscotch :";
            while(temp!=NULL)
            {   temp1=vhead;
                while(temp1!=NULL)
                {
                    if(temp->data==temp1->data)
                    {cout<<temp->data<<"  ";}
                    temp1=temp1->nxt;
                }
                
                temp=temp->nxt;
            }

        }
        void either_or(node*bhead,node*vhead)
        
        {
            bool aex;
            node*temp=bhead;
            
            cout<<"Either Vannila or ButterScotch : ";
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                
                temp=temp->nxt;
            }
            temp=vhead;
            while(temp!=NULL)
            {   
                aex=false;
                node*temp1=bhead;
                while(temp1!=NULL)
                {
                    if(temp1->data==temp->data){
                        
                        aex =true;
                        break;
                        }
                    temp1=temp1->nxt;
                }
                
            if(!aex)
            {
               cout<<temp->data<<" "; 
            }
            temp=temp->nxt;
            }
    

        }


};
int main()
{
    node N;
    int b,v;
    node *bhead=NULL,*vhead=NULL;
    cout<<"Number of Students who like Butterscotch :";
    cin>>b;
    for(int i =0; i<b;i++)
    {
        int n;
        cout<<"Enter Roll No : ";
        cin>>n;
        N.create(n);
        N.insert(bhead);
    }
    cout<<"Butter People :";
    N.display(bhead);
    cout<<endl;
    cout<<"Number of Students who like Vannila : ";
    cin>>v;
    for(int i =0; i<v;i++)
    {
        int n;
        cout<<"Enter Roll No : ";
        cin>>n;
        N.create(n);
        N.insert(vhead);
    }
    cout<<"Vannila People :";
    N.display(vhead);
    cout<<endl;
    N.both(bhead,vhead);
    N.either_or(bhead,vhead);
    return 0;
}