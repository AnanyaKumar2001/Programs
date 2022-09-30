def insertionsort(list):
    l=len(list)
    for i in range(1,l):
        temp=list[i]
        j=i
        while j>0 and list[j-1]>temp:
            list[j]=list[j-1]
            j=j-1
        list[j]=temp
    return list

n=input("Enter a list : ")
i=insertionsort(n)
print i
