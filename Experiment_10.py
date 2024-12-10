"""Write a Python program to store roll numbers of student array who 
attended training program in sorted order. Write function for searching 
whether particular student attended training program or not, using Sentinel 
search and Fibonacci search."""
s=[]
x=int(input("Enter Number of Students"))
for i in range(x):
    y=int(input("Enter Roll Number :"))
    s.append(y)
l=len(s)
def sentinal_search():
    x= int(input("TO be Searched : "))
    last = s[l-1]
    s[l-1]=x
    while(s[i]!=x):
        i+=1
    if i< l-1 or s[l-1]==x:
        print("Found!")
    else:
        print("Not Found!")
def fib(n):
    if n<1:
        return 0
    elif n==1:
        return 1
    else:
        return(fib(n-1)+fib(n-2))
def fib_search():
    x=int(input("To be Searched : "))
    m=0
    while fib(m)<l:
        m+=1
    offset = -1
    while fib(m)>1:
        i = min(offset+fib(m-2),l-1)
        if s[i]<x:
            offset=i
            m-=1
        elif s[i]>x:
            m-=2
        else:
            print("Found!")
            break
    if fib(m)==1 and s[offset+1]==x:
        print("Found!")
fib_search()