Bize bir dizi sayı veriliyor. Amacımız bu sayılar arasında en küçük olan sayıların (en küçük sayıdan 2 tane olması garanti ediliyor) dizideki yerleri arasındaki en kısa farkı bulmak.

Örneğin
>2 1 3 5 4 1 2 3 1
Dizisindeki en küçük elemanlar 1 ve bunların arasındaki en kısa fark 3

Önce bulmamız gereken şey dizideki en küçük eleman gibi gelebilir ancak böyle yapılırsa diziyi en az iki kere döneriz. Önce en küçük elemanı bulmak için, ardından bu en küçük elemanın olduğu indeksler arasında en az fark olanı bulmak için. Bunu yapmaya gerek yok. Çünkü dizideki en küçük elemanı bulduğumuzda yapacağımız şey ileri doğru saymak. Biz de zaten ileri doğru gidiyoruz. Yani en küçük sayı gelene kadar gelen o ana kadarki en küçük sayı, en küçük sayıymış gibi davranıp saymaya başlasak, daha küçük sayı gelmediği sürece sayıp kendisinden bir daha geldiğinde saydığımız uzunluğu kenara yazar ve sayacı sıfırlayıp tekrar saymaya başlayarak devam ederiz.

Bu şekilde sayıları bir diziye bile atmamıza gerek kalmaz. Geriye dönüp hiç bakmıyoruz.