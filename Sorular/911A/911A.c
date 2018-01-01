#include <stdio.h>

int main()
{
    int n,m,min=1000000000,range=0,minRange=1000000000;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        range++;
        if(m<min)
        {
            min=m;
            range=0;
            minRange=1000000000;
        }
        else if(m==min)
        {
            if(range<minRange)
            {
                minRange=range;
            }
            range=0;
        }
    }
    printf("%d",minRange);
}