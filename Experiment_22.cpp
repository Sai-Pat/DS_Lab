/*Queues are frequently used in computer programming, and a typical 
example is the creation of a job queue by an operating system. If the 
operating system does not use priorities, then the jobs are processed in the 
order they enter the system. Write C++ program for simulating job queue 
using Array. Write functions to add job and delete job from queue. */
#include<iostream>
#define MAX 50
using namespace std;
class Q{
    public:
        int q[MAX];
        int f,r=-1;
        void enque(int n){
            f=0;
            r++;
            q[r]=n;
        }
        void deque(){
            cout<<q[f]<<" deleted!";
            f++;
        
        }
        void display(){
            for(int i=0;i<r+1;i++){
                cout<<q[i];
            }
        }
};
int main()
{
    Q o;
    int n,d;
    cout<<"Enter Number of Jobs :";
    cin>>n;
    for(int i=0;i<n;i++)
    {   int j;
        cout<<"Enter JOb : ";
        cin>>j;
        o.enque(j);
    }
    cout<<"Want to delete (1 or 0) : ";
    cin>>d;
    if (d==1){
        o.deque();
    }
    else{
        cout<<"Apki pratikriya note kar li gayi he!";
    }
    o.display();
    return 0;
}