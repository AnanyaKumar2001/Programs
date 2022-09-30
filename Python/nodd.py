n=input("Enter n : ")
i=1
sum=0
while i<=n:
    y=~(-2*i)
    sum=sum+y
    print y
    i=i+1
print "The sum of ",n,"odd numbers is ",sum


m=input("Enter number : ")
c=1
sum=0
i=1
while c<=m:
    if i%2!=0:
        print i
        sum=sum+i
        c=c+1
    i=i+1
print "The sum of ",n,"odd numbers is ",sum
