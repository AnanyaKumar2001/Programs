n = int(input())
p=n
a=0
while(n>0):
    r=n%10
    a=(a*10)+r
    n=(n//10)
if(p==a):
    print("Palindrome")
else:
    print("Not Palindrome")