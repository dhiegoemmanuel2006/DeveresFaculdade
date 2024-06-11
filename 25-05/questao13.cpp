#include <stdio.h>

int main() {
	int vetor[5] = {6, 4, 3, 1, 9};
	
	int i;
	
	for(i = 0; i < 5; i++) {
		if(vetor[i] %  2 == 0) {
			printf("Valor par encontrado no vetor: %d\n", vetor[i]);
		}
	}
	
	return 0;
}
