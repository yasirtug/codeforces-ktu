# A - Phone Numbers

[Sorunun linki](http://codeforces.com/problemset/problem/1060/A)\
\
Bir string'e eğer uzunluğu 11'se ve "8xxxxxxxxxx"(her 'x' bir sayı) biçimindeyse, telefon numarasıdır diyelim.\
Mesela, "80123456789" ve "80000000000" telefon numarasıyken "8012345678" veya "79000000000" değil.\
\
Elinizde *n* tane rakamlı kart var ve bu kartlardan olabildiğince fazla telefon numarası oluşturmak istiyorsunuz. Her kart en fazla bir telefon numarasında kullanılabilir ve bütün kartları kullanmak zorunda değilsiniz. Telefon numaraları farklı olmak zorunda değil.

## Giriş

Girişin ilk satırı bir *n* tamsayısı, sahip olduğunuz kartların sayısını içeriyor. (1 ≤ *n* ≤ 100)\İkinci satır, *n* rakamlı bir bir string içeriyor, ("0", "1", ..., "9" karakterleri) s1,s2,…,sn. String başka hiç bir karakter içermiyor. Başında ya da sonunda boşluk gibi.

## Çıkış

En azından bir telefon numarası bu kartlardan oluşturabiliyorsa, oluşturulabilecek maksimum telefon numarası sayısını verin. Yoksa, 0 verin.

## Örnekler

**Giriş**\
11\
00000000008\
**Çıkış**\
1\
\
**Giriş**\

```22\
0011223344556677889988\
```

**Çıkış**\

```2
```

**Giriş**\

```11\
31415926535\
```

**Çıkış**\

```0\
```