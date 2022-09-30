def gcd(a,b):
    if(b==0):
        return a
    return gcd(b,a%b)
a=input("Enter first number:")
b=input("Enter second number:")
g=gcd(a,b)
print "The gcd is ",g
