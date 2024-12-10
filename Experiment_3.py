"""Write a Python program to compute following operations on String: 
a)  To display word with the longest length 
b)  To determines the frequency of occurrence of particular character in the 
string 
c) To display index of first appearance of the substring"""

s= input("Enter a Sentence : ")

# a)  To display word with the longest length
 
def longest_length(s):
    maxi = 0
    x= s.split()
    for i in range(len(x)):   
        if len(x[i])>maxi:
            maxi = len(x[i])
            strin =x[i] 
    print("Longest Word is : ", strin ," with length : ", maxi)
longest_length(s)

# b)  To determines the frequency of occurrence of particular character in the string

def occurence():
    c= 0
    x= input("Enter the Character : ")
    for i in s:
        if x == i:
            c+=1
    print(x ," Occured " ,c," times" )
occurence()

# c) To display index of first appearance of the substring
def sub():
    sub=input("Enter the Substring : ")
    for i in range(len(s)):
        if s[i:i+len(sub)]==sub :
            x=i
    print("Substring appeared at : ",x)
sub()