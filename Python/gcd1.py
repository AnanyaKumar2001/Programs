n=input("enter a number")
m=input ("enter a number")
i=0
a=[]
for i in range(1,n+1):
    if n%i==0:
        a.append(i)
i=0
b=[]
for i in range(1,m+1):
    if m%i==0:
        b.append(i)
z=list(set(a).intersection(b))
print "the gcd of given two numbers is", max(z)
