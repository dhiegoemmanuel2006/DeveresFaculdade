#include <stdio.h>

int main() {
	
	int list[5] =  {0, 10, 20, 30, 40};
	int posicao;
	int num;
	int i;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	printf("Posicao onde ele ficara (lista atualmente {0, 10, 20, 30, 40})\n");
	printf("VALOR ENTRE 1 E 5: ");
	scanf("%d", &posicao);
	
	if(posicao > 5 || posicao < 1) {
		printf("Valor inserido nao e valido!");
		return 1;
	} else {
		printf("Valor sera adicionado!\n");
	}
	list[posicao - 1] = num;
	
	printf("Lista apos a mudanca: ");
	for(i = 0; i < 5; i++) {
		printf("%d ", list[i]);
	}
	
	return 0;
}
