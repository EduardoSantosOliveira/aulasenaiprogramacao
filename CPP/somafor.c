#include <stdio.h>

int main(){
    int quantidade;
    int numero;
    int soma = 0;

        printf("quantos numeros serao digitados?" );
            scanf("%d", &quantidade);

    for(int i = 1; i <= quantidade; i++){
        printf("digite um numero:");
            scanf("%d", &numero);
                soma = soma + numero;
    }
    printf("soma = %d", soma);

}