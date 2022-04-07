#include <stdio.h>
#include <string.h>
void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");


}


int main (){
    abertura();

float nota;
float soma = 0;
float media;
int maiorNota = 0;
int menorNota = 10;

for(int i = 1; i <= 10;i++){
   printf("digite %d.a nota: ",i);
   scanf("%f", &nota);
   soma = soma + nota;
   
   if(nota > maiorNota){
       maiorNota = nota;
   }
   if(nota < menorNota){
       menorNota = nota;
   }
}

media = soma / 10;

printf("a soma das notas e: %.2f\n", soma);
printf("a media das notas e: %.2f\n", media);
printf("a maior nota e: %d\n", maiorNota);
printf("a menor nota e: %d\n", menorNota );

}
