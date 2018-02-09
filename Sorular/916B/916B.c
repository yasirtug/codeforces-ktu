#include <stdio.h>

int main()
{
    long long int n;
    static int bits[1000000]={0};
    int cursor=999910;
    int openbits=0,m;
    int sayi=0;
    int x=0;
    
    scanf("%lli %d",&n,&m);
    while(n)
    {
        if(n&1) {bits[cursor]=1;openbits++;}
        cursor++;
        n>>=1;
    }   
    if(openbits>m){printf("No");return 0;}
    printf("Yes\n");
    for(int i=cursor-1;i>-1;i--)
    {
        if(bits[i]+openbits>m)
        {
            x=1;
            break;
        }
        bits[i-1]+=bits[i]*2;
        openbits+=bits[i];
        bits[i]=0;
    }
    if(x)
    {
        for(int i=0;i<cursor+1;i++)
        {
            while(bits[i])
            {
                if(openbits==m) break;
                bits[i]--;
                bits[i-1]+=2;
                openbits++;
                i--;
            }
            if(openbits==m) break;
        }
    }
    for(int i=cursor-1;i>-1;i--)
    {
        for(int k=0;k<bits[i];k++)
        {
            sayi++;
            printf("%d ",i-999910);
        }
    }
}