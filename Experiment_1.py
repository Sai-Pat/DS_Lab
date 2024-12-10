"""Write a Python program to compute following computation on matrix: 
a)  Addition of two matrices 
b)  Transpose of a matrix"""
# Intialization of Matrix
def matrix():
    m = []
    r = int(input("Enter Number of Rows : "))
    c = int(input("Enter Number of Columns : "))
    for i in range(r):
        a=[]
        for i in range(c):
            x = int(input("Enter Element in Matrix : "))
            a.append(x)
        m.append(a)
    return m
# Addition of 2 Matrices
def add(m1,m2):
    m=[]
    if len(m1)==len(m2) and len(m1[0])==len(m2[0]) :
        for i in range(len(m1)):
            a=[]
            for  j in range(len(m1[0])):
                x = m1[i][j]+m2[i][j]
                a.append(x)
            m.append(a)
        return m
# Display Matrix
def show(m):
    for i in range(len(m)):
        for j in range(len(m[i])):
            print(m[i][j],end=" ")
        print()

#Driver Code for Addition of Matrix
m1=matrix()
m2=matrix()
m3=add(m1,m2)
show(m3)

# Transpose of Matrix 

# Performing Transformation
def transform(m):
    m1=[]
    for i in range(len(m[0])):
        a=[]
        for j in range(len(m)):
            a.append(m[j][i])
        m1.append(a)
    return m1
# transformation Driver 
m=matrix()
m1=transform(m)
show(m1)