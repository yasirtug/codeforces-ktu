#include <stdio.h>
//http://codeforces.com/contest/940/submission/35925343
int main()
{
    long long unsigned sayi,bolen,cikarmaUcreti,bolmeUcreti,kalan,mod,ucret=0;
    scanf(" %llu %llu %llu %llu",&sayi,&bolen,&cikarmaUcreti,&bolmeUcreti);
    while(sayi!=1)
    {
        mod=sayi%bolen;
        if(mod)
        {
            sayi=sayi-mod;
            ucret+=cikarmaUcreti*mod;
        }
        else
        {
            kalan=sayi-sayi/bolen;
            if(kalan*cikarmaUcreti>bolmeUcreti)
            {
                sayi/=bolen;
                ucret+=bolmeUcreti;
            }
            else
            {
                ucret+=(sayi-1)*cikarmaUcreti;
                sayi=1;
            }
        }
    }
    printf("%llu\n",ucret);
}