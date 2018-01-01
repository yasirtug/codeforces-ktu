#include <stdio.h>
int main()
{
    char s[100001]={0};
    char b[100001]={0};
    int c[100002]={0};
    scanf("%s",s);
    int toplam=0;
    for(int i=0;i<100001;i++)
    {
        if(s[i]==s[i+1])
        {
            b[i]=1;
        }
    }
    for(int i=0;i<100001;i++)
    {
        if(b[i]==1)
        {
            toplam++;
        }
        c[i+1]+=toplam;
    }
    int n,l,r;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&l,&r);
        printf("%d\n",c[r-1]-c[l-1]);
    }
}

