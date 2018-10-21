
#include <stdio.h>

int main()
{
    int l, r, a;
    scanf("%d %d %d", &l, &r, &a);
    while(a) // a, sıfırdan farklı olduğu müddetçe
    {
        if(l < r)
        {
            l++; // left küçükse left'i arttırıyoruz
        }
        else
        {
            r++; // right küçükse right'ı arttırıyoruz
        }
        a--; // a'yı bir eksiltiyoruz
    }
    if(l < r)
    {
        printf("%d\n", l * 2);
    }
    else
    {
        printf("%d\n", r * 2);
    }
    // küçük olanıb iki katını cevap olarak veriyoruz.
}
