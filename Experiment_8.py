"""Write a Python program to store roll numbers of student array who 
attended training program in sorted order. Write function for searching 
whether particular student attended training program or not, using Linear 
search and Fibonacci search."""
s=[]
x = int(input("Enter Number of Students : "))
for i in range(x):
    y=int(input("Enter Roll Number : "))
    s.append(y)
l=len(s)
def linear_Search():
    f=0
    x=int(input("Enter Roll Number to be Searched : "))
    for i in range(len(s)):
        if s[i]==x:
            print("Found!")
            f=0
    if f!=0:
        print("Not Found!")
def fib(n):
    if n<1:
        return 0
    elif n ==1:
        return 1
    else:
        return(fib(n-1)+fib(n-2))
def fib_search():
    x=int(input("Enter Roll Number to be Searched : "))
    m=0
    while fib(m)<l:
        m+=1
    offset =-1
    while fib(m)>1:
        i=min(offset+fib(m-2),l-1)
        if x>s[i]:
            m-=1
            offset=i
        elif x<s[i]:
            m-=2
        else:
            print("Element Found")
            break
    if fib(m)==1 and s[offset+1]==x:
        print("Element Found!")
        return offset+1
linear_Search()
fib_search()