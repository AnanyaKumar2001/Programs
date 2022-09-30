n=int(input("Enter n : "))
i=2
j=1
while (i<n):
    if n%i==0:
        j=0
    i=i+1
if j==1:
    print("The given number is a prime number")
else:
    print("The given number is not a prime number")
