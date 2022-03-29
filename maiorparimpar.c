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

//int resultado;

/*if(resultado = numero1 > numero2){
   printf("numero 1 e maior");
}else{
    printf("numero 2 e maior");
}

if(resultado %2 == 0){
printf("ele e par");
}else{
  printf("ele e impar");
}*/

  if(numero1 > numero2 && numero1 %2 == 0){
     printf("o numero 1 maior e  par ");
  }
  if(numero1 > numero2 && numero1 %2 != 0){
    printf("o numero 1 maior e  impar ");
  }
  if(numero2 > numero1 && numero1 %2 == 0){
     printf("o numero 2 maior e  par ");
  }
  if(numero2 > numero1 && numero1 %2 != 0){
    printf("o numero 2 maior e  impar ");

  }
} 
