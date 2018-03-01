#include <stdio.h>
//http://codeforces.com/contest/940/submission/35814978
int main()
{
    int n,d,i,k,temp;
    scanf(" %d %d",&n,&d);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf(" %d",a+i);
    }
    for(int i=0;i<n;i++)
    {
        for(int k=i;k<n;k++)
        {
            if(a[k]<a[i])
            {
                temp=a[i];
                a[i]=a[k];
                a[k]=temp;
            }
        }
    }
    int enBuyukAralik=0;
    for(i=0;i<n;i++)
    {
        for(k=i;k<n;k++)
        {
            if(a[k]-a[i]<=d)
            {
                if(k-i>enBuyukAralik) 
                {
                    enBuyukAralik=k-i;
                }
            }
        }
    }
    printf("%d\n",n-enBuyukAralik-1);
}