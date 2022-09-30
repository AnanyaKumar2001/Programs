n=int(input("Enter n : "))
i=2
c=1
while c<=n:
    j=2
    f=1
    while j<i:
        if i%j==0:
            f=0
        j=j+1
    if f==1:
        print (j)
        c=c+1
    i=i+1
