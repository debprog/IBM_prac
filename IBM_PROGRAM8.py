s=[]

l=int((input("Enter length of list")))

lis_num=[]

for i in range(1,l+1):
    a=(input("Enter element"))
    
    if( len(str(a))==3 ):
        lis_num.append(a)

n=int((input("Enter n")))
lis_num.sort()
print(lis_num[n-1]);