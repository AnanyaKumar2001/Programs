def selectionsort(list):
    l=len(list)
    for i in range(0,l):
        for j in range(i+1,l):
            if list[i]>list[j]:
                list[i],list[j]=list[j],list[i]
    return list

n=input("Enter a list : ")
s=selectionsort(n)
print s
