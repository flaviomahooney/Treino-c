#include <stdio.h>


int fibonnaci(int n)
{
    int n1=0,n2=1,aux=1,cont;
    
    for(cont=0;cont<=n;cont++)
    {
     printf("%d\n",n1);
     aux=n1;
     n1=n2;
     n2= aux + n2;
     
    }
    return n1;
}
    
    int main()
    {
        int num,fib;
        printf("Diga um número");
        scanf("%d",&num);
        fib = fibonnaci(num);
        return 0;
    }