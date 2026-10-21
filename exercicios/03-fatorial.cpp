#include <stdio.h>

int main() {
    int num;
    int fat = 1; // Inicializado com 1

    printf("Digite um numero: ");
    scanf("%d", &num);

        for (int i = num; i >= 1; i--) {
            fat = fat * i;
        }
        printf("O fatorial de %d! e: %d\n", num, fat);
    }
