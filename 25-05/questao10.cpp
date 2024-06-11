#include <stdio.h>

int main() {
	int array[10];
	int i;
	int inversor = 9;
	
	for(i = 0; i < 10; i++) {
		printf("Valor para ser adicionado a lista: ");
		scanf("%d", &array[i]);
	}
	
	for (i = 0; i < 5; i++) {
    	int temp = array[i];
    	array[i] = array[9 - i];
    	array[9 - i] = temp;
    }

	printf("Lista invertida: ");
	for(i = 0; i < 10; i++) {
		printf("%d ", array[i]); 
	}
	
	return 0;
}
