#include <stdio.h>
#include <string.h>

void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");
}

int main(){

 abertura();

int chuteirasA;
printf("digite a quntidade de chuteiras Niske: ");
scanf("%d", &chuteirasA);

int chuteirasB;
printf("digite a quntidade de chuteiras Daidas: ");
scanf("%d", &chuteirasB);

int chuteirasC;
printf("digite a quntidade de chuteiras Lastego: ");
scanf("%d", &chuteirasC);

printf("existem:\n %d chuteiras Niske\n %d chuteiras Daidas\n %d chuteiras Lastego\n" , chuteirasA,chuteirasB,chuteirasC);
}

