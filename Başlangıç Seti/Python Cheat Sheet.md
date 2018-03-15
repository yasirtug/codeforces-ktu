### input almak:
```python
giris = input()
```

### string'i bölmek:
```python
string = 'a b _ c d'
dizi = string.split()
#dizi: ['a', 'b', '_', 'c', 'd']
dizi = string.split('_')
#dizi: ['a b ', ' c d']
```

### dönüşümler
#### string'i integer'a dönüştürmek
```python
string = '123'
integer = int(string)
#integer: 123
```
#### string'i float'a dönüştürmek
```python
string = '123.5'
float = float(string)
#float: 123.5
```
#### string'e dönüştürmek
```python
integer = 123
string = str(integer)
#string: 123
```
### for döngüsü
```python
a = [1, 2, 5]
for i in a:
    print(i)
#1
#2
#5
```
#### range kullanımı
özel aralık kullanmak istendiğinde kullanılır

```python
for i in range(3):
    print(i)
#0
#1
#2
for i in range(3, 6):
    print(i)
#3
#4
#5
for i in range(0, 5, 2):
    print(i)
#0
#2
#4
for i in range(3, -3, -1):
    print(i)
#3
#2
#1
#0
#-1
#-2
```

### while döngüsü
```python
sayi = 5
while sayi > 0:
    print(sayi)
    sayi -= 1
#5
#4
#3
#2
#1
```

### break ile continue
```python
a = [1, 2, 5, 7, 42, 123]
for i in a:
    if i == 2:
        continue
    elif i == 42:
        break
    print(i)
#1
#5
#7
```
continue, döngüde sonraki adıma atlar. kendisinden sonra gelen işlemler yapılmaz.break, döngüyü bitirir. kendisinden sonra gelen işlemler yapılmaz.

break ve continue, while'da da aynı işlevler ile kullanılabilir.