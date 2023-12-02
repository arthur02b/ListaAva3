#include <stdio.h>
#include <string.h>



int valorRomano(char c) {
    switch(c) {
        //VALORES DOS ALGARISMOS ROMANOS
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;

        default: return 0;
    }
}

int converterRomanoParaDecimal(char *romano) {

    int resultado = 0;
    
    int comprimento = strlen(romano);

    for (int i = 0; i < comprimento; i++) 
    {
        int valorAtual = valorRomano(romano[i]);
        int proximoValor = (i < comprimento - 1) ? valorRomano(romano[i + 1]) : 0;

        if (valorAtual < proximoValor) 
        {
            resultado += proximoValor - valorAtual;
            i++;
        } 
        else 
        {
            resultado += valorAtual;
        }
    }

    return resultado;
}

void converterDecimalParaBinario(int decimal) {
    if (decimal > 1) {
        converterDecimalParaBinario(decimal / 2);}
    printf("%d", decimal % 2);
}

int main() {
    char numeroRomano[13];

    scanf("%s", numeroRomano);

    int decimal = converterRomanoParaDecimal(numeroRomano);
//VALOR BASE BINARIA
    printf("%s na base 2: ", numeroRomano);
    converterDecimalParaBinario(decimal);
    printf("\n");
//VALOR BASE DECIMAL
    printf("%s na base 10: %d\n", numeroRomano, decimal);
//VALOR BASE HEXADECIMAL
    printf("%s na base 16: %x\n", numeroRomano, decimal);





    return 0;
}