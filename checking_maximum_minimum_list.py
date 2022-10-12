def list_min(l):
  mini = l[0]
  for i in range (len(l)):
    if(l[i]<mini):
      mini = l[i]
  return mini
def list_max(l):
  maxi = l[0]
  for i in range (len(l)):
    if(l[i]>maxi):
      maxi = l[i]
  return maxi 
def list_appendbefore(l,z):
  newl=[]
  for i in range(len(z)):
    newl.append(z[i])
  for i in range(len(l)):
    newl.append(l[i]) 
  return newl
  
l =[1,2,5,0,4,4,6,7,-9,10]
z=[10,20,30]
print(list_min(l))
print(list_max(l))
print(list_appendbefore(l,z))
