n,m = map(int, input().split())
sum=int(0)
temp=input()
array=temp.split()
for i in range(len(array)):
    array[i]=int(array[i])

i=0
for i in range(len(array)):
    sum=sum+array[i]**2

if(sum%m==0): 
    print("Yes")
else: print("No") 

