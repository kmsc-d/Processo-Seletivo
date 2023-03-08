#include <stdio.h>
#include <stdlib.h>

#define MAX 30

double menorFaturamento(double fatPorDia[]){
    int i;
    double menor;

    menor = fatPorDia[0];
    while(menor == 0.0){
        i = 0;
        menor = fatPorDia[i+1];
        i++;
    }

    for(i = 0; i <= MAX; i++){
        if(fatPorDia[i] != 0.0 && menor > fatPorDia[i]){
            menor = fatPorDia[i];
        }
    }

    return (menor);
}

double maiorFaturamento(double fatPorDia[]){
    int i;
    double menor;

    menor = fatPorDia[0];
    while(menor == 0.0){
        i = 0;
        menor = fatPorDia[i+1];
        i++;
    }

    for(i = 0; i <= MAX; i++){
        if(fatPorDia[i] != 0.0 && menor < fatPorDia[i]){
            menor = fatPorDia[i];
        }
    }

    return (menor);
}

double mediaMensal(double fatPorDia[]){
    int i;
    int nDias = 0;
    double media = 0.0;

    for(i = 0; i <= MAX; i++){
        if(fatPorDia[i] != 0.0){
            media += fatPorDia[i];
            nDias++;
        }
    }

    return (media/nDias);
}

int diasFatSuperior(double fatPorDia[]){
    int i;
    int nDias = 0;
    double mediaM = mediaMensal(fatPorDia);

    for(i = 0; i <= MAX; i++){
        if(fatPorDia[i] > mediaM){
            nDias++;
        }
    }

    return nDias;
}

int main(){

    double fatPorDia[MAX];

    fatPorDia[0] = 22174.1664;
    fatPorDia[1] = 24537.6698;
    fatPorDia[2] = 26139.6134;
    fatPorDia[3] = 0.0;
    fatPorDia[4] = 0.0;
    fatPorDia[5] = 26742.6612;
    fatPorDia[6] = 0.0;
    fatPorDia[7] = 42889.2258;
    fatPorDia[8] = 46251.174;
    fatPorDia[9] = 11191.4722;
    fatPorDia[10] = 0.0;
    fatPorDia[11] = 0.0;
    fatPorDia[12] = 3847.4823;
    fatPorDia[13] = 373.7838;
    fatPorDia[14] = 2659.7563;
    fatPorDia[15] = 48924.2448;
    fatPorDia[16] = 18419.2614;
    fatPorDia[17] = 0.0;
    fatPorDia[18] = 0.0;
    fatPorDia[19] = 35240.1826;
    fatPorDia[20] = 43829.1667;
    fatPorDia[21] = 18235.6852;
    fatPorDia[22] = 4355.0662;
    fatPorDia[23] = 13327.1025;
    fatPorDia[24] = 0.0;
    fatPorDia[25] = 0.0;
    fatPorDia[26] = 25681.8318;
    fatPorDia[27] = 1718.1221;
    fatPorDia[28] = 13220.495;
    fatPorDia[29] = 8414.61;
    fatPorDia[30] = 0.0;

    printf("Menor faturamento: %f.", menorFaturamento(fatPorDia));
    printf("\n");

    printf("Maior faturamento: %f.", maiorFaturamento(fatPorDia));
    printf("\n");

    printf("Numero de dias com faturamento maior que a media mensal: %d.", diasFatSuperior(fatPorDia));
    printf("\n");

    return 0;
}
