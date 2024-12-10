'''Write a Python program to store first year percentage of students in array. 
Write function for sorting array of floating point numbers in ascending 
order using Bubble Sort 
display top five scores. '''
arr=[3.2,5.1,7.2,8.9,10.2,1.5,2.1]
l=len(arr)
def bubble_sort():
    for i in range(l):
        for j in range(0,l-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
    print(arr)
bubble_sort()