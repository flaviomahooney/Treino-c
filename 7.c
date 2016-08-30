#include <stdio.h>

int main()
{
    int idade;
    printf("diga sua idade");
    scanf("%d",&idade);
    
    if(idade<16)
    printf("Você nao pode votar ainda.");
    if(idade == 17 || idade == 16 || idade > 70)
    printf("Voto Facultativo");
    if(idade<=18 && idade < 70)
    printf("Você pode votar");
    
    return 0;
}