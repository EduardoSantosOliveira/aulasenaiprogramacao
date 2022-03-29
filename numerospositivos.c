#include <stdio.h>
#include <string.h>

void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");
}

int main(){

   abertura();

   int numero1;
   printf("digite seu numero: ");
   scanf("%d", &numero1);

   for(int i = 1; i < numero1 ; i++){
     if(i %2 != 0){
     printf("esse sao os numeros impares de %d sao: %d\n", numero1, i );


   }
   }
}

