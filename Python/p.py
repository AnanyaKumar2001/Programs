print('!* To Find Prime Number')
def Prime_Number(n):
    flag = 1;
    n = input('Enter the number')
    for i in range(2,n):
        if(n%i == 0):
            print('%d is not a prime number' %n)
            flag = 0;
            break;
    if(flag == 1):
        print('%d is a prime number' %n)
m=input("m : ")
f=Prime_Number(m)
print f
