#include <stdio.h>

int main()
{
	int i, matriz[4];
	
	for(i = 0; i < 4; i++){
		printf("Digite um valor para a matriz: ");
		scanf("%d", &matriz[i]);
	}
	
	for(i = 0; i < 4; i++) {
		printf("%d ", matriz[i]);
	}
	
	return 0;
}
