def length(list):
  c=0
  for i in list:
    c=c+1
  return c

def max(list,max):
    max=list[0]
    for i in range(c):
        if max<list[i]:
            max=list[i]
    return max


def min(list,min):
    min=list[0]
    for i in range(c):
        if min>list[i]:
            min=list[i]
    return min

def sum(list):
    su=0
    for i in range(c):
        su=su+list[i]
    return su

def count(list,m):
    co=0
    for i in range(c):
        if list[i]==m:
            co=co+1
    return co

a=input("Enter a list : ")
c=length(a)
print "The length of list is ",c

m=a[0]
s=max(a,m)
print "The maximum number in the list is ",s

j=a[0]
l=min(a,j)
print "The minimum number in the list is ",l

su=sum(a)
print "The sum of the list is ",su

mm=input("Enter the element to count : ")
cu=count(a,mm)
print "The count of given number is ",cu
