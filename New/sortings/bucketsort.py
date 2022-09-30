def bucketsort(a):
    bucket = []

    for i in range(len(a)):
        bucket.append([])
    for j in a:
        index_b = int(10 * j)
        bucket[index_b].append(j)
    for i in range(len(a)):
        bucket[i] = sorted(bucket[i])
    k = 0
    for i in range(len(a)):
        for j in range(len(bucket[i])):
            a[k] = bucket[i][j]
            k += 1
    return a

a = list(map(int, input().split(' ')))
bucketsort(a)
print("Sorted list in descending order is")
print(a)
