n=input('enter a number : ')
sum = 0
for i in range (1,n+1):
	if (i/2)*2 != i :
		print i
		sum = sum+i
print "sum of odd numbers is ",sum
