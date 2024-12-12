/*A double-ended queue (deque) is a linear list in which additions and 
deletions may be made at either end. Obtain a data representation mapping 
a deque into a one- dimensional array. Write C++ program to simulate 
deque with functions to add and delete elements from either end of the 
deque.*/
#include<iostream>
#define MAX 50
using namespace std;
class dq{
    public:
    int deque[MAX];
    int f,r=-1;
    void en_r(int n){
        f=0;
        r++;
        deque[r]=n;
    }
    void de_f(){
        cout<<deque[f]<<" Deleted!";
        f++;
    }
    void de_r(){
        cout<<deque[r]<<" Deleted!";
        r--;
    }
    void en_f(int n){
        f=0;
        for(int i=r;i>=f;i--){
            deque[i+1]=deque[i];
            
        }
        deque[f]=n;
            r++;
    }
    void display(){
        for(int i=f;i<=r;i++){
            cout<<deque[i];
        }
    }

};
int main()
{
    int n;
    int no;
    dq q;
    int x;

    do{
    cout<<"want to COntinue 0 or 1 : ";
    cin>>x;
    cout<<"Kya Kara hai? :"<<endl;
    cout<<"1. Insert at Front"<<endl;
    cout<<"2. Insert at Rear"<<endl;
    cout<<"3. Delete at Front"<<endl;
    cout<<"4. Delete at Rear"<<endl;
    cin>>n;
    if(n==1){
        cout<<"Enter Element : ";
        cin>>no;
        q.en_f(no);
    }
    else if(n==2){
        cout<<"Enter Element : ";
        cin>>no;
        q.en_r(no);
    }
    else if(n==3){
        q.de_f();
    }
    else{
        q.de_r();
    }
    q.display();}
    while(x==1);

    
    return 0 ;
}