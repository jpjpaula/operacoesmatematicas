#include <stdio.h>

int dividir(int a, int b) {
    if (b == 0) {
        printf("Erro: divisão por zero!\n");
        return 0; // ou outro comportamento definido pelo professor
    }
    return a / b;
}
