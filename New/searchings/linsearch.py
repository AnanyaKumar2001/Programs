def linsearch(a,x):
    for i in range(0, len(a)):
        if(a[i]==x):
            return i
    return -1

a = list(map(int, input().split(' ')))
x = int(input("Enter element to find : "))
s = linsearch(a,x)
if s==-1:
    print(" Not Found")
else:
    print("Found at index", s)
        
