#include <stdio.h>

int main() {
	int primeiroVetor[3] = {0, 2, 4};
	int segundoVetor[3] = {1, 3, 5};
	int terceiroVetor[6];
	int i, j = 0;
	
	for(i = 0; i < 6; i+=2){
		terceiroVetor[i] = primeiroVetor[j];
		j++;
	}
	
	j=0;
	for(i = 1; i < 6; i+=2){
		terceiroVetor[i] = segundoVetor[j];
		j++;
	}
	
	printf("Valores no vetor: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", terceiroVetor[i]);
	}
	
	return 0;
}
