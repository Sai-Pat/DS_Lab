#include<iostream>
using namespace std;
class node {
public :
    int data;
    node* nxt;
    node* nn = NULL;
    node* head = NULL;
void create()
{
    nn =new node;
    cout<<"Enter Numbers : ";
    cin>> nn->data;
    nn->nxt = NULL;
}
void insert_new_node_as_first_node()
{   create();
    if (head == NULL)
    {
        head =nn;
    }
    else{
        nn->nxt = head;
        head = nn;
    }
}
void insert_new_node_at_given_position(){
    create();
    int pos;
    node * temp =NULL;
    temp =head;
    cout<<"Enter Position to insert Linked List";
    cin>>pos;
    for(int i = 0;i<pos-1;i++)
    {
        temp =temp->nxt;
    }
    nn->nxt =temp->nxt;
    temp->nxt  =nn; 
}
void insert_new_node_as_last_node()
{   create();
    node * temp = NULL;
    if (head == NULL){
        head =nn;
    }
    else {
    temp =head;
    while (temp->nxt != NULL)
    {
        temp=temp->nxt;
    }
    temp->nxt =nn;

    }

}
void delete_first_node(){
    node* temp;
    temp =head;
    head = head->nxt;
    delete(temp);
}
void delete_last_node(){
    node* temp = NULL;
    node *prev = NULL;
    temp =head;
    while(temp->nxt != NULL)
    {   prev =temp;
        temp =temp->nxt;}
    prev -> nxt = NULL;
    delete(temp);

}
void delete_given_node(){
    int pos;
    cout<<"Enter Position : ";
    cin>>pos;
    node* temp =NULL;
    temp =head;
    for(int i =0;i<pos-1;i++)
    {
        temp=temp->nxt;
    }
    node* tobedel =temp->nxt;
    temp->nxt=temp->nxt->nxt;
    delete(tobedel);
}
void sort()
{
    node *temp;
    int n;
    temp=head; 
    while(temp->nxt!=NULL)
    {
    if(temp->data > temp->nxt->data)
    {
        n = temp->data ;
        temp->data = temp->nxt->data; 
        temp->nxt->data = n;
        
    }
    else{
        temp=temp->nxt;
    }
    }
}
void display()
{
    node * temp = NULL;
    temp = head;
        while (temp!= NULL)
        {
            cout<<temp->data<<" , ";
            temp = temp->nxt;
            //cout<<"workin";
        }
    
}


};
int main()
{
    node no;
    no.insert_new_node_as_first_node();
    no.insert_new_node_as_first_node();
    no.insert_new_node_as_last_node();
    no.insert_new_node_as_last_node();
    //no.insert_new_node_at_given_position();
    no.sort();
    //no.delete_given_node();
    //no.delete_first_node();
    //no.delete_last_node();

    no.display();
    return 0;
}    
