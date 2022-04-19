#include <stdio.h>

int main(){
    int quantidade;
    int numero;
    int soma = 0;
    int i = 1;

    printf("quantos numeros serao digitados?" );
        scanf("%d", &quantidade);

    while (i <= quantidade){
        printf("digite outro numero: ");
            scanf("%d", &numero);
                soma = soma + numero;
                    i++;
    }
    printf("Soma = %d", soma);
    
}