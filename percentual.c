#include <stdio.h>
#include <stdlib.h>

#define MAX 5

double fatTotal(double fatPorMes[]){
    int i;
    double total = 0.0;

    for(i = 0; i < MAX; i++)
        total += fatPorMes[i];

    return (total);
}

double percentual(double fatDoMes, double fatTotal){
    double percentual;
    percentual = (fatDoMes * 100.0)/fatTotal;
    return percentual;
}

int main(){
    double fatPorMes[MAX];

    fatPorMes[0] = 67836.43;
    fatPorMes[1] = 36678.66;
    fatPorMes[2] = 29229.88;
    fatPorMes[3] = 27165.48;
    fatPorMes[4] = 19849.53;

    double total = fatTotal(fatPorMes);

    printf("Percentual de representacao de SP :%.2f\n", percentual(fatPorMes[0], total));
    printf("Percentual de representacao de RJ :%.2f\n", percentual(fatPorMes[1], total));
    printf("Percentual de representacao de MG :%.2f\n", percentual(fatPorMes[2], total));
    printf("Percentual de representacao de ES :%.2f\n", percentual(fatPorMes[3], total));
    printf("Percentual de representacao de Outros :%.2f", percentual(fatPorMes[4], total));

    return 0;
}
