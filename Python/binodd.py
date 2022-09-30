n=input("Enter n : ")
sum=0
for i in range(1,n):
	b=bin(i)
	c=int(b[-1])
	if c==1:
		print i
		sum=sum+i
print "The sum of odd numbers upto a given number is ",sum
