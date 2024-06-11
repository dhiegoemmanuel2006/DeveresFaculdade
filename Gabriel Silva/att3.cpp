#include <stdio.h>

int main(){
	int numeros[4];
	int i;
	
	for(i = 0; i<4; i++){
		printf("Digite um valor para a lista:");
		scanf("%d", &numeros[i]);
	}
	printf("\nValores da lista: %d %d %d %d", numeros[0], numeros[1], numeros[2], numeros[3]);
	return 0;
}
