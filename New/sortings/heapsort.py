def heapify(a, n, i):
    largest = i
    l = 2 * i + 1
    r = 2 * i + 2
    if l < n and a[i] < a[l]:
        largest = l
    if r < n and a[largest] < a[r]:
        largest = r
    if largest != i:
        a[i], a[largest] = a[largest], a[i]
        heapify(a, n, largest)

def heapSort(a):
    n = len(a)
    for i in range(n//2, -1, -1):
        heapify(a, n, i)
    for i in range(n-1, 0, -1):
        a[i], a[0] = a[0], a[i]
        heapify(a, i, 0)

a = list(map(int, input().split(' ')))
heapSort(a)
print(a)
