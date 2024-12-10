"""Write a Python program to store first year percentage of students in array. 
Write function for sorting array of floating point numbers in ascending 
order using Selection Sort 
display top five scores."""
arr=[3.2,5.1,7.2,8.9,10.2,1.5,2.1]
l=len(arr)
def selection_sort():
    for i in range(l):
        ind =i
        small=arr[i]
        for j in range(i+1,l):
            if small>arr[j]:
                small=arr[j]
                ind = j
        arr[i],arr[ind]=arr[ind],arr[i]
    print(arr)
selection_sort()