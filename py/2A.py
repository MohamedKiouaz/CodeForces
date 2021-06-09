import re
def decto26(n):
	alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	if(n == 0):
		return ""
	k = 0
	if(alphabet[n%26-1] == "Z"):
		k = 1
	return decto26(n//26-k) + alphabet[n%26-1]

print(decto26(26))

def b26todec(S):
	return sum((ord(k) - 64)*26**(len(S)-i-1) for i,k in enumerate(S))
	

n = int(input())
l = [str(input()) for _ in range(n)]
for k in l:
    if len(re.findall("([A-Z]+[0-9]+[A-Z]+[0-9]+)", k)) > 0:
        r = re.findall("[0-9]+", k)
        collumn = int(r[-1])
        row = r[0]
        print(decto26(collumn) + row)
    else:
        r = re.findall("[A-Z]+", k)
        collumn = re.findall("[0-9]+", k)
        print("R" + str(collumn[0]) + "C" + str(b26todec(r[0])))
