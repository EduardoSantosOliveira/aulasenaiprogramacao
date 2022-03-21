#include <stdio.h>
#include <string.h>
void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");


}


int main (){
    abertura(); 

    int idadePedro;
    printf("digite a idade de pedro:");
    scanf("%d", &idadePedro);

    int idadeJoana;
    printf("digite a idade de joana:");
    scanf("%d", &idadeJoana);
    

    printf("idade de pedro:%d\n", idadePedro);
    printf("idade de joana:%d\n", idadeJoana);

    if(idadePedro > idadeJoana) {
    printf("A idade de pedro e maior",idadePedro);

     } else if (idadePedro < idadeJoana) {
         printf("A idade de joana e maior",idadeJoana);
     
      } else {
         printf("As idades sao iguais:%d,%d", idadeJoana,idadePedro);
}
}

    