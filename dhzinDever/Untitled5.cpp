#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main() {
	char titulo[100],bio[100];
    FILE *arquivo;
    char mensagem[100];

    arquivo = fopen("mensagem.html", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    
    printf("Digite o seu nome: ");
    fgets(titulo, sizeof(titulo), stdin);
    
    printf("Digite a sua biografia breve: ");
    fgets(bio, sizeof(bio), stdin);


    fprintf(arquivo, "<!DOCTYPE html>\n");
    fprintf(arquivo, "<html>\n");
    fprintf(arquivo, "<head><title> %s </title></head>\n",titulo);
    fprintf(arquivo, "<body>\n");
    fprintf(arquivo, "<h1> minha biografia </h1>\n");
    fprintf(arquivo, "<h2> %s: </h2>\n",titulo);
    fprintf(arquivo, "<p> %s </p>\n",bio);
    fprintf(arquivo, "</body>\n");
    fprintf(arquivo, "</html>\n");
    
    fclose(arquivo);

    arquivo = fopen("mensagem.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    return 0;
}
