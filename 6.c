#include <stdio.h>

int main()
{
    float lado[3];
    int n;
    for(n=0;n<=2;n++)
    {
        printf("Diga o lado do angulo %d.\n",n+1);
        scanf("%f",&lado[n]);
    }
    
    if(lado[0] == lado[1] && lado[1] == lado[2])
    printf("Equilátero");
    if(lado[0] != lado[1] && lado[1] != lado[2] && lado[0] != lado[2])
    printf("Escaleno");
    if(lado[0] == lado[1] && lado[1] != lado[2])
    printf("Iscóceles");
    if(lado[1] == lado[2] && lado[2] != lado[0])
    printf("Iscóceles");
    if(lado[0] == lado[2] && lado[2] != lado[1])
    printf("Iscóceles");
    
    
    return 0;
}