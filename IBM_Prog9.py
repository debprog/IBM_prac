s=input("Enter String")

mylist=[]

mylist=s.split(" ")

print(mylist)

for i in mylist:
    print(i[::-1],end=" ")
