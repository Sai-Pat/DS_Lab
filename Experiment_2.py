"""Write a Python program to compute following computation on matrix: 
a)  Subtraction of two matrices 
b) Multiplication of two matrices"""
def matrix():
    m=[]
    r= int(input("Enter Number of Rows : "))
    c= int(input("Enter Number of Columns : "))
    for i in range(r):
        a=[]
        for j in range(c):
            x= int(input("Enter Element : "))
            a.append(x)
        m.append(a)
    return m
def show(m):
    for i in range(len(m)):
        for j in range(len(m[0])):
            print(m[i][j],end=" ")
        print()
# Subtraction of 2 Matrices
def subtraction(m1,m2):
    m3=[]
    if len(m1)==len(m2) and len(m1[0]) == len(m2[0]):
        for i in range(len(m1)):
            a=[]
            for j in range(len(m1[0])):
                x=m1[i][j]-m2[i][j]
                a.append(x)
            m3.append(a)
        return m3
m1=matrix()
m2=matrix()
m4=subtraction(m1,m2)
show(m4)
# Multiplication of 2 Matrices    
def multiplication(m1,m2):
    m3=[]
    r = len(m1)
    c = len(m2[0])
    for i in range(len(m1)):
        a=[]
        for j in range(len(m2[0])):
            a.append(0)
        m3.append(a)
    if len(m1)==len(m2[0]):
        for i in range(len(m1)):
            for j in range(len(m2[0])):
                for k in range(len(m2)):
                    m3[i][j]+=m1[i][k]*m2[k][j]
        return m3

m3=multiplication(m1,m2)
show(m3)
