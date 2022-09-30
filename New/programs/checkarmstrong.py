n=int(input())
c=1
i=n
l=len(str(i))
s=0
while n>0:
    r=n%10
    s=s+r**l
    n=n//10
if i==s:
    print("Armstrong")
else:
    print("Not Armstrong")
