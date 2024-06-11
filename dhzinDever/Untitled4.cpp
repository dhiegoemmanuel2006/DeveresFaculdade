#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main() {
    FILE *arquivo;
    char mensagem[100];

    arquivo = fopen("mensagem.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(arquivo, "Olá Mundo\n");
    
    fclose(arquivo);

    arquivo = fopen("mensagem.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Digite a mensagem que deseja escrever no arquivo: ");
    
    fgets(mensagem, sizeof(mensagem), stdin);

    fprintf(arquivo, "%s", mensagem);

    fclose(arquivo);

    printf("Mensagem escrita no arquivo: %s", mensagem);

    return 0;
}
