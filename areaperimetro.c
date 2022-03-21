#include <stdio.h>
#include <string.h>
void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");


}


int main (){
    abertura(); 

    int ladoA = 0;
    printf("lado A: ");
    scanf("%d", &ladoA);

    int ladoB = 0;
    printf("lado B: ");
    scanf("%d", &ladoB);

    int resultadolado = ladoA * ladoB;
    int resultadoperimetro = ladoA + ladoB + ladoA + ladoB;

   printf("esse e a area do quadrado: %d\n", resultadolado);
   printf("esse e o perimetro do quadrado: %d\n", resultadoperimetro);
}