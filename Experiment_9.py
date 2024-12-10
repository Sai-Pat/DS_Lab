"""Write a Python program to store roll numbers of student in array who 
attended training program in random order. Write function for searching 
whether particular student attended training program or not, using Sentinel 
search and Binary search. """
s=[]
x=int(input("Enter Number of Students"))
for i in range(x):
    y=int(input("Enter Roll Number :"))
    s.append(y)
l=len(s)
def sentinal_search():
    x = int(input("Enter To Be Searched :"))
    last=s[l-1]
    s[l-1]=x
    while (s[i]!=x):
        i+=1
    s[l-1]=last
    if(i<l-1 or s[l-1]==x):
        print("Found!")
    else :
        print("Not FOund!")
sentinal_search()
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
binary_search()