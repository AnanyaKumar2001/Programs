def countingsort(a):
    n = len(a)
    output = [0] * n
    count = [0] * 10

    for i in range(0, n):
        count[a[i]] += 1
    for i in range(1, 10):
        count[i] += count[i - 1]
    i = n - 1
    while i >= 0:
        output[count[a[i]] - 1] = a[i]
        count[a[i]] -= 1
        i -= 1
    for i in range(0, n):
        a[i] = output[i]

a = list(map(int, input().split(' ')))
countingsort(a)
print(a)
