#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	float euro = 5.94573,real,Conversao;
	char input[50];
    int valid = 1;
    
   	printf("///Converta seu real em Euro///\n");
	printf("Quantidade em Real: ");
	scanf("%s", input);

	for (int i = 0; i < strlen(input); i++) {
        if (!isdigit(input[i]) && input[i] != '.' && input[i] != '-') {
            valid = 0;
            break;
        }
    }
    
	if(valid){	
	real = atof(input);
	Conversao = real * euro;
	printf("Conversão: %.2f$\n", Conversao);
	printf("Conversão realizada com sucesso!");
	}
	else{
		printf("Digite um numero válido!");
	}
	return 0;
}
