def length(list):
  c=0
  for i in list:
    c=c+1
  return c
def search(list,n):
    c=length(list)
    for j in range(c):
        if list[j]==n:
            return 1

a=input("Enter a list : ")
m=input("Enter element to search : ")
z=search(a,m)
if z==1:
    print "The element is in the list"
else:
    print "The number is not in the list"
