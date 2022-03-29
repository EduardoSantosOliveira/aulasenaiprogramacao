#include <stdio.h>
#include <string.h>

void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");
}

int main(){

   abertura();

   int numero1;
   printf("digite se primeiro numero: ");
   scanf("%d", &numero1);

   int numero2;
   printf("digite seu segundo numero: ");
   scanf("%d", &numero2);

   if(numero1 > numero2 ){
     printf("o numero 1 maior a diferenca e: %d ", numero1 - numero2);
  }
 if(numero2 > numero1 ){
     printf("o numero 2 maior a diferenca e: %d ", numero2 - numero1);
  }
} 