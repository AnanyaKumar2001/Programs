# -*- coding: utf-8 -*-
"""Data Structures & Sorting Algorithms.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1pvhYbI1f9cvoJ_kqAfu_0UdSteDpT79l

Linked Lists
"""

# deque

from collections import deque

linked_list = deque()
linked_list

linked_list.append(0)
linked_list

linked_list.appendleft(1)
linked_list

linked_list.append(2)
linked_list

linked_list.popleft()
linked_list

# queue

queue = deque()

for i in range(0,5):
  queue.append(i)
  print(queue)

for i in range(len(queue)):
  queue.popleft()
  print(queue)

# stack

stack = deque()

for i in range(0,5):
  stack.appendleft(i)
  print(stack)

for i in range(len(stack)):
  stack.popleft()
  print(stack)

# custom Linked List

class Node:
  def __init__(self, data=None):
    self.data = data
    self.next = None

class Linked:
  def __init__(self):
    self.head = None
  def show(self):
    node = self.head
    while node is not None:
      print(node.data)
      node = node.next
  def add(self, new):
    new_node = Node(new)
    new_node.next = self.head
    self.head = new_node

link = Linked()
element = Node("Ananya")
link.head = element
link.show()

element2 = Node("Kumar")
link.head.next = element2
link.show()

link.add("Mamillapalli")
link.show()

"""Tree Traversals"""

# creating a node class
class Node:
  def __init__(self,val):
    self.childleft = None
    self.childright = None
    self.nodedata = val

# creating an instance of the node class
root = Node(1)
root.childleft = Node(2)
root.childright = Node(3)
root.childleft.childleft = Node(4)
root.childleft.childright = Node(5)

def InOrd(root):
  if root:
    InOrd(root.childleft)
    print(root.nodedata)
    InOrd(root.childright)
InOrd(root)

def PreOrd(root):
  if root:
    print(root.nodedata)
    PreOrd(root.childleft)
    PreOrd(root.childright)
PreOrd(root)

def PostOrd(root):
  if root:
    PostOrd(root.childleft)
    PostOrd(root.childright)
    print(root.nodedata)
PostOrd(root)

"""Sortings"""

def mergesort(mylist, left, right):
  if right - left > 1:
    middle = (left+right)//2
    msort(mylist, left, middle)
    msort(mylist, middle, right)
    mlist(mylist, left, middle, right)

def mlist(mylist, left, middle, right):
  leftlist = mylist[left:middle]
  rightlist = mylist[middle:right]
  k = left
  i = 0
  j = 0
  while(left+i < middle and middle+j < right):
    if(leftlist[i] <= rightlist[j]):
      mylist[k] = leftlist[i]
      i = i+1
    else:
      mylist[k] = rightlist[j]
      j = j+1
    k = k+1
  if left+i < middle:
    while k<right:
      mylist[k] = leftlist[i]
      i = i+1
      k = k+1
  else:
    while k<right:
      mylist[k] = rightlist[j]
      j = j+1
      k = k+1
  

mylist = input().split()
mylist = [int(x) for x in mylist]
mergesort(mylist, 0, len(mylist))
print(mylist)

def bubblesort(a):
  n = len(a) - 1
  for i in range(n):
    for j in range(n-i):
      if a[j]>a[j+1]:
        a[j],a[j+1] = a[j+1],a[j]
  return a

mylist = input().split()
mylist = [int(x) for x in mylist]
bubblesort(mylist)
print(mylist)

def insertionsort(a):
  for i in range(1, len(a)):
    k = a[i]
    j = i-1
    while j>=0 and k<a[j]: # condition for ascending order, if we want descending order put ( j>= and k>a[j] )
      a[j+1]=a[j]
      j -= 1
    a[j+1]=k
  return a 

mylist = input().split()
mylist = [int(x) for x in mylist]
insertionsort(mylist)
print(mylist)

def selectionsort(a, n):
  for i in range(n):
    min = i
    for j in range(i+1, n):
      if a[j] < a[min]:
        min = j
    a[i],a[min] = a[min], a[i]
  return a

mylist = input().split()
mylist = [int(x) for x in mylist]
n = len(mylist)
selectionsort(mylist, n)
print(mylist)

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

mylist = input().split()
mylist = [int(x) for x in mylist]
n = len(mylist)
shellsort(mylist, n)
print(mylist)