s=input()+" "
length=len(s)-1
p=[]
c=[0]
toplam=0
answer=""
for i in range(length):
    p.append(0)
    if(s[i]==s[i+1]):
        p[i]=1

for i in range(length):
    if(p[i]==1):
        toplam+=1
    c.append(0)
    c[i+1]=toplam
    
n=int(input())
for i in range(n):
    l,r=map(int,input().split())
    answer+=str(c[r-1]-c[l-1])+"\n"
print(answer)
