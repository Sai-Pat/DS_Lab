"""Write a Python program to compute following operations on String: 
a) To check whether given string is palindrome or not 
b) To count the occurrences of each word in a given string """

s = input("Enter String : ")

# a) To check whether given string is palindrome or not

def palindrome():
    x = s[::-1]
    if s==x:
        print("String is Palindrome !")
palindrome()

# b) To count the occurrences of each word in a given string
def occurence():
    c=0
    x=s.split()
    w=input("Enter a Word : ")
    for i in range(len(x)):
        if w == x[i]:
            c+=1
    print(w, " found ",c," times")
occurence()