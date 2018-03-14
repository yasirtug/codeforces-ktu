#include <stdio.h>
#include <stdlib.h>

//http://codeforces.com/contest/845/submission/36258821

int main()
{
    char string[6];
    int dizi[6];
    scanf("%s",string);
    for(int i = 0; i < 6; i++)
    {
        dizi[i] = string[i] - 48;
    }
    int fP = dizi[0] + dizi[1] + dizi[2];
    int sP = dizi[3] + dizi[4] + dizi[5];
    int fark = fP - sP;
    int absFark = abs(fark);
    if(fark == 0)
    {
        printf("0\n");
        return 0;
    } else if(fark < 0)
    {
        //sola eklenecek
        dizi[0] = 9 - dizi[0];
        dizi[1] = 9 - dizi[1];
        dizi[2] = 9 - dizi[2];
    } else
    {
        //sağa eklenecek
        dizi[3] = 9 - dizi[3];
        dizi[4] = 9 - dizi[4];
        dizi[5] = 9 - dizi[5];
    }
    int yuk;
    for(int i = 0; i < 6; i++)
    {
        for(int k = 0; k < 6; k++)
        {
            if(dizi[i] > dizi[k])
            {
                yuk = dizi[i];
                dizi[i] = dizi[k];
                dizi[k] = yuk;
            }
        }
    }
    for(int i = 0; i < 6; i++)
    {
        if(absFark <= dizi[i])
        {
            printf("%d\n", i + 1);
            return 0;
        } else{
            absFark -= dizi[i];
        }
    }
}