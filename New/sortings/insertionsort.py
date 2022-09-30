def insertionsort(a):
  for i in range(1, len(a)):
    k = a[i]
    j = i-1
    while j>=0 and k<a[j]: # condition for ascending order, if we want descending order put ( j>= and k>a[j] )
      a[j+1]=a[j]
      j -= 1
    a[j+1]=k
  return a

a = list(map(int, input().split(' ')))
insertionsort(a)
print(a)
