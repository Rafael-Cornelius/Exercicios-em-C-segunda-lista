#include <stdio.h>

int main(){
	int idade;
	int soma = 0;
	float media;
	for( int i = 1; i <= 3; i++){
		printf("escreva sua idade: ");
		scanf("%d", &idade);
		if(idade > 0){
			soma += idade;
		}else{
			printf("idade invalida");
		}
}
		media = (float) soma / 3;
		printf("\n a media das idade e: %.2f", media);
}
