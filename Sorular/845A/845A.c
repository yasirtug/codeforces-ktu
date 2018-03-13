#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int dizi[n * 2];
    for(int i = 0; i < n * 2; i++)
    {
        scanf("%d", &dizi[i]);
    }
    int yuk;
    for(int i = 0; i < n * 2 - 1; i++)
    {
        for(int j = n * 2; j > i - 1; j--)
        {
            if(dizi[j] > dizi[j+1])
            {
              yuk = dizi[j];
              dizi[j] = dizi[j+1];
              dizi[j+1] = yuk;
            }
        }
    }
    if(dizi[n]>dizi[n-1])
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}