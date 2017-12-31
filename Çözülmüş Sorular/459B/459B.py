n = int(input())
cicekler = list(map(int, input().split()))

enAzGuzelCicek=10**9
enGuzelCicek=0
enAzGuzelCicekSayisi=1
enGuzelCicekSayisi=1

for cicek in cicekler:
    if cicek<enAzGuzelCicek:
        enAzGuzelCicek=cicek   
        enAzGuzelCicekSayisi=1 
    elif cicek==enAzGuzelCicek:
        enAzGuzelCicekSayisi+=1
    if cicek>enGuzelCicek:
        enGuzelCicek=cicek      
        enGuzelCicekSayisi=1
    elif cicek==enGuzelCicek:
        enGuzelCicekSayisi+=1
        
maksimumGuzellikFarki=enGuzelCicek-enAzGuzelCicek
ihtimalSayisi=enGuzelCicekSayisi*enAzGuzelCicekSayisi
if(enGuzelCicekSayisi==n):
    ihtimalSayisi=int(n*(n-1)/2)
else:
    ihtimalSayisi=enGuzelCicekSayisi*enAzGuzelCicekSayisi
print(maksimumGuzellikFarki,ihtimalSayisi)
