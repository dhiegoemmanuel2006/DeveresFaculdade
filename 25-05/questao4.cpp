#include <stdio.h>

int main() {
	int i;
	int list[10];
	
	for(i = 0; i < 10; i++) {
		printf("Digite o valor para o elemento %d da lista: ", i+1);
		scanf("%d", &list[i]);
	}
	
	printf("Lista: ");
	for(i = 0; i < 10; i++) {
		printf("%d ", list[i]);
	}
	
	return 0;
}
