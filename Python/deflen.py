def length(list):
  c=0
  for i in list:
    c=c+1
  return c

def search(list1,n):
    c=length(list1)
    for j in range(c):
        if list1[j]==n:
            return j
    return -1

a=input("Enter a list : ")
c=length(a)
print "The length of list is ",c

m=input("Enter element to search")
z=search(a,m)
if z==-1:
    print "The element is not found"
else:
    print "The number is found at ",z
