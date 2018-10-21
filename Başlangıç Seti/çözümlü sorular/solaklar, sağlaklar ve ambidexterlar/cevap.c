
#include <stdio.h>

int main()
{
    int l, r, a;
    scanf("%d %d %d", &l, &r, &a);
    while(a)
    {
        if(l < r)
        {
            l++;
        }
        else
        {
            r++;
        }
        a--;
    }
    if(l < r)
    {
        printf("%d\n", l * 2);
    }
    else
    {
        printf("%d\n", r * 2);
    }
}
