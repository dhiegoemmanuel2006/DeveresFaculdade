#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	char menu;
	float num1,num2,resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	while(1){
	
	printf("///Escolha uma Opera��o/// \n");
	printf("Digite 1 para adi��o \nDigite 2 para subtra��o \nDigite 3 para divis�o \nDigite 4 para multiplica��o \n");
	printf("Escolha opera��o: ");
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
			printf("Digite uma op�ao v�lida!");
	}
  } 
	
	return 0;
}
