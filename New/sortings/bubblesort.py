def bubblesort(a):
  n = len(a) - 1
  for i in range(n):
    for j in range(n-i):
      if a[j]>a[j+1]:
        a[j],a[j+1] = a[j+1],a[j]
  return a

a = list(map(int, input().split(' ')))
bubblesort(a)
print(a)
