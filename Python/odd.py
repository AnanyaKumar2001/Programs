n=input("Enter a number : ")
sum=0
i=1
m=0
while n>=i:
	if (float(i)/2!=float(m)):
		sum=sum+i
		m=m+1
		print i
	i=i+1
print "The sum of odd numbers upto a given number is ",sum
