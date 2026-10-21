#include <stdio.h>

int main() {
    int num, contador = 0;

    for (int i = 1; i <= 10; i++) {
    	printf("Digite qual numero voce quer descobrir quantos multiplos de 3 tem: ");
   	 	scanf("%d", &num);
        if (num % 3 == 0) {
            contador++;
        }
    }

    printf("\nVoce tem: %d multiplos de 3\n", contador);

    return 0;
}
