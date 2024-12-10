"""Write a Python program to store roll numbers of student in array who 
attended training program in random order. Write function for searching 
whether particular student attended training program or not, using Linear 
search and Binary search."""
s=[]
x = int(input("Enter number of Students"))
for i in range(x):
    y=int(input("Enter Roll Number :"))
    s.append(y)
def linear_search():
    f=0
    x=int(input("Enter Roll Number to Search"))
    for i in range(len(s)):
        if s[i]==x:
            print(x, "found!")
            f=0
    if f!=0:
        print(x," Not Found")
def binary_search():
    f=0
    low=0
    high=len(s)-1
    x=int(input("Enter Roll Number to Search"))
    while(low<=high):
        mid =(high+low)//2
        if x == s[mid]:
            print(x," found!!")
            f+=1
        if x < s[mid] :
            high=mid-1
        else :
            low =mid+1
    if f == 0:
        print(x," Not FOund!")
linear_search()
binary_search()