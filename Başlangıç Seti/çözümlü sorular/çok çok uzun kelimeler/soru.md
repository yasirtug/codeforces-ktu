# Çok Çok Uzun Kelimeler

[Sorunun linki](http://codeforces.com/problemset/problem/71/A)

Bazen kelimeler 'telekominikasyon' ya da 'muvaffakiyetsizleştiricileştiriveremeyebileceklerimizdenmişsinizcesine' gibilerdir ve bunları bir yazı içinde birden fazla kez kullanmak oldukça yorucu olabilir.

Bi kelimeye çok uzun diyelim, eğer tam olarak 10 harften uzunsa. Bütün çok uzun kelimeler özel bir kısaltma ile yer değiştirmeli.

Bu kısaltma şu şekilde yapılıyor: kelimenin ilk harfini ve son harfini yazıyoruz ve bunların arasına kelimenin ilk harfi ile son harfi arasındaki harf sayısını yazıyoruz. Bu sayı onluk tabanda ve 0 ile başlamamalı.

Böylece 'telekominikasyon', 't14n' olarak ve 'muvaffakiyetsizleştiricileştiriveremeyebileceklerimizdenmişsinizcesine' 'm70e' olarak ifade edilecek.

Kelimeleri kısaltmalarıyla değiştirme işlemini otomatikleştirmeniz isteniyor. Bütün çok uzun kelimeler kısaltmalarıyla değiştirilmeli ve çok da uzun olmayan kelimeler herhangi bir değişim altına girmemeli.

## Input

İlk satır **n** tamsayısını içeriyor. Devam eden **n** satır, bir kelime içeriyor. Bütün kelimeler küçük Latin harflerinden oluşuyor ve 1'den 100'e kadar uzunluklardalar.

## Output

**n** satır basın. Her *i*'inci satır input'taki *i*'inci kelimenin yerine konulacak kelimeyi içermeli.

## Örnekler
```
input:

4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

output:

word
l10n
i18n
p43s
```