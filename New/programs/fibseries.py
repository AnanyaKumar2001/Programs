def fib(n):
    if n==0:
        return 0
    if n==1  or n==2:
        return 1

    return fib(n-2)+fib(n-1)

n=int(input())
for i in range(0,n):
    print(fib(i))
