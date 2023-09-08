a=input("enter Aadhar")
c=input("enter comor")
d=input("enter Date")


mylist=[]

mylist=d.split("/")



age=2023-int(mylist[2])
if(c=="y"):
    print(1)
else:
    if(age>60):
        print(1)
    elif(age>45 and age<=60):
        print(2)
    elif(age>30 and age<=45):
        print(3)
        