//http://codeforces.com/contest/903/submission/33488001
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
        if(a[i]>12||a[i]%3==0||a[i]==7||a[i]==10) printf("YES\n");
        else printf("NO\n");
    }
}