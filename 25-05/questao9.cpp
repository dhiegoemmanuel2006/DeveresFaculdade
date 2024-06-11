#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main(){
	int numeroElementos;
	int lista[MAX_SIZE];
	int maior, menor;

	int i;
	
	printf("Número de elementos que a lista tera: ");
	scanf("%d", &numeroElementos);
	
	for(i = 0; i < numeroElementos; i++){
		printf("Valor para o elemento %d da lista: ", i + 1);
		scanf("%d", &lista[i]);
	}
	
	maior = lista[0];
	for(i = 0; i < numeroElementos; i++){
		if(lista[i] > maior){
			maior = lista[i];
		} else{
			maior = lista[0];
		}
	}
	
	menor = lista[0];
	for(i = 0; i < numeroElementos; i++){
		if(lista[i] < menor){
			menor = lista[i];
		} else{
			menor = lista[0];
		}
	}
	printf("O maior elemento é %d", maior);
	printf("\nO menor elemento é %d", menor);
	
	return 0;
}
