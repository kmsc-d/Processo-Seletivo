#include <stdio.h>
#include <stdlib.h>

int pertenceToFibonacci(int x){
    int a, b, valor;

    a = 1;
    b = 1;
    valor = 0;

    if(x == 0){
        return (0);
    }

    if(x == a){
        return (1);
    }

    while(valor < x){
        valor = a + b;
        a = b;
        b = valor;
    }

    if(valor == x){
        return (1);
    }else{
        return (0);
    }
}

int main()
{
    int x = 0;

    scanf("%d", &x);

    int resultado = pertenceToFibonacci(x);

    if(resultado == 1){
        printf("O valor informado pertence a sequencia de fibonacci.");
    }else{
        printf("O valor informado nao pertence a sequencia de fibonacci.");
    }

    return 0;
}

