def mergesort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
    r=len(arr)-mid
    for i in range(mid):
         x[i]=arr[i]
    for j in range (r):
        y[j]=arr[r+j]

        mergesort(x)
        mergesort(y)

        i=j=k=0

        while i< len(x) and j<len(y):
            if x[i]<y[j]:
                arr[k]=x[i]
                i=i+1

            else:
                arr[k]=y[j]
                j=j+1
            k=k+1

        while i<len(x):
            arr[k]=x[i]
            k=k+1
            i=i+1
        while j<len(y):
            arr[k]=y[j]
            k=k+1
            j=j+1

if __name__ == '__main__':
    n = int(input(print("Enter the number of elemnets in array ")))
    arr= []
    for i in range(n):
            x =int(input())
            arr.append(x)
    print("The array entered is :")
    for i in range(len(arr)):
        print(arr[i])
    mergesort(arr)
    print("The sorted array is  :")
    for i in range(len(arr)):
       print(arr[i])

