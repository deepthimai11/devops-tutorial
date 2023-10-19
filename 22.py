def primes():
    primelist=[]
    for num in range(2,100):
        if all(num%i!=0 for i in range(2,num)):
            primelist=primelist+[num]
    return primelist
x=int(input("enter the number:"))
output=primes()
print(output[:x])
