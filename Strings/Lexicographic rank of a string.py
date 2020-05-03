from itertools import permutations
s=input()
t=permutations(s)
t=sorted(t)
l=[]
for i in t:
    l.append(''.join(i))
print(l.index(s)+1)

'''OUTPUT
string
598'''
