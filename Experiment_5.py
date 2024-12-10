"""In second year computer engineering class, group A student’s play cricket, 
group B students play badminton and group C students play football. 
Write a Python program using functions to compute following: 
a) List of students who play both cricket and badminton 
b) Number of students who play neither cricket nor badminton"""
def students():
    l=[]
    x = int(input("Enter Number of Players :"))
    for i in range(x):
        y=int(input("Enter Roll Numbers"))
        l.append(y)
    return l

# a) List of students who play both cricket and badminton 

def crik_and_badm(cricket,badminton):
    l=[]
    for i in badminton:
        if i in badminton and i in cricket:
            l.append(i)
    print("Students who play Both Badminton and Cricket : ",l)
# b) Number of students who play neither cricket nor badminton

def na_badm_na_crick(cricket,badminton,football):
    l=[]
    for i in football:
        if i not in badminton and i not in cricket:
            l.append(i)
    print("Students who play neither Cricket nor Badminton ",l)

# driver Code
print("For Cricket : ")
cricket=students()
print("For Badminton : ")
badminton=students()
print("For Footabll : ")
football=students()
crik_and_badm(cricket,badminton)
na_badm_na_crick(cricket,badminton,football)