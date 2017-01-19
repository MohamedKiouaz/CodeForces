a = input()
a = a.split()
n, m = int(a[0]), int(a[1])
boys = [False for k in range(n)]
girls = [False for k in range(m)]
a = input()

a = a.split()
if len(a) > 1:
    for i in range(int(a[0])):
        boys[int(a[i+1])] = True
a = input()

a = a.split()
if len(a) > 1:
    for i in range(int(a[0])):
        girls[int(a[i+1])] = True

if sum(boys)+sum(girls) == 0:
    print(-1)
    exit()

i = 0
lastchange = i
maxi = max(n, m)
while False in boys and False in girls:
    if (boys[i%n] and not girls[i%m]) or (not boys[i%n] and girls[i%m]):
        boys[i%n] = True
        girls[i%m] = True
        lastchange = i
    if (i - lastchange) > maxi:
        print(-1)
        exit()
    i += 1
print(i)
    
