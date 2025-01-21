#include <stdio.h>


int extractor( int numeracao[]) {
    int soma = 0;
    int aux = 0, aux_2 = 0;
    int verificador = 0;

    for(int i = 0; i < 7; i++) {
        aux = numeracao[i] * 3;
        soma += aux;
        
    }

    aux_2 = soma;

    for(int i = 0; i < 9; i++) {
        if(soma % 10 == 0) {
            verificador = soma - aux_2;
            break;

        } else {
            soma++;
        }
    }
    
    if(verificador == numeracao[7]) {
        return verificador;

    }else {
        return 0;
    }
    
}