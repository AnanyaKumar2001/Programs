def binsearch(list,item):
    first=0
    last=len(list)-1
    while  first<=last:
        mid=(first+last)/2
        if list[mid]==item:
            return 1
        elif list[mid]>item:
            last=mid-1
        else:
            first=mid+1

list=input("Enter a list : ")
list.sort()
item=input("Enter item : ")
b=binsearch(list,item)
if b==1:
    print "The element is found"
else:
    print "The element is not found"
