n=input("Enter n : ")
sum=0
c=0
i=1
for i in range(1,n):
    if i%2!=0:
        sum=sum+c
        c=c+2
print sum
