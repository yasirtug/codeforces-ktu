#include <stdio.h>

//http://codeforces.com/contest/940/submission/36242330

int main(){
    int n, durum = 0;
    long int enBuyuk, enKucuk;
    scanf("%d", &n);
    long int a[n];
    char b[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    scanf("%s", b);

    int eldekiL, eldekiR;
    //geriye doğru karşılaştırdığımız 5 sayı içindeki en büyük, en küçük değerler

    int enBuyukL = -1000000000, enKucukR = 1000000000;
    //ilk karşılaştırma için olabilecek en küçük, en büyük değerler

    int i = -1;
    while(b[++i])
    {
        //L'yi bulmak için
        if(durum == 0 && b[i] == '1')
        {
            durum = 1;
            enBuyuk = -1000000000;
            for(int j = 0; j > -5; j--)
            {
                if(a[i + j] > enBuyuk)
                {
                    enBuyuk = a[i + j];
                }
            }
            eldekiL = enBuyuk;
            if(enBuyukL < enBuyuk)
            {
                enBuyukL = enBuyuk;
            }
        }
        //R'yi bulmak için
        if(durum == 1 && b[i] == '0')
        {
            durum = 0;
            enKucuk = 1000000000;
            for(int j = 0; j > -5; j--)
            {
                if(a[i + j] < enKucuk)
                {
                    enKucuk = a[i + j];
                }
            }
            eldekiR = enKucuk;
            if(enKucukR > enKucuk)
            {
                enKucukR = enKucuk;
            }
        }
    }

    printf("%d %d\n", enBuyukL + 1, enKucukR - 1);
    return 0;
}