#include <stdio.h>

int main (){
	int linhasImpares = 0, linhasPares = (1,1,1,1);
	int matrix [4][4] = {{linhasImpares}, {linhasPares,linhasPares,linhasPares,linhasPares}};
	
	printf("%d %d %d %d \n%d %d %d %d \n%d %d %d %d \n%d %d %d %d",matrix[0][0],matrix[0][1], matrix[0][2], matrix[0][3], matrix[1][0], matrix[1][1], matrix[1][2],matrix[1][3],matrix[0][0],matrix[0][1], matrix[0][2], matrix[0][3], matrix[1][0], matrix[1][1], matrix[1][2],matrix[1][3]);
	return 0;
}
