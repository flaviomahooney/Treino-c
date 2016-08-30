#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y)
{
    int somatoria;
    
    somatoria = x + y;
    return somatoria;
}

int mult(int x, int y)
{
    int multiplicaçao;
    
    multiplicaçao = x * y;

    return multiplicaçao;
}

int sub(int x, int y)
{
    int subtraçao;
    
    subtraçao = x - y;
    return subtraçao;
}

int divi(int x, int y)
{
    
    int divisao;
    divisao = x / y;
    return divisao;
}

int main()
{
    int n , m;
    printf("Digite o primeiro numero");
    scanf("%d",&n);
    printf("Digite o segundo numero");
    scanf("%d",&m);
}