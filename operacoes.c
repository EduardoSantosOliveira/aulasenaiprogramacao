#include <stdio.h>
#include <string.h>
void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");


}


int main (){
    abertura(); 

    int numero1;
    printf("qual seu primeiro numero:");
    scanf("%d", &numero1);

    int numero2;
    printf("qual seu segundo numero: ");
    scanf("%d", &numero2);
    //int soma = numero1 + numero2;
    double media = (numero1 + numero2) /2.0;


    printf("a soma: %d + %d = %d\n", numero1,numero2,numero1+numero2);

    printf("a subtracao: %d - %d = %d\n", numero1,numero2,numero1-numero2);

    printf("o produto: %d x %d = %d\n",numero1,numero2,numero1*numero2);

    printf("a divisao: %d : %d = %d\n",numero1,numero2,numero1/numero2);

    printf("a media: %d e %d = %.2f\n", numero1, numero2 , media);
}
    