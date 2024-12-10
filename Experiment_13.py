"""
Write a Python program to store first year percentage of students in array. 
Write function for sorting array of floating point numbers in ascending 
order using quick sort and display top five scores. """
arr=[3.2,5.1,7.2,8.9,10.2,1.5,2.1]
l=len(arr)
low=0
high=l-1
def partition(arr,low,high):
    i = low-1
    pivot=arr[high]
    for j in range(low,high):
        if arr[j] <= pivot:
            i+=1
            arr[i],arr[j]=arr[j],arr[i]
    arr[i+1],arr[high]=arr[high],arr[i+1]
    return i+1

def quick_sort(arr,low,high):
    if low<high:
        pi= partition(arr,low,high)
        quick_sort(arr,low,pi-1)
        quick_sort(arr,pi+1,high)
    

quick_sort(arr,0,l-1)
print(arr)