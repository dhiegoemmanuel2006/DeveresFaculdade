#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	char menu;
	float num1,num2,resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	while(1){
	
	printf("///Escolha uma Operação/// \n");
	printf("Digite 1 para adição \nDigite 2 para subtração \nDigite 3 para divisão \nDigite 4 para multiplicação \n");
	printf("Escolha operação: ");
	scanf("%s", &menu);
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	switch(menu){
		case '1':
			resultado = num1 + num2;
			printf("%f + %f = %f\n", num1, num2, resultado);
			break;
		case '2':
			resultado = num1 - num2;
			printf("%f - %f = %f\n", num1, num2, resultado);
			break;
		case '3':
			resultado = num1/num2;
			printf("%f / %f = %f\n", num1, num2, resultado);
			break;
		case '4':
			resultado = num1 * num2;
			printf("%f * %f = %f\n", num1, num2, resultado);
			break;
		case '5':
			exit(0);
		default:
			printf("Digite uma opçao válida!");
	}
  } 
	
	return 0;
}
