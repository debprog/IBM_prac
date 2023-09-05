print("enter length")
n=int(input())

input_list=[]
reverse_list=[]

for i in range(n):
    input_list.append(input())
    
input_list.sort()
reverse_list=[]
for i in input_list:
    p=i.split("-");
    temp="-".join(p[::-1])
    reverse_list.append(temp)
    
reverse_list.sort();
for i in reverse_list: 
    print(i)