k=-1
a=input("Enter the list : ")
l=0
count=0
for l in a:
	count=count+1
print "The length of the list is ",count
n=input("Enter n :")
for j in range(count):
		if a[j]==n:
			print "The index is ",j
			k=k+1

if k==-1:
	print "The element is not found"
