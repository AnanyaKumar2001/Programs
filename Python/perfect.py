n=input("Enter a num : ")
i=1
sum=0
while i<n:
    if n%i==0:
        sum=sum+i
    i=i+1
if sum==n:
    print "The given num is a perfect number"
else:
    print "not a perfect number"
