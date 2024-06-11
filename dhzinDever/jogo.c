#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TAMANHO_PALAVRA 100

void forca(int estado) {
    if (estado == 0) {
        printf("\n------------");
        printf("\n|          |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    } else if (estado == 1) {
        printf("\n------------");
        printf("\n|          |");
        printf("\n|          0");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    } else if (estado == 2) {
        printf("\n------------");
        printf("\n|          |");
        printf("\n|          0");
        printf("\n|          | ");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    } else if (estado == 3) {
        printf("\n------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|          -| ");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    } else if (estado == 4) {
        printf("\n------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|          -|- ");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    } else if (estado == 5) {
        printf("\n------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|          -|- ");
        printf("\n|          /");
        printf("\n|");
        printf("\n-");
    } else if (estado == 6) {
        printf("\n------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|          -|- ");
        printf("\n|          / \\");
        printf("\n|    Você Perdeu");
        printf("\n-");
    }
}

int main(void) {
    char palavra[MAX_TAMANHO_PALAVRA];
    char letras_usadas[MAX_TAMANHO_PALAVRA];
    int erros = 0;
    int acertos = 0;

    printf("Jogo da Forca\n\n");

    printf("Digite a palavra secreta: ");
    fgets(palavra, MAX_TAMANHO_PALAVRA, stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; 

    printf("\e[1;1H\e[2J");

    while (erros < 6 && acertos < strlen(palavra)) {
        forca(erros);

        printf("\nLetras usadas: %s\n", letras_usadas);

        for (int i = 0; i < strlen(palavra); i++) {
            if (palavra[i] == ' ') {
                printf(" ");
            } else if (strchr(letras_usadas, palavra[i]) != NULL) {
                printf("%c", palavra[i]);
                acertos++;
            } else {
                printf("_");
            }
        }
        printf("\n");

        printf("Digite uma letra: ");
        char letra;
        scanf(" %c", &letra);

        if (strchr(letras_usadas, letra) != NULL) {
            printf("Você já usou essa letra. Tente outra.\n");
            continue;
        }

        letras_usadas[strlen(letras_usadas)] = letra;
        letras_usadas[strlen(letras_usadas)] = ' ';

        if (strchr(palavra, letra) == NULL) {
            erros++;
        }

        printf("\e[1;1H\e[2J");
    }

    forca(erros);
    if (erros >= 6) {
        printf("\n\nVocê perdeu! A palavra era: %s\n", palavra);
    } else {
        printf("\n\nParabéns! Você acertou a palavra: %s\n", palavra);
    }

    return 0;
}