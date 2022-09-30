n=input("Enter a number : ")
a=0
x=n
while n>0:
    r=n%10
    a=(a*10)+r
    n=(n/10)
if x==a:
    print ("The given number is a palindrome")
else:
    print ("The given number is not a palindrome")
