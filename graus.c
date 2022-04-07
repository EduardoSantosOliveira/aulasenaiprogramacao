#include <stdio.h>
#include <string.h>
void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");
}

float fahrenheit(){
float celsius;
     printf(" digite a temperatura em celsisus: ");
     scanf("%f", &celsius);
float coversao = celsius * 1.8 + 32;
printf(" a temperatura em ºF %.2f",coversao);


}


int main (){
    abertura();

fahrenheit();

}