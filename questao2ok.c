#include <stdio.h>
#include <math.h>

double poupanca(int tempo, double aporte, double tx_juros){
    int aux = 1;
    double total = 0;

    while(aux <= tempo){
    total = aporte*(1+tx_juros)*((pow((1+tx_juros), aux)-1)/tx_juros);
    printf("Montante ao fim do mes %d: R$ %.2f\n",aux, total);
    aux++;
    }
    return total;
}


int main(){



double total=0;
int tempo= 0;
scanf("%d", &tempo);
double aporte=0;
scanf("%lf", &aporte);
double tx_juros=0;
scanf("%lf", &tx_juros);


poupanca(tempo, aporte, tx_juros);
    return 0;
}