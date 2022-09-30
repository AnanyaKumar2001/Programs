n=input("Enter a number : ")
a=0
while n>0:
    r=n%10
    a=(a*10)+r
    n=(n/10)
print "The reverse number of a given number is ",a
