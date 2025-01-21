#include <stdio.h>
#include "central.h"


int main() {
    int vetor[8];

    for(int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("%d", extractor(vetor));

    return 0;
}