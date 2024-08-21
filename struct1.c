#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    
    char nome[50];
    int idade; 
    char endereco[50];

};

int main(){

    struct pessoa pessoa1;

        printf("Insira seu nome: ");
        fgets(pessoa1.nome,sizeof(pessoa1.nome), stdin);
        printf("Insira sua idade: ");
        scanf("%d",& pessoa1.idade); getchar();
        printf("Insira seu endereco: ");
        fgets(pessoa1.endereco,sizeof(pessoa1.endereco), stdin);


        printf("\nNome: %s",pessoa1.nome);
        printf("Idade: %d \n",pessoa1.idade);
        printf("Endereco: %s",pessoa1.endereco);

        
return 0;

}