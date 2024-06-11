#include <stdio.h>

int main()
{
	int i, j, matriz[4][4];
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(i == 1 || i == 3){
				matriz[i][j] = 1;
			}
			else{
				matriz[i][j] = 0;
			}
		}
	}
	
	for(i = 0; i < 4; i++){
		
		for(j = 0; j < 4; j++){
		
		printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
