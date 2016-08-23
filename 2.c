#include <stdio.h>

int num(int x)

{
    int soma;
    int media;
    for(x=0;x<=100;x++)
    {
        soma = soma + x;
    }
    
    media = soma / 100;
    
    return media;
}

int main()

{
    int n,total;
    
    total = num(n);
    printf("%d",total);
    
 return 0;   
}