a=open("n.txt","r")
for line in a:
	print line

a=open("n.txt","r")
data = a.read()
print "The no.of characters is ",len(data)


a=open("n.txt","r")
ddd=a.readlines()

k=0
n=0
lines=0
words=0

for a in ddd:
	l=a.split()
	lines=lines+1
	words=len(l)
	k=k+words

print "The count of words is ",k
print "The count of lines is ",lines


