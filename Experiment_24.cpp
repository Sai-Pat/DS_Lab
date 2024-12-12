/*Pizza parlor accepting maximum M orders. Orders are served in first come 
first served basis. Order once placed cannot be cancelled. Write C++ 
program to simulate the system using circular queue using array. */
#include<iostream>
#define MAX 50
using namespace std;
class q{
    public:
        int f=-1,r=-1;
        int cq[MAX];
        void enque(int n){
            if(f==-1 && r==-1){
                f=r=0;
                cq[r]=n;
            }
            else if(((r+1)%MAX)==f)
            {
                cout<<"Overflow";
            }
            else{
                r=(r+1)%MAX;
                cq[r]=n;
            }
        }
        void deque(){
            if(f==-1 && r==-1){
                cout<<"Que Underflow";
            }
            else if(f==r){
                f=r=-1;
            }
            else{
                cout<<cq[f]<< " deleted";
                f=(f+1)%MAX;
                
            }
        }
        void display(){
            int i=0;
            while( i!= r+1){
                cout<<cq[i]<<" ";
                i=(i+1)%MAX;}
            }
        

};
int main()
{
    q Q;
    Q.enque(5);
    Q.enque(2);
    Q.enque(3);
    Q.enque(4);
    Q.enque(5);
    cout<<endl;
    Q.display();
    Q.deque();
    cout<<endl;
    Q.display();
    return 0;
}