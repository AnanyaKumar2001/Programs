n=input("Enter n : ")
i = 2
c=1
while(c<=n):
   j = 2
   while(j <= (i/j)):
      if not(i%j):
          break
      j=j+1
   if (j > i/j) :
       print i
       c=c+1
   i=i+1
print "Good bye!"
