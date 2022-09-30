a=open("n.txt","r")
data = a.read()
characters=0
for a in data:
	c=a.split()
	characters=characters+1
	print "The character is  ",c
print "The count of characters is ",characters

a=open("n.txt","r")
ddd=a.readlines()
k=0
n=0
lines=0
w=0
k=0
for a in ddd:
	l=a.split()
	lines=lines+1
	w=len(l)
	k=k+w
print "The count of words is ",k
print "The count of lines is ",lines
