#reads Input
print("Enter the two numbers")
a = int(input())
b = int(input())


print("Select the operation to be perform\n(1) +\n(2) -\n(3) *\n(4)\ \n")
t = int(input())

#performs the required operation
if t == 1:
    t = a+b
elif  t == 2:
    t = a-b
elif t == 3:
    t = a*b
elif t == 4:
    t = a/b
else :
    print("Wrong operation !")

#prints the result
print(t)
