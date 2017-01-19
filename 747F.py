a = input()
a = a.split()
k = int(a[0])
t = int(a[1])

kk = 0
n = 0
while kk != k:
    interessant = True
    n += 1
    nombre = hex(n)[2:]
    for lettre in "123456789abcdef":
        if nombre.count(lettre) > t:
            interessant = False
            break
    if interessant == True:
        kk+=1
print(nombre)


    
