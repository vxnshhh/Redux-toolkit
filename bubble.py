"""bubble sort in python"""

a=[12,5,6,8,9]
b=len(a)

for x in range(b):
  for y in range(b):
    if a[x]<a[y] :
        temp=a[x]
        a[x]=a[y]
        a[y]=temp

for x in a:
 print(x)
