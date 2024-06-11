#include <stdio.h>

int main(){
	int i, j;
	int matriz[2][3];
	int valorMatriz = 1;
	
	i = 0;
	j = 0;
	
	while(j < 3){
	
	matriz[i][j] = valorMatriz;
	j++;
	valorMatriz++;
	}
	
	i = 1;
	j = 0;
	
	while(j < 3) {
		matriz[i][j] = valorMatriz;
		j++;
		valorMatriz++;
	}
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
		
		printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}	
