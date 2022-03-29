#include <stdio.h>
#include <string.h>

void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");
}

int main(){

   abertura();

   int pedro;
    printf("idade de pedro: ");
    scanf("%d", &pedro);

   int ismael;
    printf("idade de ismael: ");
    scanf("%d", &ismael);

   int joana;
    printf("idade de joana: ");
    scanf("%d", &joana);

     if(pedro > ismael && joana){
       printf("o pedro e o mais velho dentre os tres");
     

     } else if(ismael > pedro && joana ){
       printf("o ismael e o mais velho dentre os tres");
     

     } else {
       printf("o joana e o mais velha dentre os tres");
     }
}   