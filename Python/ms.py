def merge(list,first,m,last):
            nl=m-first+1
            nr=last-m
            l=[0]*(nl)
            r=[0]*(nr)
            for i in range(0,nl):
                l[i]=list[l+i]
            for j in range(0,nr):
                r[j]=list[m+1+j]
            i=0
            j=0
            k=first
            while i<nl and j<nr:
               if l[i]<=r[j]:
                 list[k]=l[i]
                 i=i+1
               else:
                 list[k]=r[j]
                 j=j+1
               k=k+1
            while i<nl:
               list[k]=l[i]
               i=i+1
               k=k+1
            while j<nr:
               list[k]=r[j]
               j=j+1
               k=k+1
def mergesort(list,first,last):
    if first<last:
        mid=(first+last)/2
        mergesort(list,first,mid)
        mergesort(list,mid+1,last)
        merge(list,first,mid,last)



n=[10,2,5,18,24,3,90,15,21,1]
l=len(n)
print "Given list is "
for i in range(l):
    print n[i]
m=mergesort(n,0,l-1)
print "The sorted list is "
for i in range(l):
    print n[i]
print m
