#include <stdio.h>

int main ()
{
    int numeros[5] = {1, 2, 3, 4, 5};
    int soma = 0;
    
    for(int i = 0; i < 5; i++){
            soma += numeros[i];
    }
    printf(" A soma �: %d\n", soma);
    return 0;
}
