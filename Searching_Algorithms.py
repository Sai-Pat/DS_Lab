
#Sample Array/List from which Elements will be Searched
arr=[1,2,3,4,5,6,7,8]
l=len(arr)
x=int(input("Enter Element to be Searched : "))
def linear_search():
    # Time Complexity - O(n)
    # Space Complexity - 2n+2
    for  i in range (0,l):
        if arr[i]==x:
            print("Element Found!")
            code = 1 #flag variable
            break
        else :
            code = 0
    if code == 0:
        print("Element Not Found!")
def sentinal_search():
    # Time Complexity - O(n)
    # Space Complexity - n+2
    last = arr[l-1]
    arr[l-1]=x
    i=0
    while arr[i] != x :
        i+=1
    arr[l-1]=last
    if (i<l-1 or arr[l-1] == x):
        print("Element Found!")
    else :
        print("Element Not Found!")
def binary_search():
    # Time Complexity - O(log n)
    # Space Complexity - n
    first = 0
    last = l
    while first <= last :
        mid = int((first+last)/2)
        if x == arr[mid-1]:
            print("Element Found!")
            code = 1#flag variable 
            break
        elif x>arr[mid-1] :
            first = mid+1
            code = 0
        else :
            last = mid-1
            code = 0
    if code !=1:
        print("Element Not Found!")
def fibonacci(n):
# Time Complexity - O(logn)
# Space Complexity - n
    if n < 1:
        return 0
    elif n == 1:
        return 1
    else :
        return (fibonacci(n-1)+fibonacci(n-2))
def fibonacci_search():
    m=0
    while fibonacci(m) < l :
        m+=1
    offset = -1
    while fibonacci(m) > 1 :
        i = min(offset + fibonacci(m-2),l-1)
        if x > arr[i]:
            offset = i 
            m-=1
            code = 1
        elif x<arr[i]:
            m-=2
            code = 1
        else :
            print("Element Found!")
            code = 0
            break
    
    if code != 0:
        print("Element Not Found!")

print("Which type of Search You Would Like to Perform \n")
x= int(input("""Enter 1. for linear_search \n
Enter 2. for sentinal_search \n
Enter 3. for binary_search \n
Enter 4. for fibonacci_search \n ::"""))
if (x == 1):
    linear_search()
elif (x ==2):
    sentinal_search()
elif (x ==3):
    binary_search()
elif (x == 4) :
    fibonacci_search()
