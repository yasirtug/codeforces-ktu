giris = input()
#girilecek bir satır inputu string olarak alıyoruz
ayirilmisInput = giris.split(" ")
#girilen string'i boşluklarından ayırrarak diziye çeviriyoruz, örneğin "3 4 5" string'i, [3, 4, 5] olarak diziye dönüyor.
l = int(ayirilmisInput[0])
r = int(ayirilmisInput[1])
a = int(ayirilmisInput[2])
#dizinin string cinsinden elemanlarını sıra sıra integer'a dönüştürüp değişkenlerimize atıyoruz.

while(a > 0):
    a -= 1
    if(l < r):
        l += 1
    else:
        r += 1
#a'daki değeri l ve r'ye önceliğe göre dağıtıyoruz.
kucukOlan = min(l, r)
#sonuçta takım, küçük kalan tarafa göre kurulacak. minimum miktarı alıyoruz.
toplamOyuncuSayisi = kucukOlan * 2
#toplam oyuncu sayısını bulmak için 2 ile çarpıyoruz.
print(toplamOyuncuSayisi)
