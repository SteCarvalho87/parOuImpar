#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese");
    int num;
    //Criei uma estrutura de repeti��o para que o usu�rio possa decidir quando encerrar a aplica��o.
    do{
        printf("Digite um n�mero inteiro ou digite 0 para sair\n");
        scanf("%d", &num);
        if (num % 2 == 0){
            printf("O n�mero %d � par\n", num);
        }
        else{
            printf("O n�mero %d � �mpar\n", num);
        }
    }while (num != 0);
    return (0);
}
