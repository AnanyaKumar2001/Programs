n=input("Enter n : ")
os=0
es=0
for i in range(0,n+1):
  if i%2==0:
    es=es+i
  else:
    os=os+i
print "The sum of odd numbers upto a given number is ",os
print "The sum of even numbers upto a given number is",es
