a=[]
l=input("Enter the length of the list : ")
for i in range(0,l):
	k=input("Enter the element : ")
	a=a+[k,]
print "The given list is ",a

for i in range(0,l):
	n=input("Enter the number that you want to find : ")
	if (a[i]==n):
		print "The given number is",n,"and it is found at index ",i
	else:
		print "The given number  is not in list"
