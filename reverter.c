#include <stdio.h>
#include <stdlib.h>


void inverter(char str[]){
    int i, aux, fim, tam = strlen(str);

    fim = tam - 1;
    for(i = 0; i < tam/2; i++){
        aux = str[i];
        str[i] = str[fim];
        str[fim] = aux;
        fim--;
    }
}

int main(){

    char str[30] = {"Parabens a todos!"};

    printf("String: %s\n", str);

    inverter(str);
    printf("String invertida: %s", str);


}
