#include <stdio.h>

#define LARG 80
#define ALT 100

int image[ALT][LARG];

#define WHITE 0
#define BLACK 1

void start_clean(int image[ALT][LARG]) {
    for(int i = 0; i < ALT; i++) {
        for(int j = 0; j < LARG; j++) {
            image[i][j] = WHITE;
        }
    }
}

void do_ean8(int image[ALT][LARG], const char* ean8) {
    int BarWidth = 5;
    int Abscissa = (LARG - (BarWidth * 8)) / 2;

    for(int i = 0; i < 8; i++) {
        int Code = ean8[i] - '0';
        int Width = (Code % 2 == 0) ? BarWidth : BarWidth * 2;

        for(int j = Abscissa + (i * BarWidth); j < Abscissa + (i * BarWidth) + Width; j++) {
            for(int k = 0; k < ALT; k++) {
                image[k][j] = (Code % 2 == 0) ? BLACK : WHITE;
            }
        }
    }
}

void print_image() {
    FILE* barcode;
    barcode = fopen("Codigo_de_barra.pbm","w+");
    if(barcode == NULL) {
        printf("Erro ao abrir o arquivo");

        return;
    }

    fprintf(barcode, "p1\n%d %d\n", LARG, ALT);
    for(int i = 0; i < ALT; i++) {
        for(int j = 0; j < LARG; j++) {
            fprintf(barcode, "%d", image[i][j]);
        }
        fprintf(barcode, "\n");

    }
    
    fclose(barcode);

}
