a=open("n.txt","r")
data = a.read()
characters=0
for a in data:
	c=a.split()
	characters=characters+1
	print c
print "The count of characters is ",characters

a=open("n.txt","r")
k=0
n=0
for line in a:
	print line
	w=line.split()
	k=len(w)
	n=n+k
print "The count of words is ",n

a=open("n.txt","r")
ddd=a.readlines()
lines=0
for a in ddd:
	l=a.split()
	lines=lines+1
print "The count of lines is ",lines
