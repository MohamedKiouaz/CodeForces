a = input()
a = a.split()
k = int(a[0])
t = int(a[1])

kk = 0
n = 0
while kk != k:
    n += 1
    nombre = hex(n)[2:]
    interessant = all(nombre.count(lettre) <= t for lettre in "123456789abcdef")
    if interessant:
        kk+=1
print(nombre)


    
