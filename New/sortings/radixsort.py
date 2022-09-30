def countingsort(a, place):
    n = len(a)
    output = [0] * n
    count = [0] * 10
    for i in range(0, n):
        index = a[i] // place
        count[index % 10] += 1
    for i in range(1, 10):
        count[i] += count[i - 1]
    i = n - 1
    while i >= 0:
        index = a[i] // place
        output[count[index % 10] - 1] = a[i]
        count[index % 10] -= 1
        i -= 1
    for i in range(0, n):
        a[i] = output[i]

def radixsort(a):
    max_element = max(a)
    place = 1
    while max_element // place > 0:
        countingsort(a, place)
        place *= 10

a = list(map(int, input().split(' ')))
radixsort(a)
print(a)
