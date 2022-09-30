a=input("Enter a list : ")
n=input("Enter a num : ")
for i in range(0,len(a)):
    if n==a[i]:
        print "The element is found"
if n!=a[i]:
    print "The element is not found"
