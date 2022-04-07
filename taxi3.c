#include <stdio.h>
#include <string.h>
void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");


}




int main(){
    abertura();

    printf("ATENCAO: Taxa minima do taxi: R$3.50\n\n");

    char quer;
    printf("O taxi oferece desconto? S/N");
    scanf(" %c", &quer);

    int bandeira;
    printf("Digite o numero da bandeira <1 ou 2>: \n");
    scanf("%d", &bandeira);

    float kilometragem;
    printf("Digite a kilometragem rodada: \n");
    scanf("%f", &kilometragem);

    float valorCorrida;
    float valorMinimo = 3.50;

    if(quer == 'S'){
        if(bandeira == 1){
        valorCorrida = kilometragem * 1.80;
        valorCorrida = (valorCorrida * 70) / 100;

        }
        else{
            valorCorrida = kilometragem * 2.30;
            valorCorrida = (valorCorrida * 70) / 100;

        }
    }
    
    else if(bandeira == 1){
        valorCorrida = kilometragem * 1.80;

    }
    else{
        valorCorrida = kilometragem * 2.30;

    }
    if(valorMinimo < 1){
        printf("Valor minimor da corrida %.2f", valorMinimo);

    }else{
        printf("Valor da corrida: %.2f", valorCorrida);

    }    
    
}