nStr = input()
#string cinsinden input aldık
n = int(nStr)
#input'u integer'a çevirip n'e attık
kelimeler = []
for i in range(n):
    kelime = input()
    kelimeler.append(kelime)
#n kere input alıp bunları words dizisine sondan ekledik
for kelime in kelimeler:
    uzunluk = len(kelime)
    if uzunluk <= 10:
        print(kelime)
        continue
    araKelime = kelime[1 : uzunluk-2]
    #kelimeyi 1. elemandan uzunluk-2'ye kadar kesip bunu araKelime'ye attık
    araUzunluk = uzunluk - 2
    #ilk harf ve son harf çıkacağı için
    kelime = kelime[0] + str(araUzunluk) + kelime[uzunluk - 1]
    #yeni kelimemiz ilk harften, ara uzunluktan ve son harften oluşuyor
    print(kelime)
