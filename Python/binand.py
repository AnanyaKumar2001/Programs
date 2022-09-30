n=input("Enter n : ")
sum=0
for i in range(1,n):
	if i&1==1:
		print i
		sum=sum+i
print "The sum of odd numbers upto a given number is ",sum
