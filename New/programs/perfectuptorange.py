m=int(input())

for n in range(1,m+1):
    sum=0
    for i in range(1,n):
        if(n%i==0):
            sum=sum+i
    if(sum==n):
        print(n)
    
    
