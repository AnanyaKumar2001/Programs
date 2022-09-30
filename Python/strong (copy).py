def fact(n):
    if n==0:
        return 1
    if n==1:
        return 1
    return n*fact(n-1)


n=input("Enter n : ")
r=0
sum=0
c=n
i=1
while n>0:
    r=n%10
    n=n/10
    sum=sum+(fact(r))
    i=i+1
if c==sum:
    print "The given number is strong number"
else:
    print "The given number is not an strong number"
