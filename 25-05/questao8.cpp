#include <stdio.h>

int main(){
	int list[15];
	int i, resultado = 0;
	
	for(i = 0; i < 15; i++){
		printf("Valor para o elemente %d da lista que vamos somar", i+1);
		printf("\nDigite o valor para a lista: ");
		scanf("%d", &list[i]);
		resultado += list[i];
	}
	printf("Resultado total das somas: %d", resultado);
	
	return 0;
}
