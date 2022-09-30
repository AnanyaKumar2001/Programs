def mergesort(list):
   if len(list)>1:
            mid=len(list)//2
            l=list[:mid]
            r=list[mid:]
            mergesort(l)
            mergesort(r)
            nl=len(l)
            nr=len(r)
            i=0
            j=0
            k=0
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
   return list


n=input("Enter a list  :  ")
m=mergesort(n)
print m
