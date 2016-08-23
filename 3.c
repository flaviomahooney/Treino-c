#include <stdio.h>

int data(int ano)
{
    int atual;
    int anos;
    atual = 2016;
    anos = 0;
    anos = atual - ano;
    
    return anos;
}

int main()
{
    int an,idade;
    printf("Qual ano você nasceu?");
    scanf("%d",&an);
    idade = data(an);
    
    printf("%d",idade);
    return 0;
}