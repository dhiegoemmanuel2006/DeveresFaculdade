#include <stdio.h>
#include <string.h>

#define MAX_NOMES 100
#define MAX_TAM_NOME 50

void bubbleSort(char nomes[][MAX_TAM_NOME], int n) {
    int i, j;
    char temp[MAX_TAM_NOME];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(nomes[j], nomes[j + 1]) > 0) {
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], temp);
            }
        }
    }
}

int main() {
    char nomes[MAX_NOMES][MAX_TAM_NOME];
    int n, i;

    printf("Quantos nomes deseja inserir? (máximo de 100) ");
    scanf("%d", &n);

    if (n > MAX_NOMES || n <= 0) {
        printf("Número inválido de nomes.\n");
        return 1;
    }

    printf("Insira os nomes um por um:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", nomes[i]);
    }

    bubbleSort(nomes, n);

    printf("Nomes ordenados:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
