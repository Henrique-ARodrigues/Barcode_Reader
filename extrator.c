#include <stdio.h>


int extractor( int numeracao[]) {
    int soma = 0;
    int aux = 0;
    int verificador = 0;

    for(int i = 0; i < 7; i++) {
        numeracao[i] * 3;
        soma += numeracao[i];
        
    }

    aux = soma;

    for(int i = 0; i < 9; i++) {
        if(soma % 10 == 0) {
            verificador = soma - aux;
            break;

        } else {
            soma++;
        }
    }
    
    return verificador;
}