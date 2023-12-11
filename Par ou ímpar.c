#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese");
    int num;
    //Criei uma estrutura de repetição para que o usuário possa decidir quando encerrar a aplicação.
    do{
        printf("Digite um número inteiro ou digite 0 para sair\n");
        scanf("%d", &num);
        if (num % 2 == 0){
            printf("O número %d é par\n", num);
        }
        else{
            printf("O número %d é ímpar\n", num);
        }
    }while (num != 0);
    return (0);
}
