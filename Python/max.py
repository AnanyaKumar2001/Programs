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

def searchindex(list1,n):
    c=length(list1)
    for j in range(c):
        if list1[j]==n:
            return 1
    return 0

def searchindex(list1,n):
    c=length(list1)
    for j in range(c):
        if list1[j]==n:
            return j
    return -1

def sorting(a):
	for i in range(c-1,0,-1):
		for j in range(i):
			if a[j]>a[j+1]:
				a[j],a[j+1] = a[j+1],a[j]
	return a

def inserting(list,m):
    list=list+[m,]
    return list

a=[]
l=input("Enter the length of the list : ")
for i in range(0,l):
	k=input("Enter the element : ")
	a=a+[k,]
print "The given list is ",a

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

m=input("Enter element to search")
z=searchindex(a,m)
if z==1:
    print "The element is in the list"
else:
    print "The number is not in the list"
for i in range(c):

o=input("Enter element")
z=searchindex(a,o)
if z==-1:
    print "The element is not found"
else:
    print "The number is found at index",z


a = sorting(a)
print "The given list after sorting is ",a

m=input("Enter the number that to insert : ")
ins=inserting(a,m)
print "The list after inserting",m,"is",ins
