
/*A palindrome is a string of character that‘s the same forward and 
backward. Typically, punctuation, capitalization, and spaces are ignored. 
For example, “Poor Dan is in a droop” is a palindrome, as can be seen by 
examining the characters “poor dan is in a droop” and observing that they 
are the same forward and backward. One way to check for a palindrome is 
to reverse the characters in the string and then compare with them the 
original-in a palindrome, the sequence will be identical. Write C++ 
program with functions- 
To print original string followed by reversed string using stack*/
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
        if (top==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    int overflow()
    {
        if(top==MAX-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    string clean(char s[])
    {   int j=0;
        char c[50];
        for(int i =0;i<strlen(s);i++)
        {   s[i]=tolower(s[i]);
            if(int(s[i])>=97){
                c[j]=s[i];
                j++;
            }
        }   
        c[j]='\0';
        return c;
    }
    void push(char c)
    {
        if(overflow()==1)
        {
            cout<<"Stack Overflow!";
        }
        else{
            top++;
            S[top]=c;
        }
    }
    void pop()
    {
        if(underflow()==1){
            cout<<"Stack Underflow!";
        }
        else{
            cout<<"Deleted : "<<S[top]<<endl;
            top--;
        }
    }
    void display()
    {
        if(underflow()==1)
        {
            cout<<"Stack is Underflow!";
        }
        else{
            for(int i=0;i<top+1;i++)
            {
                cout<<S[i]<<endl;
            }
        }
    }
};
int main()
{   string a;
    char s[50];
    Stack O;
    cout<<"Enter a String : ";
    cin.getline(s,50);
    a=O.clean(s);
    //cout<<a;
    for (int i=0;i<a.length();i++){
        O.push(a[i]);
    }
    O.display();
    for(int i =0;i<a.length();i++)
    {
        O.pop();
    }

    return 0;
}