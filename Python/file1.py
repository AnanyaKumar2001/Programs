a=open("m.txt","r+")
print a.read()
print "Write something"
p=raw_input()
print a.write(p)
print a.close()
