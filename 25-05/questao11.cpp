#include <stdio.h>

int main(){
	int matrix[5][5];
	
	int i, j;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++) {
			printf("Valor a ser associado a matriz: ");
			scanf("%d", &matrix[i][j]);
		}
	}
	 
	 printf("Valores da diagonal principal: ");
	 i = 0;  // resetando a variavel i para printar tudo
	 j = 0;
	 while(i < 5){
	 	printf("%d ", matrix[i][j]);
	 	i++;
	 	j++;
	 }
	 
	 return 0;
}

