n=int(input("Enter n : "))
c=1
i=0
while c<=n:
    l=len(str(i))
    s=0
    a=i
    while a>0:
        r=a%10
        s=s+r**l
        a=a/10

    if i==s:
        print(i) 
        c=c+1
    i=i+1
