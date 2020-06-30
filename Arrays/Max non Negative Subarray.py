n=int(input())
l=list(map(int,input().split()))
lowmax=-1
highmax=-1
low=0
summax=-1
for i in range(n):
    if l[i]<0:
        if(summax<sum(l[low:i])):
            lowmax=low
            highmax=i
        low=i+1
for i in range(lowmax,highmax):
    print(l[i],end=" ")
        
            
