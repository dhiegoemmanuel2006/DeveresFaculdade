#include <stdio.h>

int main(){
	int lista[7] = {2 , 4 , 6 , 8 , 11 , 12 , 13 };
	int resultado, i;
	
	for(i = 0; i < 7; i++){
		resultado += lista[i];
	}
	
	printf("O resulta de todos elementos da lista: %d", resultado);
	
	return 0;
}
