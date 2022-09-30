m=input("Number of students : ")
n=input("Number of subjects : ")
for i in range(1,m+1):
	print "Enter student ",i," marks : "
	s=0
	for j in range(1,n+1):
		print "Subject ",j," marks : "
		k=input("marks ")
		s=s+k
	print "Avg of student ",i,"is",float(s)/n