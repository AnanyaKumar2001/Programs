def selectionsort(a, n):
  for i in range(n):
    min = i
    for j in range(i+1, n):
      if a[j] < a[min]:
        min = j
    a[i],a[min] = a[min], a[i]
  return a

a = list(map(int, input().split(' ')))
n = len(a)
selectionsort(a, n)
print(a)
