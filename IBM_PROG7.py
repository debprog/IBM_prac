
s=(input("Enter String"))
n=1
p=""
rev=s[::-1]



for i in s:
    if(i=='a' or i=='e'or i=='e'or i=='o' or i=='u'):
        p=p+str(n)
        n=n+1
        if (n>9):
            n=1
    else:
        p=p+i
        
print(p[::-1])