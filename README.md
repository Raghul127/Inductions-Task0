# Inductions-Task0
Repository for the Task-0 v2 of the Spider Webdev Inductions

## Task_v2.0

Follow these to complete this subtask

The basic idea of this task is to understand how collaborated projects work on github 
 - Fork this repo 
 - Clone the forked repo to your local system
 - Implement a given algorithm in your favourite programming language and commit
 - Push the file to the repository 
 - Make sure you pull the code using `git pull` before pushing your code
 - After pushing the code, give a pull request or a PR to the parent repo from which you have forked from
 - Your pull request will then be reviewed by the mentor


Merge Sort==> python

def mergesort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
	A = arr[:mid]
        B = arr[mid:]
        mergesort(A)
        mergesort(B)
        i=0
	j=0
	k=0

        while i< len(A) and j<len(B):
            if A[i]<B[j]:
                arr[k]=A[i]
                i=i+1

            else:
                arr[k]=B[j]
                j=j+1
            k=k+1

        while i<len(A):
            arr[k]=A[i]
            k=k+1
            i=i+1
        while j<len(B):
            arr[k]=B[j]
            k=k+1
            j=j+1

if __name__ == '__main__':
    n = int(input(print("Enter the number of elemnets in array ")))
    arr= []
    for i in range(n):
            x =int(input())
            arr.append(x)
    print("The array entered is :")
    for i in range( len(arr)):
        print(arr[i])
    mergesort(arr)
    print("The sorted array is  :")
    for i in range(len(arr)):
       print(arr[i])

