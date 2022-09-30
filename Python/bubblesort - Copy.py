def bubblesort(list):
    l=len(list)
    for i in range(0,l):
        for j in range(0,l-1):
            if list[j]>list[j+1]:
                list[j],list[j+1]=list[j+1],list[j]
    return list
n=input("Enter a list : ")
b=bubblesort(n)
print (b)
