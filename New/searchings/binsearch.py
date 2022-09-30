def binsearch(a,item):
    first=0
    last=len(a)-1
    while  first<=last:
        mid=first+(last-first)//2
        if a[mid]==item:
            return mid
        elif a[mid]<item:
            first=mid+1
        else:
            last=mid-1
    return -1

a= list(map(int, input().split(' ')))
a.sort()
item=int(input("Enter item : "))
print("The sorted list is ", a)
b=binsearch(a,item)
if b!=-1:
    print ("The element is found at index %d" %b)
else:
    print ("The element is not found")
