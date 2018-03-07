#include <stdio.h>
#include <stdlib.h>
//http://codeforces.com/contest/940/submission/36055256
int main(){
    int n,k;
    char *s, c;
    scanf("%d %d",&n,&k);
    if(n<k){
//büyük olan kadar alana ihtiyacımız var
        s=malloc(k);
    }
    else{
        s=malloc(n);
    }
    printf("\n");
//bu printf 48. testte gelen runtime error'u çözüyor. daha iyi bir çözümü var muhtemelen
    int elemanlar[26]={0};
    int eleman,enKucukEleman=25;
    //en küçük elemana 25 atadık çünkü bundan küçük var mı diye bakacağız, olabileceği en yüksek değeri verdik.
    scanf("%s",s);
    for(int i=0;i<n;i++)
    {//eleman ağırlıklarını buluyor, bu sırada en küçük elemanı hesaplıyor
        eleman=(int)s[i]-97;
        elemanlar[eleman]=1;
        
        if(eleman<enKucukEleman)
        {
            enKucukEleman=eleman;
        }
    }
    if(k>n)
    {
//k, n'den küçükse basit bir işlem yapıyoruz
        for(int i=0;i<k-n;i++)
        {
            s[n+i]=enKucukEleman+97;
        }
        s[k]=0;
        printf("%s\n",s);
        return 0;
    }
    else
    {
        for(int i=k-1;i>-1;i--)
        {
            for(int h=s[i]-96;h<26;h++)
            {
                if(elemanlar[h])
                {
                    s[i]=h+97;
                    for(int o=i+1;o<k;o++)
                    {
                        s[o]=enKucukEleman+97;
                    }
                    s[k]=0;
                    printf("%s\n",s);
                    return 0;
                }
            }
        }
    }
    
}