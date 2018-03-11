#include <stdio.h>

int main()
{
    int r, c;
    scanf(" %d %d", &r, &c);
    char otlak[r][c];
    for(int i = 0;i < r; i++)
    {
        scanf(" %s", otlak + i);
    }
    
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(otlak[i][j] == 'W')
            {
                if(i>0)
                if(otlak[i-1][j] == 'S')
                {
                    printf("No");
                    return 0;
                }
                if(i<r-1)
                if(otlak[i+1][j] == 'S')
                {
                    printf("No");
                    return 0;
                }
                if(j>0)
                if(otlak[i][j-1] == 'S')
                {
                    printf("No");
                    return 0;
                }
                if(j<c-1)
                if(otlak[i][j+1] == 'S')
                {
                    printf("No");
                    return 0;
                }
            }
        }
    }
    printf("Yes\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(otlak[i][j] == '.')
            {
                otlak[i][j] = 'D';
            }
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%c",otlak[i][j]);
        }
        printf("\n");
    }
    return 0;
}