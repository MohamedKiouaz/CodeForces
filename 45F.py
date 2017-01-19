a = "33 3"
a = a.split()
m = int(a[0])
n = int(a[1])
l, c, ll, cc, lll, ccc = m, m, 0, 0, 0, 0
nb = 0
while((lll!= m or ccc!=m) and nb != -1):
    print(l, c, "-", ll, cc, "-", lll, ccc)
    nb += 1
    if(nb%2 == 1):
        while(ll+cc<n and l+c>0):
            if(l >= c and l > 0):
                l -= 1
                ll += 1
            elif(c > 0):
                c -= 1
                cc += 1
    else:
        while(ll+cc>1):
            if(cc>=1):
                cc -= 1
                ccc +=1
            else:
                ll -= 1
                lll += 1
        if(ll>=1 and ccc == m):
            ll -= 1
            lll += 1
    if((lll>ccc and ccc>0) or (l>c and c>0) or (ll == 0 and cc == 0 and ccc != m and lll != m) or nb > 1000):
        nb = -2
print(l, c, "-", ll, cc, "-", lll, ccc)
print(nb+1)
