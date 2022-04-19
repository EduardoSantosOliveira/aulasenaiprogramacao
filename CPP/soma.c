#include <stdio.h>

int main(){

int soma = 0;
int numero;
    printf("primeiro numero: ");
        scanf("%d", &numero);
            soma = numero + soma;

while(numero > 0){
    printf("digite seu outro numero: ");
        scanf("%d", &numero);
            soma = numero + soma;
}
printf("SOMA = %d", soma);
}