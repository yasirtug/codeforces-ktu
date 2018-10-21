Bu metin sadece C'de algoritma yazarken kullanılabilecek temel konseptleri hatırlatmak için hazırlanmıştır.
C hakkında ön bilgiye sahip olmadan, sadece bunlara bakarak kod yazmanız mümkün değil.

### basit bir hello world örneği:
```c
#include <stdio.h>

int main()
{
    printf("Merhaba dunya\n");
    return 0;
}
```

### bazı değişken tipleri:
```c
int, float, char
```

### değişken oluşturmak:
```c
int tamsayi;
float rasyonel_sayi;
char karakter;
```

### diziler:
dizi değişkeni oluşturmak
```c
int tamsayi_dizisi[10];
char karakter_dizisi[20] = "bir yazi";
```
dizi elemanlarına erişim
```c
tamsayi_dizisi[2] = 3;
karakter_dizisi[0] = 'B'
```

### atama yapmak:
```c
tamsayi = 0;
rasyonel_sayi = 3.14;
karakter = 'A';
```

### aritmetik operatörler:
```
bu operatörler iki ifadenin işlem sonucunu döndürür.

toplama: +
çıkarma: -
çarpma: *
bölme: /
modunu alma: %

örneğin (5 * 7) parantez içindeki ifadesi, 35 döndürür.
```
### karşılaştırma operatörleri:
```
bu operatörler iki ifadenin karşılaştırmasından 1 ya da 0 döndürür.

eşitse: ==
eşit değilse: !=
büyükse: >
küçükse: <
büyük veya eşitse: >=
küçük veya eşitse: <=

örneğin (10 > 5) parantez içindeki ifadesi, 1 döndürecektir.

```
#### if - else - else if 
```c
if(karşılaştırma)
{
    kodlar
}

//parantez içindeki ifadenin doğru(1) olması durumunda içindeki kodları çalıştırır. 
//kodlar bitince aşağıdan devam eder.
//eğer ifade yanlışsa(0), içeriye hiç girilmez ve aşağıdan devam edilir.

if(karşılaştırma)
{
    kodlar
}
else
{
    kodlar
}

//else, if içindeki karşılaştırma yanlışsa girilen bloktur. 
//böyle bir senaryoda ya if, ya da else bloğuna girileceği kesindir.

if(karşılaştırma)
{
    kodlar
}
else if(bir diğer karşılaştırma)
{
    kodlar
}
else if(bir başka karşılaştırma)
{
    kodlar
}
else
{
    kodlar
}

//else if ile araya ek karşılaştırmalar koyabiliriz.

```
### while - for
```c
while(karşılaştırma)
{
    kodlar;
}
//karşılaştırma yanlış olana kadar önündeki bloğu tekrar tekrar çalıştırır.


while örneği:

int i = 0;
while(i < 10)
{
    bir takım kodlar.
    i++;
}
//yukaridaki while içi, 10 kere çalıştırılır ve her çalıştırmanın sonunda, 'i' bir artar.
```

```c
for(tanimlama; karşılaştırma; değişiklik)
{
    kodlar;
}

for örneği:

for(int i = 0; i < 10; i++)
{
    bir takım kodlar.
}
//yukarıdaki for, yukarıdaki while ile aynı şekilde çalışır. tanımlamayı, 
//karşılaştırmayı ve değişikliği tek satırda yapabilmemizi sağlar.
```

```c
break ve continue

//döngü içindeki break; , döngünün durmasın ve önündeki kodların çalıştırılmamasını sağlar.
//continue, döngüde kendi önündeki kodlar çalıştırılmadan döngünün hemen sonraki adıma atlamasını sağlar.
```

### printf ve scanf
```c
//bu iki fonksiyon stdio.h kütüphanesinde bulunur.

//printf, konsola çıktı vermek için kullanılır.

printf("Merhaba");

//printf içinde yazı dışında şeyler göstermek için format belirteçleri kullanırız.

printf("sayi: %d, char: %c", 4, 'a');
//ilk parametre içindeki format belirteç sayısı kadar virgül koyup bu belirteçlerin yerlerine
//sırasıyla yerleştirilecek değişkenleri yazmamız gerekir.
//konsola, tırnak işaretleri olmadan "sayi: 4, char: a" basılacaktır.



//scanf, konsoldan giriş almak için kullanılır.

int n;
scanf("%d", &n);

//scanf'e değişkenin değerini değil, onun adresini vermek gerekir. 
//bu, & operatörü değişkenin önüne konularak yapılır.

//ek bilgi ve diğer format belirteçleri için: https://www.geeksforgeeks.org/format-specifiers-in-c/


```


## örnek kodlar

### basit bir hesap makinesi örneği
```c
#include <stdio.h>

int main()
{
    int sayi1, sayi2, sonuc;
    char islem;
    printf("Lutfen islemi giriniz:\n");
    scanf("%c", &islem);
    printf("Lutfen sayilari giriniz:\n");
    scanf("%d %d", &sayi1, &sayi2);
    if(islem == '+')
    {
        sonuc = sayi1 + sayi2;
    }
    else if(islem == '-')
    {
        sonuc = sayi1 - sayi2;
    }
    else if(islem == '*')
    {
        sonuc = sayi1 * sayi2;
    }
    else if(islem == '/')
    {
        sonuc = sayi1 / sayi2;
    }
    else
    {
        printf("Lutfen gecerli bir islem giriniz.\n");
        return 0;
    }
    printf("Sonuc: %d\n", sonuc);
    return 0;
}
```

### bir döngü boyunca sayacı bastırmak
```c
#include <stdio.h>

int main()
{
    int i = 0;
    while(i < 10)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
```

### üstteki while döngüsüne karşılık gelen for döngüsü
```c
#include <stdio.h>

int main()
{
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
```

### döngü ile alfabe'den bir string yapmak
```c
#include <stdio.h>

//65'in ascii karşılığı 'A'
//90'in ascii karşılığı 'Z'
//65'ten 90'a sayıların ascii karşılıkları da ingiliz alfabesinin A'dan Z'ye harfleri.

int main()
{
    char alfabe[27]; // 26 harf + 1 null karakter
    int imlec = 0;
    for(int i = 65; i <= 90; i++)
    {
        alfabe[imlec] = i;
        imlec++;
    }
    alfabe[26] = '\0'; // 26. index, son karakter
    printf("%s \n", alfabe);
}
