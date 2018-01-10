#include <stdio.h>
int main()
{
    int n,m,u=2;
    scanf("%d %d",&n,&m);
    if(n>29)
    {
        printf("%d",m);
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        u=u*2;
    }
    printf("%d",m%u);
}
