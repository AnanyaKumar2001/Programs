n=int(input("Enter n : "))
r=0
sum=0
c=n
i=1
l=len(str(n))
while n>0:
    r=n%10
    n=n/10
    sum=sum+(r**l)
    i=i+1
if c==sum:
    print ("The given number is armstrong number")
else:
    print ("The given number is not an armstrong number")
