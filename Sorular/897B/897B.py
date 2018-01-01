KveP=input().split(" ")
k=int(KveP[0])
p=int(KveP[1])
toplam=0
def palindromBul(sayi):
    yazi=str(sayi)
    yaziUzunlugu=len(yazi)
    tersYazi=""
    for harf in range(yaziUzunlugu):
        tersYazi+=yazi[yaziUzunlugu-harf-1]
        #yazinin son harfinden geriye doğru
        #tersyazi string'ine ekliyoruz
    return int(yazi+tersYazi)

for sayi in range(1,k+1):
    toplam+=palindromBul(sayi)
print(toplam)
print(toplam%p)

