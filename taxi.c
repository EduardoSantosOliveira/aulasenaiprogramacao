#include <stdio.h>
#include <string.h>
void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");


}


int main (){
    abertura();

float valorcorrida = 0;

int bandeira;
    printf(" escolha se voce quer a bandeira 1 ou a 2");
        scanf("%d", &bandeira);


int kilomentragem;
    printf("quanto voce vai andar: ");
        scanf("%d", &kilomentragem);

if(bandeira == 1){
    valorcorrida = kilomentragem * 1.80;
        printf(" o valo da corrida e: %.2f", valorcorrida);

}else{
    valorcorrida = kilomentragem * 2.30;
        printf(" o valo da corrida e: %.2f", valorcorrida);
}

}






