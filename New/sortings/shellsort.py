def shellsort(a, n):
  g = n//2
  while g>0:
    for i in range(g,n):
      j = a[i]
      k = i
      while k>=g and a[k-g]>j:
        a[k] = a[k-g]
        k -= g
      a[k]=j
    g //= 2
  return a

a = list(map(int, input().split(' ')))
n = len(a)
selectionsort(a, n)
print(a)
