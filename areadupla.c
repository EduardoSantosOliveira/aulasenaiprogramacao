#include <stdio.h>
#include <string.h>
void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");


}


int main (){
    abertura();

int base1;
    printf("digite a base do primeiro retangulo: ");
        scanf("%d", &base1);

int altura1;
    printf("digite a altura do primeiro retangulo: ");
        scanf("%d", &altura1);

int base2;
    printf("digite a base do segundo retangulo: ");
        scanf("%d", &base2);

int altura2;
    printf("digite a altura do segundo retangulo: ");
        scanf("%d", &altura2);

int resultadoarea1 = base1 * altura1;
    printf("esse e o seu resultado da area 1 %d\n", resultadoarea1);

int resultadoarea2 = base2 * altura2;
    printf("esse e o resultado da area 2 %d\n", resultadoarea2);

if(resultadoarea1 > resultadoarea2){
    printf("a primeira area e maior");

} else if(resultadoarea1 < resultadoarea2){
    printf("a segunda area e maior");
   
}else {
     printf(" as areas sao iguais");
  }
}



