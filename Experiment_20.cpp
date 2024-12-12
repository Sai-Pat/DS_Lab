/*In any language program mostly syntax error occurs due to unbalancing 
delimiter such as (),{},[]. Write C++ program using stack to check whether 
given expression is well parenthesized or not.*/
#include<iostream>
#include<cstring>
#define MAX 50
using namespace std;
class Stack{
    public:
    char S[MAX];
    int top=-1;
    void push(char c){
        if(top==MAX-1)
        {
            cout<<"Stack Overflow!";
        }
        else{
            top++;
            S[top]=c;
        }
    }
    char pop()
    {
        if(top==-1){
            return '\0';
        }
        //cout<<S[top]<<" Deleted";
        return S[top--];

    }
    void insert()
    {   char a[50],ch;
        cout<<"Enter a Expression to check Balencing  (Enter # at End):";
        cin.getline(a,50,'#');
        for(int i=0;i<strlen(a);i++)
        {   if( a[i]=='(' || a[i]=='{' || a[i]=='[' )
                { push(a[i]);}
            else if( a[i]==')' || a[i]=='}' || a[i]==']' )
                {
                    if(top==-1)
                    {
                        cout<<"Invalid Expression!";
                    }
                    ch = pop();
                
                    if((a[i]==')'&&ch!='(')||
                    (a[i]=='}'&&ch!='{')||
                    (a[i]==']'&&ch!='['))
                        {
                    cout<<"Invalid Expression!";
                        }
               }

        }
        if(top==-1)
        {
            cout<<"VAlid Expression";
        }
        else{
            cout<<"Invalid Expression!";
        }

        
    }
    
};
int main()
{
    Stack S;
    S.insert();
    return 0;
}