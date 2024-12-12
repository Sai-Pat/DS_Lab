
/*"""A palindrome is a string of character that‘s the same forward and 
backward. Typically, punctuation, capitalization, and spaces are ignored. 
For example, “Poor Dan is in a droop” is a palindrome, as can be seen by 
examining the characters “poor dan is in a droop” and observing that they 
are the same forward and backward. One way to check for a palindrome is 
to reverse the characters in the string and then compare with them the 
original-in a palindrome, the sequence will be identical. Write C++ 
program with functions- 
To check whether given string is palindrome or not"""
*/
#include<iostream>
#include<cstring>
#define MAX 50
using namespace std;
class Stack{
    public:
        char S[MAX];
        int top=-1;
        
        int underflow()
            {
                if (top == -1) 
                {
                    return 1;
                }
                else{
                    return 0;
                }

            }
        int overflow()
            {
                if(top==MAX-1)
                {
                    return 1;
                }
                else{
                    return 0;
                }
            }
        string clean()
            {
                char a[50];
                char b[50];
                cout<<"Enter Any String : ";
                cin.getline(a,50);
                int x;
                x = strlen(a);
                int j=0;
                for(int i = 0;i<x;i++)
                    {   a[i]=tolower(a[i]);
                        if (int(a[i])>97 && int(a[i]) < 122)
                            {
                                b[j]=a[i];
                                j++;
                            }
                    }
                    b[j]='\0';
                return b;
            }
        void push(char n)
            {   
                if (overflow()==1)
                {
                    cout<<"Stack Overflow!";
                }
                else{
                    
                        top++;
                        S[top]=n;
                        
                    }
                    
                
            }
        char pop()
            {   char c;
        
                if(underflow()==1)
                {
                    cout<<"Stack Underflow!";
                }
                else{
                    c = S[top];
                    cout<<"Deleted  : "<<S[top]<<endl;
                    top--;
                    }
                return c;
                
            }
        void display()
            {
                if(underflow()==1)
                {
                    cout<<"Stack Underflow!";
                }
                else{
                    for (int i = 0;i<top+1;i++)
                    {
                        cout<<S[i];
                        cout<<endl;
                    }
                }
            }
};
int main()
{
    Stack O;
    int code = 0;
    string x;
    x=O.clean();
    for(int i = 0;i<x.length();i++){
        O.push(x[i]);
        }
    for(int i =0;i<x.length();i++){
        if(x[i]!=O.pop())
        {
            code = 1;
           
        }
        else{
            code = 0;
            
        }
    }
    if (code == 0)
    {
        cout<<"Palindrome"<<endl;
    }
    else{
         cout<<"Not Palindrome!"<<endl;
    }
    O.display();
    return 0;
}