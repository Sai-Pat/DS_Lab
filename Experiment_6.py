"""In second year computer engineering class, group A student’s play cricket, 
group B students play badminton and group C students play football. 
Write a Python program using functions to compute following: 
a) List of students who play either cricket or badminton but not both 
b) Number of students who play cricket and football but not badminton. """
def student():
    l = []
    x = int(input("How many Students : "))
    for i in range(x):
        y=int(input("Enter Roll Number :"))
        l.append(y)
    return l
# a) List of students who play either cricket or badminton but not both 

def not_both(badminton,cricket):
    l =[]
    for i in cricket :
        if i not in badminton :
            l.append(i) 
    for i in badminton :
        if i not in cricket:
            l.append(i)
    print("students who play either cricket or badminton but not both :", l)

# b) Number of students who play cricket and football but not badminton.
def all_not_badm(badminton,cricket,football):
    l=[]
    for i in cricket:
        if i not in badminton:
            l.append(i)
    for i in football:
        if i not in badminton:
            l.append(i)
    print("students who play cricket and football but not badminton.",l)

print("FOr Cricket")
cricket=student()
print("FOr Badminton")
badminton=student()
print("FOr Football")
football=student()
not_both(badminton,cricket)
all_not_badm(badminton,cricket,football)