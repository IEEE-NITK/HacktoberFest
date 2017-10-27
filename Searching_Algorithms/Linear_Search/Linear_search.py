#takes the input of the size of the array
print("Enter the size of the array")
n = int(input())

#reads the elements in the array
print("Enter the array elements seperated by space")
arr = list(map(int, input().split()))

#take the input for the search element
print("Enter the element to be searched")
search = int(input())

flag = 0
#searches and prints the result
for i in range(n):
    if search == arr[i]:
        flag = 1
        print("Element found at the index ",(i+1))
        break

if flag == 0:
    print("Element not found !")