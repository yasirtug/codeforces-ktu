giris=input().split(" ")
#giris[0]=k2
#giris[1]=k3
#giris[2]=k5
#giris[3]=k6
k2=int(giris[0])
k3=int(giris[1])
k5=int(giris[2])
k6=int(giris[3])

ikiBesAlti=min(k2,k5,k6)#oluşturulabilecek 256 sayısı
k2-=ikiBesAlti# 256 nın kullandığını çıkarıyoruz.
'''
k5-=ikiBesAlti# Bu işlemlerin 32 oluşturmaya faydası
k6-=ikiBesAlti# olmadığı için bunlara gerek yok.'''
ucIki=min(k3,k2)#oluşturulabilecek 32 sayısı

print(ikiBesAlti*256+ucIki*32)

