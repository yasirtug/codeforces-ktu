#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]={0};
    char b[20]={0};
    char aRakamlar[11]={0};
    char c[20]={0};
    scanf("%s %s",a,b);
    char lnA=strlen(a);
    char lnB=strlen(b);
    char cursor=0;
    char gecmisBler[20]={0};
    char gecmisCursor=0;
    char hataYok=1;
    for(int i=0;i<lnA;i++)
    {
        aRakamlar[a[i]-48]++;
    }
    if(lnA<lnB)
    {
        int t=0;
        for(int i=9;i>-1;i--)
        {
            for(int k=0;k<aRakamlar[i];k++)
            {
                a[t]=i+48;
                t++;
            }
        }
        printf("%s\n",a);
        return 0;
    }
    else
    {
        for(int i=0;i<lnA;i++)
        {
            if(aRakamlar[b[i]-48]&&hataYok)
            {
                c[cursor]=b[i];
                cursor++;
                aRakamlar[b[i]-48]--;
                gecmisBler[gecmisCursor]=b[i]-48;
                gecmisCursor++;
            }
            else
            {
                for(int k=b[i]-49;k>-10;k--)
                {
                    if(k<0)
                    {
                        hataYok=0;
                        i-=2;
                        cursor--;
                        c[cursor]=0;
                        gecmisCursor--;
                        aRakamlar[gecmisBler[gecmisCursor]]++;
                        break;
                    }
                    if(aRakamlar[k])
                    {
                        c[cursor]=k+48;
                        cursor++;
                        aRakamlar[k]--;
                        for(int h=9;h>-1;h--)
                        {
                            for(int k=0;k<aRakamlar[h];k++)
                            {
                                c[cursor]=h+48;
                                cursor++;
                            }
                        }
                        printf("%s\n",c);
                        return 0;
                        break;
                    }
                }
            }
        }
        printf("%s\n",c);
    }
}