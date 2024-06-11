#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetorOriginal[10], tamanhoOriginal;


  printf("Digite o tamanho do vetor original: ");
  scanf("%d", &tamanhoOriginal);

  for (int i = 0; i < tamanhoOriginal; i++) {
    printf("Digite o elemento %d do vetor original: ", i + 1);
    scanf("%d", &vetorOriginal[i]);
  }

  
  int *vetorAuxiliar = (int *)malloc(tamanhoOriginal * sizeof(int));
  int tamanhoAuxiliar = 0;

  
  for (int i = 0; i < tamanhoOriginal; i++) {
    int encontrado = 0;

    for (int j = 0; j < tamanhoAuxiliar; j++) {
      if (vetorOriginal[i] == vetorAuxiliar[j]) {
        encontrado = 1;
        break;
      }
    }

    if (!encontrado) {
      vetorAuxiliar[tamanhoAuxiliar++] = vetorOriginal[i];
    }
  }

  
  free(vetorAuxiliar);

  
  printf("\nVetor com elementos únicos:\n");
  for (int i = 0; i < tamanhoAuxiliar; i++) {
    printf("%d ", vetorAuxiliar[i]);
  }

  return 0;
}
