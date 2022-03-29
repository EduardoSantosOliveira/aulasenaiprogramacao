#include <stdio.h>
#include <string.h>

void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");
}


int main(){

   double soma = 0; 
   int notas;
   int numerodasnotas;
   
   
   printf("escolha o numero os numeros que voce deseja calcular a media: ");
   scanf("%d", &numerodasnotas);
   
   

   for(int i = 1; i <= numerodasnotas; i++){
   printf("digite um dos numeros: ");
   scanf("%d" , &notas);
   soma = soma + notas ;
   }
  
  double media = soma / numerodasnotas;

   printf("essa vai ser a media dos valores: %.1f", media);
   
   
}