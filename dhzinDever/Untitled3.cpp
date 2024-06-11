#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    //local
    setlocale(LC_ALL, "portuguese");
    
    //Nome do Prompt
    SetConsoleTitle("Criando arquivo em Pasta");

    //Variaveis
    char NomePasta[256],NomeArquivo[256];

    //Atribuiçao Pasta e Arquivo
    printf("Escreva o nome da Pasta: ");
    scanf("%255s", NomePasta);

    printf("Escreva o nome do aquivo(terminar com txt): ");
    scanf("%255s", NomeArquivo);

    //CRIANDO A PASTA
    if (CreateDirectory(NomePasta, NULL)){
        printf("Pasta criada com sucesso!\n\n");
    }
    else{
        printf("Error ao criar pasta!\n\n");
    }

    char fullPath[512];
    snprintf(fullPath, sizeof(fullPath), "%s\\%s", NomePasta, NomeArquivo);

    //CRIANDO O ARQUIVO 
    HANDLE hFile = CreateFile(
        fullPath,            
        GENERIC_WRITE,                 
        0,                             
        NULL,                          
        CREATE_NEW,                  
        FILE_ATTRIBUTE_NORMAL,        
        NULL                           
    );
    //CONFIRMAÇAO DE CRIAÇAO DE ARQUIVO
    if(hFile != INVALID_HANDLE_VALUE){
        printf("Arquivo criado com sucesso!\n\n");
        CloseHandle(hFile);
    }
    else{
        printf("Error ao criar arquivo!\n\n");
    }
    return 0;
}
