n=input("Enter n : ")
m=input("Enter m : ")
i=1
while i<=n:
    if n%i==0 and m%i==0:
        c=i
    i=i+1
print "The gcd of given two numbers is ",c

lcm=(m*n)/c
print "The lcm of given two numbers is ",lcm
